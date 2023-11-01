#include <iostream>
using namespace std;

int main()
{
    int A[7][4] = {
                   {8, 11, -1, -35},
                   {-5, 6, 17, 36},
                   {28, -48, 27, -31},
                   {41, -33, 22, 0}, 
                   {30, 19, -46, 20},
                   {55, -43, 4, 0},
                   {7, 21, 12, 89}
                   };
                   
    //Complete aquí el programa
    int fila,colum;

    cout << "Ingrese el índice de la fila a mostrar:\n";
    cin >> fila;

    cout << "Ingrese el índice de la columna a mostrar:\n";
    cin >> colum;

    cout << "El valor en la posición (" << fila << ',' << colum << ") es: " << A[fila][colum];
    
    return 0;
}