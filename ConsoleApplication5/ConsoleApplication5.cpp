// ConsoleApplication5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;
/*
* en el centro comercial se comete un robo
* dondehabian 10 personas nada mas
* se dice que el robo lo cometio la persona que estaba
* en la fila en la posicion 4 pero su nombre segun dicen 
* se llama carlos, recorrer toda las filas y preguntar si en la posicion
* 4 el individuo se llama carlos
*/
int main()
{
	string nombres[10];
	for (int i = 0;i < 10; i++) {
		cout << " digite los nombres de las personas presentes" << i << ";" << endl;
		cin >> nombres[i];

	}
	for (int i = 0;i < 10; i++) {
		cout << nombres[i];

		if (i ==4 && nombres[i]== "carlos"){

			cout << " te encontre carlos eres el ladron" <<  nombres[i]  <<  "eres el ladron" << endl;
		}
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
