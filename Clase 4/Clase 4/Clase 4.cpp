/*
    C++ Curso Básico
    ARRAYS
    Por: Salvador Pazos
*/
#include <iostream>
using namespace std;


void main() {

    int arrayNumeros[5];

    arrayNumeros[0] = 1;
    arrayNumeros[1] = 2;
    arrayNumeros[2] = 3;
    arrayNumeros[3] = 4;
    arrayNumeros[4] = 5;

    
    float arrayFloat[10];

    char arrayChar[5] = "hola";

    char cadena[5] = { 'H', 'o', 'l', 'a' };

    /*char nombre[40]; */

    //cout << "Escriba su nombre" << endl << endl;
    //cin.getline(nombre, 40, '\n');

    //cout << "Tu nombre es: " << nombre << endl;

    //int arrayInt[3];
    //cout << "Ingresa 3 numeros enteros" << endl;
    //cin >> arrayInt[0];
    //cin >> arrayInt[1];
    //cin >> arrayInt[2];


    //cout << "Mis numeros: " << endl;
    //cout << arrayInt[0] << endl;
    //cout << arrayInt[1] << endl;
    //cout << arrayInt[2] << endl;

    bool arrayBool[5];
    cout << "Ingresa Verdadero o Flso" << endl;
    cin >> arrayBool[0];
    cin >> arrayBool[1];
    cin >> arrayBool[2];
    cin >> arrayBool[3];
    cin >> arrayBool[4];

    cout << "V o F: " << endl;
    cout << arrayBool[0] << endl;
    cout << arrayBool[1] << endl;
    cout << arrayBool[2] << endl;
    cout << arrayBool[3] << endl;
    cout << arrayBool[4] << endl;
    system("pause");

   /* int arrayInt2D[3][2];

    arrayInt2D[0][0] = 1;
    arrayInt2D[1][0] = 2;
    arrayInt2D[2][0] = 3;
    arrayInt2D[0][1] = 4;
    arrayInt2D[1][1] = 5;
    arrayInt2D[2][1] = 6;*/
}
