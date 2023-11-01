#include <iostream>
using namespace std;

const int N = 10;
void rellenar(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void sumar(int arr[], int resultado[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int total = 0;
        for (int j = 0; j < size; j++)
        {
            if (j != i)
            {
                total += arr[j];
            }
        }
        resultado[i] = total;
        cout << resultado[i] << " ";
    }
}
int main()
{
    int A[::N], B[::N];
    int N = ::N;
    cin >> N;
    rellenar(A, N);
    sumar(A, B, N);
    return 0;
}
