#include <iostream>
#include <cmath>
using namespace std;

double promedio(float arr[], int N)
{
    double suma = 0.0;
    for (int i = 0; i < N; i++)
    {
        // cout << arr[i] << " ";
        suma += arr[i];
    }
    return suma / N;
}

int main()
{
    const int N = 3;
    const int M = 4;
    float mat[N][M];

    // Punto 1)
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << "Ingrese el valor para la posición (" << i << "," << j << "): " << endl;
            cin >> mat[i][j];
        }
    }

    // Punto 2)
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "El promedio de la fila " << i << " es: " << promedio(mat[i], M) << endl;
    }

    return 0;
}