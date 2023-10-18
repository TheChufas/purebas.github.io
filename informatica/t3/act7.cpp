#include <iostream>
using namespace std;

int main()
{
    const int N=10;
    int A[N];
    
    //Escriba su código aquí
    
    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese A[" << i << "]";
        cin >> A[i];
        for (int p = 0; p < i; p++)
        {
            if(A[p] == A[i]){
                i--;
                break;
            }
        }
    }
    
    
    //Al finalizar se muestran los valores que tiene el arreglo A
    for(int i=0; i<N; i++)
    {
        cout << A[i] << " "<<endl;
    }
}