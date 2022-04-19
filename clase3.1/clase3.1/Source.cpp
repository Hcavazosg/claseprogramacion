#include<iostream>

using namespace std;

// clase 3 variables

//void main() {
//	float a;
//	float b;
//
//	cout << "Ingrese un numero " << endl;
//	cin >> a;
//
//	cout << "Ingrese un numero " << endl;
//	cin >> b;
//
//	cout << "El resultado es: " << endl;
//	cout << a + b << endl;
//}

//void main() {
//	string a;
//	string b;
//
//	cout << "Ingrese un nombre " << endl;
//	cin >> a;
//
//	cout << "Ingrese un apellido " << endl;
//	cin >> b;
//
//	cout << "El resultado es: " << endl;
//	cout << a + ' ' + b << endl;
//}

/*
    1.- Crear un programa

    2.- De horas a segundos
       +Cómo: Multiplicar la hora por 3600

    3.- Pedirle una hora al usuario
       +Cómo
       +Tipo de dato

    4.- Convertir la hora a segundos

    5.- Mostrarla

    */

void main() {
	float a;
    float b = 3600;

	cout << "Ingrese una hora " << endl;
	cin >> a;

	
	cout << "El resultado es: " << endl;
	cout << a * b << endl;
}
