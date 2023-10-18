#include <iostream>
using namespace std;

int main()
{
    const int N=5;
    float A[N],B[N];
    int cant = 0;
    
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < N; i++)
    {
        if(A[i] == B[i])
            cant++;
    }
    cout << cant;
}