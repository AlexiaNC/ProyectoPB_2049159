#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <string> //biblioteca para utilizar string.

using namespace std;

struct Tienda
{
    int numero;
    string nombre, desc, genero, clas, consola; //Permite imprimir numeros y caracteres con espacios.
    float precio, impuesto = 0, total = 0;
};


int main()
{
    Tienda Producto[3];
    int opcion;
    do
    {
        printf("\t **MENU DE OPCIONES** \n");
        printf("1.- Alta de articulos \n");
        printf("2.- Modificacion de articulos \n");
        printf("3.- Baja de articulos \n");
        printf("4.- Lista de articulos \n");
        printf("5.- Limpiar pantalla \n");
        printf("6.- Salir \n");
        scanf_s("%d", &opcion);
        
        switch (opcion)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                printf("Indique el numero del articulo \n"); //\n funciona como endl.
                scanf_s("%d", &Producto[i].numero); //Comando para imprimir cadena de caracteres con espacios.
                cin.ignore(); //Permite utilizar las variables en string sin problema.
                printf("Indique el nombre del articulo \n");
                getline(cin, Producto[i].nombre);
                printf("Agregue una descripcion para el articulo \n");
                getline(cin, Producto[i].desc);
                printf("Indique el genero del articulo \n");
                getline(cin, Producto[i].genero);
                printf("Indique la clasificacion del articulo \n");
                getline(cin, Producto[i].clas);
                printf("Indique la consola \n");
                getline(cin, Producto[i].consola);
                printf("Indique el precio del articulo \n");
                scanf_s("%f", &Producto[i].precio);
                Producto[i].impuesto = 16 * Producto[i].precio / 100; //Operación para optener el 16%.
                Producto[i].total = Producto[i].precio + Producto[i].impuesto;
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            for (int i = 0; i < 3; i++)
            {
                printf("Numero: %d \n", Producto[i].numero);
                printf("Nombre: %s \n", Producto[i].nombre.c_str());
                printf("Descripcion: %s \n", Producto[i].desc.c_str());
                printf("Genero: %s \n", Producto[i].genero.c_str());
                printf("Clasificacion: %s \n", Producto[i].clas.c_str());
                printf("Consola: %s \n", Producto[i].consola.c_str());
                printf("Precio: %f \n", Producto[i].total);
            }
            break;
        case 5:
            system("cls"); //Limpia la pantalla.
            break;
        case 6:
            exit(1); //Cierra la pantalla.
            break;
        default:
            printf("La opcion no se encuentra en el menu, vuelva a intentarlo \n");
            break;
        }
    } while (opcion != 6);
   
}