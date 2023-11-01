#include <iostream>
#include <iomanip>
using namespace std;

const int N = 5;
const int M = 3;

void bubbleSort(float arr[N][M], int n, int m)
{
    for (int i = 0; i < m - 1; i++)
        for (int j = 0; j < m - i - 1; j++)
            if (arr[j][n] < arr[j + 1][n])
            {
                float temp = arr[j][n];
                arr[j][n] = arr[j + 1][n];
                arr[j + 1][n] = temp;
            }
}
void mostrar_array_doble(float arr[][M], int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 0)
            {
                cout << setw(7) << " ";
            }
            else
            {
                printf("%7g", arr[i][j]);
            }
        }
        cout << endl;
    }
}
int main()
{
    float valores[N][M];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> valores[i][j];

    for (int i = 0; i < N; i++)
        bubbleSort(valores, i, N);

    mostrar_array_doble(valores, N, M);
    return 0;
}