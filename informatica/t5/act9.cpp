#include<iostream>
using namespace std;

int main()
{
    const int N=10;
    const int M=7;
    
    int mat[N][M] = {22, -46, -39, -33, 30, -39, 30,
                     -7, -48, 20, -24, -9, 1, -18,
                     27, 31, 8, 25, -16, 48, -42,
                     9, -6, -46, 5, -43, -37, -12,
                     45, -41, -16, -1, 18, -10, -30,
                     -49, 17, -24, 42, 35, 0, -9,
                     -2, 16, -23, 8, -22, -49, -28,
                     36, -16, 37, -25, 44, 34, -28,
                     -7, 5, -1, -35, 17, 24, -41,
                     0, -34, -46, 20, 47, -27, -29};
                     
    // Requerir indice fila
    int buscar_fila = 0;
    do{
        cin >> buscar_fila;
    }while(buscar_fila < 0 || buscar_fila >= 10);

    for(int i = 0; i < M; i++){
        cout << mat[buscar_fila][i] << ' ';
    }

    return 0;
}