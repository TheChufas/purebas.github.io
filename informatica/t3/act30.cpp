#include <iostream>
using namespace std;

const int N=10;

bool es_primo(int);
int ultimo_primo(int []);

int main()
{
    int A[N];
    
    for(int i=0; i<N; i++)
        cin>>A[i];
        
    int ultimo_primo_indice = ultimo_primo(A);
    if (ultimo_primo_indice == -1)
        cout<<"No  hay numeros primos en el arreglo"<<endl;
    else
        cout<<"El numero "<<A[ultimo_primo_indice]<<" es el ultimo numero primo del arreglo."<<endl;

    return 0;
}

bool es_primo(int num)
{
    if (num<2)
        return false;
    
    for(int i=2; i < num; i++)
        if( num % i == 0 )
            return false;
    
    return true;
}

int ultimo_primo(int arr[])
{
    int indice = -1;
    for (int i = 0; i < N; i++)
    {
        if(es_primo(arr[i]))
            indice = i;
    }
    return indice;
}