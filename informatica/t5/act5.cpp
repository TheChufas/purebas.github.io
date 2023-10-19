#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N = 3;
    const int M = 4;
    
    int A[N][M];
                   
                   
    //Complete aquí el programa
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)
            cout << "Ingrese el elemento (" << i << ',' << j << "):\n";
        cin << A[i][j];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)
            cout << ' ' << setw(4) << A[i][j];
        cout << endl;
    }
    return 0;
}