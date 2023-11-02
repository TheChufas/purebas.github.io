#include <iostream>
using namespace std;

const int NMAX = 10;
const bool debug = false;

int enteroValidado()
{
    int entero = 0;
    do{
        cin >> entero;
    }while(entero <= 0 || entero > NMAX);
    return entero;
}

void llenarMatriz(double matriz[][NMAX], int N)
{
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
        {
            double num = 0;
            do{
                cin >> num;
            }while(num <= -10 || num >= 100);
            if(debug) cout << "valid " << num << endl;
            matriz[i][j] = num;
        }
}

void extraeDiagonales(double matriz[][NMAX], int N, double diag[NMAX], bool principal )
{
    for(int i = 0; i < N; i++)
        if(principal)
            diag[i] = matriz[i][i];
        else
            diag[i] = matriz[i][N-i-1];
}

void sumaVectores(double u[NMAX],   double v[NMAX],  double w[NMAX],  int N )
{
    for (int i = 0; i < N; i++)
        w[i] = u[i] + v[i];
}
#pragma incompleto

bool sonTodosMenoresCincuenta(double u[NMAX] ,  int N)
{
   for (int i = 0; i < N; i++)
        if(u[i] >= 50)
            return false;
    return true;
}

void  mostrarVector(double u[NMAX] ,  int N)
{
    
}
#pragma endregion
int main()
{
    //1
    int N = enteroValidado();
    double mat[NMAX][NMAX];
    double dig[NMAX];
    //2
    llenarMatriz(mat, N);
    
    //3
    extraeDiagonales(mat,N,dig,true);
    for(int i = 0; i < N; i++)
        cout << dig[i] << ' ';
    
    cout << endl;
    extraeDiagonales(mat,N,dig,false);
    for(int i = 0; i < N; i++)
        cout << dig[i] << ' ';

    //4

    return 0;
}