#include <iostream>
using namespace std;

const int N = 3;

bool transpuestas(double[N][N], double[N][N]);

int main()
{
    double A[N][N], B[N][N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> A[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> B[i][j];

    if (transpuestas(A, B))
        cout << "Las matrices son transpuestas" << endl;
    else
        cout << "Las matrices no son transpuestas" << endl;

    return 0;
}

bool transpuestas(double m[N][N], double n[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (m[i][j] != n[j][i])
                return false;
    return true;
}