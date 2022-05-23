/*
    SWITCH Y FUNCIONES
*/
#include<iostream>

using namespace std;
void imprimirnombre();
void ingresarnumero();
void sumadosnumeros();
void main() {
    setlocale(LC_ALL, ""); // Mi función para poder poner tildes
    int operador; // La variable que vamos a utilizar en el switch como operador

    do {
        system("cls");
        cout << "Ingrese una opción" << endl; // Le pedimos al usuario que ingrese una opción 
        cout << "1.- Imprime tu nombre" << endl;
        cout << "2.- Imprime un número" << endl;
        cout << "3.- Suma dos números" << endl;
        cout << "4.- Salir del programa" << endl;

        cin >> operador; // El usuario ingresa una opción 
        system("cls");
        switch (operador) {

        case 1: {
            imprimirnombre();
            break;
        }


        case 2: {
            ingresarnumero();
            break;
        }

        case 3: {
            sumadosnumeros();
            break;
        } 


        case 4: {
            cout << "Saliendo del programa..." << endl;
        }

        }



        system("pause");
    } while (operador != 4);


}
void imprimirnombre() {
    string nombre;
    cout << "Ingrese su nombre" << endl;
    cin >> nombre;
    cout << "El nombre ingresado es: " << nombre << endl;
}
void ingresarnumero() {
    char numero;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    cout << "El numero ingresado es: " << numero << endl;
}
void sumadosnumeros(){
    int a, b, suma;
    cout << "\n ingrese numero a:";
    cin >> a;
    cout << "\n ingrese numero b:";
    cin >> b;
    suma = a + b;
    cout << "\n la suma de " << a << "+" << b << " es:" << suma;
}
