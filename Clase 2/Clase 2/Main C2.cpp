/*
     Curso Básico de C++
     TIPOS DE VARIABLES
     Por: Salvador Pazos
*/

#include <iostream>


using namespace std;

void main() {
    // [ ] [numero = 1] [ ] [ ] [ ] [ ] [ ] 
    // Nombre, Valor, Dirección de memoria 

    /*
    Números enteros
    Letras
    Cadenas de letras
    Números decimales
    Falso y Verdadero
    */

    int numeroEntero; // Esta variable puede almacenar solo números enteros.
    // int pesa 4 bytes. 2,147,483,647

    bool booleano; // 1 Byte:  Verdadero o Falso 

    float numeroDecimal; // 4 bytes 

    char caracter; // 1 byte 

    string secuenciaCaracteres; // 


    booleano = true;
    cout << "Bool: " << booleano << "\t Pesa: " << sizeof(booleano) << endl << endl;

    numeroEntero = 17;
    cout << "int: " << numeroEntero << "\t Pesa: " << sizeof(numeroEntero) << endl << endl;

    caracter = 'A';
    cout << "char: " << caracter << "\t Pesa: " << sizeof(caracter) << endl << endl;

    numeroDecimal = 1.3;
    cout << "float: " << numeroDecimal << "\t Pesa: " << sizeof(numeroDecimal) << endl << endl;

    secuenciaCaracteres = "Hola Proyecto";
    cout << "string: " << secuenciaCaracteres << "\t Pesa: " << sizeof(secuenciaCaracteres) << endl << endl;




}