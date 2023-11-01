#include <iostream>
#include <cmath>
using namespace std;

void absMinMax(int A[], int N, int &m, int &M)
{
    m=M=abs(A[0]);
    for(int i=0; i<N; i++)
    {
        if(m>abs(A[i]))
        {
            m = abs(A[i]);
        }
        if(M<abs(A[i]))
        {
            M = abs(A[i]);
        }
    }
}

int main()
{
    //1 Declarar variables
    const int N = 5;
    int v[N];
    int min;
    int max;

    //2 Solicitar los N valores del arreglo v por teclado.
    for(int i = 0; i < N; i++){
        cout<<"Ingrese v("<<i<<"):\n";
        cin>>v[i];
    }

    //3 Calcular el mayor y menor valor absoluto presentes en v
    absMinMax(v, N, min, max);

    //4 Mostrar por pantalla el menor y el mayor valor absoluto
    cout<<"El menor valor absoluto es: "<<min<<endl;
    cout<<"El mayor valor absoluto es: "<<max<<endl;

    return 0;
}