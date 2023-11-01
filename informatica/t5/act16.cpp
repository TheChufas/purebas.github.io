#include <iostream>
#include <iomanip>
using namespace std;

const int N = 5;
const int M = 3;

void bubbleSort(float arr[][M], int n, int m)
{
    for (int p = 0; p < M; p++)
    {
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (arr[j][p] < arr[j + 1][p])
                {
                    float temp = arr[j][p];
                    arr[j][p] = arr[j + 1][p];
                    arr[j + 1][p] = temp;
                }
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
void mostrar_array_dobleA(float arr[][M], int N, int M)
{
    cout << "/////////\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arr[i][j] << ' ';
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
    mostrar_array_dobleA(valores, N, M);
    for (int i = 0; i < N; i++)
        bubbleSort(valores, N, M);
    mostrar_array_dobleA(valores, N, M);
    mostrar_array_doble(valores, N, M);
    return 0;
}