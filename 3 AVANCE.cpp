#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <string> //biblioteca para utilizar string.
#include <fstream> //Para crear archivos
#include <stdlib.h>

using namespace std;

struct Tienda
{
    int numero, year;
    string nombre, desc, genero, clas, consola, status, caract; //Permite imprimir numeros y caracteres con espacios.
    float precio, impuesto = 0, total = 0;
};

int contador, alta;

Tienda* Producto; //Punteros
void Alta();
void Modificar();
void Eliminar();
void Lista();
void Archivo();


int main()
{
    
    int opcion;
 
        printf("\t %c%c%c MENU DE OPCIONES %c%c%c \n", 206, 205, 205, 205, 205, 206);
        printf("1.- Alta de art%cculos \n", 161);
        printf("2.- Modificacion de art%cculos \n", 161);
        printf("3.- Baja de art%cculos \n", 161);
        printf("4.- Lista de art%cculos \n", 161);
        printf("5.- Limpiar pantalla \n");
        printf("6.- Salir \n");
        scanf_s("%d", &opcion);

        switch (opcion)
        {
        case 1:
            Alta();
            return main();
            break;
        case 2:
            Modificar();
            return main();
            break;
        case 3:
            Eliminar();
            return main();
            break;
        case 4:
            Lista();
            return main();
            break;
        case 5:
            system("cls"); //Limpia la pantalla.
            return main();
            break;
        case 6:
            Archivo();
            exit(1); //Cierra la pantalla.
            break;
        default:
            printf("La opcion no se encuentra en el menu, vuelva a intentarlo \n");
            break;
        }
}

void Alta()
{
    printf("Indique la cantidad de productos que desee dar de alta \n");
    scanf_s("%d", &alta);
    Producto = new Tienda[alta]; //new hace el arreglo dinámico.

    for (int i = 0; i < alta; i++)
    {
        printf("Indique el numero del articulo \n"); //\n funciona como endl.
        scanf_s("%d", &Producto[i].numero); //Comando para imprimir cadena de caracteres con espacios.
        cin.ignore(); //Permite utilizar las variables en string sin problema.
        printf("Indique el nombre del articulo \n");
        getline(cin, Producto[i].nombre);
        printf("Indique el a%co de lanzamiento del articulo \n", 164);
        scanf_s("%d", &Producto[i].year);
        cin.ignore();
        printf("Agregue una descripcion para el articulo \n");
        getline(cin, Producto[i].desc);
        printf("Indique el genero del articulo \n");
        getline(cin, Producto[i].genero);
        printf("Indique la clasificacion del articulo \n");
        getline(cin, Producto[i].clas);
        printf("Indique las caracteristicas del articulo \n");
        getline(cin, Producto[i].caract);
        printf("Indique la consola \n");
        getline(cin, Producto[i].consola);
        printf("Indique el precio del articulo \n");
        scanf_s("%f", &Producto[i].precio);
        Producto[i].impuesto = 16 * Producto[i].precio / 100; //Operación para optener el 16%.
        Producto[i].total = Producto[i].precio + Producto[i].impuesto;
    }
}

void Modificar()
{
    int item, op, op2;

    do
    {
        printf("Ingrese el item del art%cculo que desee modificar \n", 161);
        scanf_s("%d", &item);
        //j = j - 1;
        for (int i = 0; i < alta; i++)
        {
            if (Producto[i].numero == item)
            {
                if (Producto[i].status == "ELIMINADO")
                {
                    printf("PRODUCTO ELIMINADO \nIngrese otro numero \n");
                    op2 = 1;
                }
                else
                {
                    op2 = 2;
                    
                }
            } 
        }
    } while (op2 == 1);
    printf("%cQue desea modificar%c \n1.-Nombre \n2.-Descripcion \n3.-Genero \n4.-Clasificacion \n5.-Consola \n6.-Precio \n7.-Año \n8.-Caracteristicas \n", 168, 63);
    scanf_s("%d", &op);

    switch (op)
    {
    case 1:
        for (int i = 0; i < alta; i++)
        {
            if (Producto[i].numero == item)
            {
                cin.ignore();
                printf("Indique el nombre del articulo \n");
                getline(cin, Producto[i].nombre);
            }
        }  
        break;
    case 2:
        for (int i = 0; i < alta; i++)
        {
            if (Producto[i].numero == item)
            {
                cin.ignore();
                printf("Agregue una descripcion para el articulo \n");
                getline(cin, Producto[i].desc);
            }
        }
        break;
    case 3:
        for (int i = 0; i < alta; i++)
        {
            if (Producto[i].numero == item)
            {
                cin.ignore();
                printf("Indique el genero del articulo \n");
                getline(cin, Producto[i].genero);
            }
        }
        break;
    case 4:
        for (int i = 0; i < alta; i++)
        {
            if (Producto[i].numero == item)
            {
                cin.ignore();
                printf("Indique la clasificacion del articulo \n");
                getline(cin, Producto[i].clas);
            }
        }
        break;
    case 5:
        for (int i = 0; i < alta; i++)
        {
            if (Producto[i].numero == item)
            {
                cin.ignore();
                printf("Indique la consola \n");
                getline(cin, Producto[i].consola);
            }
        }
        break;
    case 6:
        for (int i = 0; i < alta; i++)
        {
            if (Producto[i].numero == item)
            {
                printf("Indique el precio del articulo \n");
                scanf_s("%f", &Producto[i].precio);
                Producto[i].impuesto = 16 * Producto[i].precio / 100;
                Producto[i].total = Producto[i].precio + Producto[i].impuesto;
            }
        }
        break;
    case 7:
        for (int i = 0; i < alta; i++)
        {
            if (Producto[i].numero == item)
            {
                cin.ignore();
                printf("Indique el a%co de lanzamiento del articulo \n", 164);
                scanf_s("%d", &Producto[i].year);
            }
        }
        break;
    case 8:
        for (int i = 0; i < alta; i++)
        {
            if (Producto[i].numero == item)
            {
                cin.ignore();
                printf("Indique las caracteristicas del articulo \n");
                getline(cin, Producto[i].caract);
            }
        }
        break;
    }
}

