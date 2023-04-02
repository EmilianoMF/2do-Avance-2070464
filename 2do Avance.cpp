#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <string> 
using namespace std;

struct datos
{
	char nombre[20];
	char genero[20];
	string descripcion;
	int codigo;
	float precio;
};

int main()
{
	datos articulo[3];
	int  opcion;
	
	do
	{
	printf( "\t\t\t\t***MENU DE OPCIONES***\n");
	printf( "1) ALTA.\n");
	printf( "2) MODIFICACIONES\n");
	printf( "3) BAJA\n");
	printf( "4) LISTA\n");
	printf( "5) LIMPIAR PANTALLA\n");
	printf( "6) SALIR\n");
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1:
		for(int i=0; i<3;i++)
		{
			printf("Ingrese el nombre del articulo:\n");
			cin.ignore();
			gets_s(articulo[i].nombre);
			printf("Ingrese alguna descripcion del articulo:\n");
			getline(cin, articulo[i].descripcion);
			printf("\nIngrese el genero del articulo:\n");
			gets_s(articulo[i].genero);
			printf("Ingrese el codigo del articulo:\n");
			scanf_s("%d", &articulo[i].codigo);
			printf("Ingrese el precio de su articulo:\n");
			scanf_s("%f", &articulo[i].precio);
		}
		break;
	case 2:
		break;

	case 3:
		break;

	case 4:
		printf("\t\t\t\t**LISTA**\n");
		for (int i = 0; i < 3; i++)
		{
			printf("NOMBRE: %s\n",articulo[i].nombre);
			printf("CODIGO: %d\n",articulo[i].codigo);
			printf("DESCRIPCION: %s\n",articulo[i].descripcion.c_str());
			printf("GENERO: %s\n", articulo[i].genero);
			printf("PRECIO: %f\n", articulo[i].precio + articulo[i].precio * 0.16);
			printf("\n----------------------------------------------------\n");
		}
		break;
	case 5:
		system("cls");
		break;

	case 6:
		exit(1);

	default:
		return main();
		break;
	}
	} while (opcion != 6);
}