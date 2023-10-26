#include<iostream>
using namespace std;

int main()
{
    const int N = 4;
    int mat[N][N];
    
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            cin>>mat[i][j]; 
    
    bool hay_negativos = false;
    
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(mat[i][j] < 0)
                hay_negativos = true;

    if (hay_negativos)
        cout<< "Hay negativos" << endl;
    else
        cout<< "No hay negativos" << endl;
    
    return 0;
}