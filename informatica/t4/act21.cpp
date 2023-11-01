#include <iostream>
using namespace std;

const int N = 10;
void rellenar_array(int arr[])
{
    int N = ::N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
}
void encontrar_repetidos(int arr1[], int arr2[], int rep[])
{
    int contador = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr1[i] == arr2[j])
            {
                rep[contador] = arr1[i];
                contador++;
                break;
            }
        }
    }
    for (int i = 0; i < contador; i++)
    {
        cout << rep[i];
    }
    
}
int main()
{
    int A[N], B[N], res[N];
    rellenar_array(A);
    rellenar_array(B);
    encontrar_repetidos(A, B, res);
    
    return 0;
}