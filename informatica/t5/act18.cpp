#include <iostream>
using namespace std;

const int N = 5;

void inicializar_matriz_identidad(int matriz[N][N])
{
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if (i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
}

int main()
{
    int mat[N][N];
    
    inicializar_matriz_identidad(mat);
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
            cout<< mat[i][j] <<" ";
        cout<<endl;
    }
    
}