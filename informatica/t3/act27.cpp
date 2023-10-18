#include <iostream>
using namespace std;

float mayor(float valores[], int N)
{
    float m = valores[0];
    for (int i = 0; i < N; i++)
    {
        if (valores[i] > m)
        {
            m = valores[i];
        }
    }
    return m;
}

int main()
{
    const int M = 5;
    float v[M];
    float m;

    for (int i = 0; i < M; i++)
    {
        cout << "Ingrese el valor " << i << ":\n";
        cin >> v[i];
    }

    m = mayor(v, M);

    cout << "El mayor valor es: " << m;

    return 0;
}