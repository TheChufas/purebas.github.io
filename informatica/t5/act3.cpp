#include <iostream>
using namespace std;

int main()
{
    int A[7][8] = {
                   {8, 11, -1, -35, 56, 101, 9, 2},
                   {-5, 6, 17, 36, 65, -76, 90, 1},
                   {28, -48, 27, -31, 11, -12, 0, 2},
                   {41, -33, 22, 0, 89, 88, 76, -1}, 
                   {30, 19, -46, 20, 107, -12, 1, 0},
                   {55, -43, 4, 0, -3, -6, 2, 1},
                   {7, 21, 12, 89, 1, 0, -1, 2}
                   };
                   
    //Complete aquí el código
    int columna;

    cout << "Ingrese el índice de la columna a mostrar:\n";
    cin >> columna;

    cout << "La columna " << columna << " es: ";
    for(int i = 0; i < 7; i++){
        cout << A[i][columna] << ' ';
    }
    return 0;
}