void Eliminar()
{
    int item;
    printf("Ingrese el item del art%cculo que desee eliminar \n", 161);
    scanf_s("%d", &item);
    for (int i = 0; i < alta ; i++)
    {
        if (Producto[i].numero == item)
        {
            printf("Eliminando registro %d... \n", i + 1);
            Producto[i].status = "ELIMINADO";
        } 
    }
}

void Lista()
{
    for (int i = 0; i < alta; i++)
    {
        if (Producto[i].status == "ELIMINADO")
        {
            printf("REGISTRO %d ELIMINADO \n", i + 1);
        }
        else
        {
            printf("Numero: %d \n", Producto[i].numero);
            printf("Nombre: %s \n", Producto[i].nombre.c_str());
            printf("A%co de lanzamiento: %d \n", 164, Producto[i].year);
            printf("Descripcion: %s \n", Producto[i].desc.c_str());
            printf("Genero: %s \n", Producto[i].genero.c_str());
            printf("Clasificacion: %s \n", Producto[i].clas.c_str());
            printf("Caracteristicas: %s \n", Producto[i].caract.c_str());
            printf("Consola: %s \n", Producto[i].consola.c_str());
            printf("Precio unitario: %f \n", Producto[i].precio);
            printf("Impuesto: %f \n", Producto[i].impuesto);
            printf("Precio total: %f \n", Producto[i].total);
        }
    }
}

void Archivo()
{
    ofstream archivo; //Para leer archivos
    string nombrearchivo, texto;
    int texto2;
    float texto3;
    
    nombrearchivo = "altaproductos.txt";

    archivo.open(nombrearchivo.c_str());

    if (archivo.fail())
    {
        printf("%cERROR%c \nNo se pudo crear el archivo \n", 173, 33);
        exit(1);
    }
    archivo << "No. Producto" << "\t";
    archivo << "Nombre" << "\t" << "\t" << "\t";
    archivo << "Año de lanzamiento" << "\t";
    archivo << "Descripcion" << "\t" << "\t" << "\t";
    archivo << "Genero" << "\t" << "\t";
    archivo << "Clasificacion" << "\t" << "\t";
    archivo << "Caracteristicas" << "\t" << "\t" << "\t";
    archivo << "Consola" << "\t" << "\t";
    archivo << "Precio" << "\n";

    for (int i = 0; i < alta; i++)
    {
        if (Producto[i].status == "ELIMINADO")
        {
            texto = "PRODUCTO ELIMINADO";
            texto2 = i + 1;
            archivo << texto << " " << texto2 << "\n";
        }
        else
        {
            texto2 = Producto[i].numero;
            archivo << texto2 << "\t" << "\t";
            texto = Producto[i].nombre;
            archivo << texto << "\t" << "\t";
            texto2 = Producto[i].year;
            archivo << texto2 << "\t" << "\t";
            texto = Producto[i].desc;
            archivo << texto << "\t" << "\t" << "\t";
            texto = Producto[i].genero;
            archivo << texto << "\t" << "\t";
            texto = Producto[i].clas;
            archivo << texto << "\t" << "\t";
            texto = Producto[i].caract;
            archivo << texto << "\t" << "\t";
            texto = Producto[i].consola;
            archivo << texto << "\t" << "\t";
            texto3 = Producto[i].total;
            archivo << texto3 << "\t" << "\t" << "\n";
        }
    }

    archivo.close();
}