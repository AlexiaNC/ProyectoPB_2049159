#include <iostream>
#include <string> //biblioteca para utilizar string.

using namespace std;

int main()
{
    int opcion, decision;
    string numero, nombre, desc, genero, clas, consola; //Permite imprimir numeros y caracteres con espacios.
    float precio, impuesto, total;
    cout << "\t **MENU DE OPCIONES**" << endl;
    cout << "1.- Alta de articulos" << endl;
    cout << "2.- Modificacion de articulos" << endl;
    cout << "3.- Baja de articulos" << endl;
    cout << "4.- Lista de articulos" << endl;
    cout << "5.- Limpiar pantalla" << endl;
    cout << "6.- Salir" << endl;
    cin >> opcion;
    switch (opcion)
    {
    case 1:
        cin.ignore(); //Permite utilizar las variables en string sin problema.
        cout << "Indique el numero del articulo \n"; //\n funciona como endl.
        getline(cin, numero); //Comando para imprimir cadena de caracteres con espacios.
        cout << "Indique el nombre del articulo \n";
        getline(cin, nombre);
        cout << "Agregue una descripcion para el articulo \n";
        getline(cin, desc);
        cout << "Indique el genero del articulo \n";
        getline(cin, genero);
        cout << "Indique la clasificacion del articulo \n";
        getline(cin, clas);
        cout << "Indique la consola \n";
        getline(cin, consola);
        cout << "Indique el precio del articulo \n";
        cin >> precio;
        impuesto = 16 * precio / 100; //Operación para optener el 16%.
        total = precio + impuesto;
        cout << "Precio unitario: " << precio << endl;
        cout << "Impuesto: " << impuesto << endl;
        cout << "Precio total: " << total << endl;
        cout << "Desea agregar otro articulo? 1.- Si  2.- No" << endl;
        cin >> decision;
        if (decision == 1)
        {
            return main();
        }
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        system("cls"); //Limpia la pantalla.
        return main();
    case 6:
        exit(1); //Cierra la pantalla.
    default:
        cout << "La opcion no se encuentra en el menu, vuelva a intentarlo" << endl;
        return main();
        break;
    }


}