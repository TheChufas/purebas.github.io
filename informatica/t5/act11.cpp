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
            cout << "Ingrese el valor para la posición ("<<i<<','<<j<<"):\n";
            cin >> mat[i][j];
        }
    }

    //Punto 2)    
    double suma=0.0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            suma += mat[i][j];
        }
    }
    cout << "La sumatoria de los valore es: " << suma;
    return 0;
}