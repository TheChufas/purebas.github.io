#include <iostream>
using namespace std;

int main()
{
    const int N = 3;
    const int M = 3;
    double valores[N][M];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            cout << "Ingrese elemento " << j << i << endl;
            cin >> valores[j][i];
        }

    // calc promedio
    double prom = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            prom += valores[i][j];
    prom = prom / (M * N);

    // triangular
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (i > j)
                valores[i][j] = 0;

    // superiores a prom
    int encontrados = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (valores[i][j] > prom)
                encontrados++;

    cout << "Cantidad de elementos Mayores al promedio en la diagonal superior\n";
    cout << encontrados;
    return 0;
}