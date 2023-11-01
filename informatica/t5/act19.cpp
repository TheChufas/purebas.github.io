#include <iostream>
using namespace std;

const int N=5, M=4;

bool es_primo(int);
void ultimo_primo_matriz(int[N][M], int &, int &);

int main()
{
    int A[N][M];
    
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin>>A[i][j];
    
    int fil,col;    
    ultimo_primo_matriz(A,fil,col);
    if (fil == -1 || col == -1)
        cout<<"No  hay numeros primos en la matriz"<<endl;
    else
        cout<<"El numero "<< A[fil][col] <<" es el ultimo numero primo de la matriz."<<endl;

    return 0;
}

bool es_primo(int num)
{
    if(num == 0 || num == 1)
        return false; //0 y 1 no son primos
        
    for(int i=2; i < num; i++)
        if( num % i == 0 )
            return false;
    return true;
}

void ultimo_primo_matriz(int arr[N][M], int& f, int& c)
{
    f = c = -1;
    for(int i=N-1; i>=0; i--){
        for(int j=M-1; j>=0; j--){
            if(es_primo(arr[i][j])){
                f = i;
                c = j;
                break;
            }
        }
        if(f != -1)
            break;
    }
}