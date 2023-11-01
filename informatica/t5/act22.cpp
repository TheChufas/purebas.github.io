#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int N = 4;
    int mat[4][4];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> mat[i][j];
        }
    }

    int cercano = mat[0][0];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (abs(10 - mat[i][j]) < abs(10 - cercano))
                cercano = mat[i][j];
        }
    }
    cout << cercano;
    return 0;
}