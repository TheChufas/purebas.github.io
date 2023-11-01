#include <iostream>
#include <iomanip>
using namespace std;

const int N = 3;

void leer_matriz(double[][N]);
void suma_matrices(double[][N], double[][N], double[][N]);
void resta_matrices(double[][N], double[][N], double[][N]);
void prod_matrices(double[][N], double[][N], double[][N]);
double maximo_abs(double[][N]);
int cant_digitos(int);
void imprimir_matriz(double[][N]);

int main()
{
    double A[N][N], B[N][N], R[N][N];
    char op;
    
    // Escriba su programa aquí
    cout << "Ingrese la primera matriz: \n";
    leer_matriz(A);

    cout << "\nIngrese el operador (+, -, *):\n";
    cin >> op;

    cout << "\nIngrese la segunda matriz: \n";
    leer_matriz(B);

    switch (op)
    {
    case '+':
        suma_matrices(A,B,R);
        break;
    case '-':
        resta_matrices(A,B,R);
        break;
    case '*':
        prod_matrices(A,B,R);
        break;
    
    default:
        cout << "\nOperación invalida";
        return 0;
        break;
    }

    cout << "\nResultado\n";
    imprimir_matriz(R);

    return 0;
}

void leer_matriz(double Matriz[][N])
{
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
        {
          cout<<"Ingrese el elemento ("<<i<<","<<j<<"): "<<endl;
          cin >> Matriz[i][j];
        }
}

void suma_matrices(double M1[][N], double M2[][N], double Resultado[][N])
{
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            Resultado[i][j] = M1[i][j] + M2[i][j];
}

void resta_matrices(double M1[][N], double M2[][N], double Resultado[][N])
{
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            Resultado[i][j] = M1[i][j] - M2[i][j];
}

void prod_matrices(double M1[][N], double M2[][N], double Resultado[][N])
{
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++)
                Resultado[i][j] += M1[i][k] * M2[k][j];
}

double maximo_abs(double M[][N])
{
    double max = M[0][0];
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if (abs(max) < abs(M[i][j]))
                max = M[i][j];

    return max;
}

int cant_digitos(int num)
{
    int digitos = 0;
    while (num != 0)
    {
        num/=10;
        digitos += 1;
    }   
    return digitos;
}

void imprimir_matriz(double M[][N])
{
    int max_digitos = cant_digitos(maximo_abs(M)) + 4;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
            cout<<setw(max_digitos)<<fixed<<setprecision(2)<<M[i][j]<<" ";
        cout<<endl;
    }
}