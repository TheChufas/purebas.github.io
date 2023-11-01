#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    const int N=3;
    const int M=4;
    float mat[N][M];
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cout << "Ingrese el valor de la posición (" << i << "," << j << "):\n";
            cin >> mat[i][j];
        }
    }
    
    double suma=0.0;
    
    // Complete su codigo aqui
    for(int i = 0; i < N; i++){
        for(int j=0; j<M; j++)
        {
            if(mat[i][j] <= mat[2][3])
                suma++;
        }
    }
    cout << "Hay "<< suma <<" valores menores a "<< mat[2][3];

    return 0;
}