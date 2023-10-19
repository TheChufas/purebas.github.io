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
        do{
            cout << "Ingrese el elemento (" << i << ',' << j << "):\n";
            cin << A[i][j];
        } while(A[i][j] < 0 || A[i][j] > 100)
    }
    cout << A[3][2] << ',' << A[2][2] << ',' << A[1][0] << ',' << A[0][1];
    return 0;
}