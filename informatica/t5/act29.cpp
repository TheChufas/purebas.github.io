#include <iostream>
using namespace std;

const int N = 5, M = 4;

void maximos_fila(int[][M], int[]);

int main()
{
    int A[N][M], max[N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];

    maximos_fila(A, max);

    for (int i = 0; i < N; i++)
        cout << "El maximo de la fila " << i << " es " << max[i] << endl;

    return 0;
}

void maximos_fila(int matriz[][M], int maximos[])
{
    for (int i = 0; i < N; i++)
    {
        maximos[i] = matriz[i][0];
        for (int j = 0; j < M; j++)
        {
            if (matriz[i][j] > maximos[i])
                maximos[i] = matriz[i][j];
        }
    }
}