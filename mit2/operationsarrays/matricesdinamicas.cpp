#include <iostream>
using namespace std;

int main(){

    int **pm;  // Puntero a una matriz

    int cols; // nro columnas
    int rows; // nro de filas

    cout << "Ingresa nro de filas: ";
    cin >> rows;

    cout << "Ingresa nro de columnas: ";
    cin >> cols;

    pm = new int *[rows]; // aignando dinamicamente memoria para la cant de filas
    for (int e = 0; e < rows; e++) {
        pm[e] = new int[cols]; // asignando dinamicamente memoria para la cant de columnas
    }

    cout << "Elementos de la Matriz (a*b)" << endl;
    for (int e = 0; e < rows; e++) {
        for (int j = 0; j < cols; j++) {
            pm[e][j] = e * j;
            cout << pm[e][j]<<" ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Elementos de la Matriz (a*b) con aritmética de punteros: " << endl;
    for (int e = 0; e < rows; e++) {
        for (int j = 0; j < cols; j++) {
            // Aritmética de punteros
            *(*(pm + e) + j) = e * j;
            cout << *(*(pm + e) + j) << " ";
        }
        cout << endl;
    }

    // Eliminando cada vector de la matriz
    for (int e = 0; e < rows; e++) {
        delete[] pm[e];
    }

    // Eliminando el vector principal
    delete[] pm;

    return 0;
}
