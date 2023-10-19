#include<iostream>
using namespace std;

int main()
{
    const int N=3;
    const int M=4;
    int A[N][M];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)
            cin >> A[i][j];
    }

    if(A[N-1][M-1] %2 == 0){
        for(int i = 0; i < N; i++){
            cout << A[i][1] << ' ';
        }
    }
    else {
        for(int i = 0; i < N; i++){
            cout << A[i][3] << ' ';
        }
    }
    return 0;
}