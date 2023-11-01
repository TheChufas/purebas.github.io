#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N = 3;
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
        cout<< "Hay numeros negativos" << endl;
    else
        cout<< "No hay numeros negativos" << endl;
    
    return 0;
}