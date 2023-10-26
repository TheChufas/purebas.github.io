#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int N = 10;

int tamanio()
{
    int n;
    cout << "Ingrese n: " << endl;
    cin >> n;
    while(n<1 || n>N)
    {
        cout << "Ingrese n: " << endl;
        cin >> n;
    }
    return n;
}

void rellenar_matriz(float M[N][N], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << "Ingrese el elemento " << i << ", " << j << ": "<< endl;
            cin >> M[i][j];
        }
    }
}

void mostrar_matriz(float M[N][N], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << setw(10) << M[i][j];
        }
        cout << endl;
    }
}

void extrae_diagonal(float M[N][N], float D[N], int n)
{
    for(int i=0; i<n; i++)
    {
        D[i] = M[i][i];
    }
}

void est(float A[N], int n, double &media, double &desviacion)
{
    // complete el cuerpo de la funcion
}

int main()
{
    float mat[N][N];
    float diag[N];
    double media, desv;
    int n;
    n = tamanio();
    
    //(1) rellenar la matriz llamando a rellenar_matriz
    rellenar_matriz(mat, N);

    //(2) Mostrar matriz llamando a mostrar_matriz
    mostrar_matriz(mat, N)

    //(3) Extraer la diagonal principal llamando a extrae_diagonal
    
    cout << endl << "Diagonal: (";
    for(int i=0; i<n; i++)
    {
        cout << diag[i];
        if(i!=n-1)
            cout << ",";
        else
            cout << ")" << endl;
    }
    
    //(4) Calcular la media y la desviación de la diagonal llamando a est
    
    cout << "La media es: " << media << " y la desviacion es: " << desv; 
    
}