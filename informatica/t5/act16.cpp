#include <iostream>
#include <ionmanip>
using namespace std;

int main()
{
    const int N=5;
    const int M=3;
    float valores[N][M];
 
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin>>valores[i][j];
    
    return 0;
}