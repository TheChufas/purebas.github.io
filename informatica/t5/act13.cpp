#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    const int N=3;
    const int M=4;
    float mat[N][M];
    
    // Punto 1)
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cout << "Ingrese el valor para la posición (" << i << "," << j << "):\n";
            cin >> mat[i][j];
        }
    }

    //Punto 2)    
    int cant=0;
    for(int i = 0; i < N; i++){
        for(int j=0; j<M; j++)
        {
            if(mat[i][j] >= 0)
                cant++;
        }
    }
    cout << "Hay "<< cant <<" valores positivos en la matriz";
    
    return 0;
}