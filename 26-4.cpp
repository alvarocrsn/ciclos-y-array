#include <iostream>

using namespace std;

int main(){

int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int largoDelArray = sizeof(numeros)/sizeof(numeros[0]);

int nuevoElemento = 10;

int nuevoTamanio = largoDelArray + 1;

int nuevoArray[nuevoTamanio];

copy (numeros, numeros + largoDelArray, nuevoArray); nuevoArray[largoDelArray] = nuevoElemento;

cout << "Nuevo array: " << endl;

for (int i=0; i < nuevoTamanio; i++){

cout << nuevoArray[i];

}

cout << endl;

/*
///cout << "El largo del array es de " << largoDelArray;

for (int i=0; i < largoDelArray; i++){

cout << numeros[i] << endl;

}
*/


return 0;
}
