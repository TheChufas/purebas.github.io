#include <iostream>
#include <iomanip>
using namespace std;
const int N = 100;

int MayorOIgual(int num) 
{
    int resultado;
    do{
        cin >> resultado;
    }while(resultado < num || resultado > N);
    return resultado;
}
void imprimirMatriz(int matriz[N][N], int f, int c, char caracter1, char caracter2)
{
    for(int i = 0; i < f; i++){
        cout << caracter2 << ' ';
        for(int j = 0; j < c; j++){
            cout << setw(3) << matriz[i][j];
            if(j != c-1)
                cout << caracter1 << ' ';
        }
        cout << ' ' << caracter2 << endl;
    }
}
bool verificarVector(int vec[N])
{
    for(int i = 0; i < N; i++){
        if(vec[i] > 0 && vec[i]%2 != 0)
            return true;
    }
    return false;
}
void extraerFila(int mat[N][N], int vec[N], int f, int c)
{
    //Extrae la fila completa con el mayor valor
    int indiceF = 0;
    int valor = mat[0][0];
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++)
            if(mat[i][j] > valor){
                indiceF = i;
                valor = mat[i][j];
        }
    }
    for(int i = 0; i < c; i++)
    {
        vec[i] = mat[indiceF][i];
    }
}
void imprimirInformacionMatriz(int matriz[N][N], int f, int c)
{
    //Verificar primo
    cout << "Numeros primos:";
    bool noPrimo = true;
    bool isPrime = true;
    int count = 0;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            // descartar falsos primos
            if(matriz[i][j] == 0 || matriz[i][j] == 1){
                isPrime = false;
            }
            if(matriz[i][j] == 2 || matriz[i][j] == 3){
                isPrime = true;
            }
            else{
                // loop
                for (int p = 2; p <= matriz[i][j] / 2; ++p) {
                    isPrime = true;
                    if (matriz[i][j] % p == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
        if(isPrime){
            noPrimo = false;
            if(count != 0)
                cout << ',';
            count++;
            cout << ' ' << matriz[i][j];
          }
        }
    }
    if(noPrimo)
        cout << " No hay numeros primos";
    cout << endl;

    //Verificar par
    cout << "Numeros pares:";
    bool noPar = true;
    bool isPar;
    count = 0;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            isPar = false;
            if (matriz[i][j] % 2 == 0 && matriz[i][j] != 0) { 
                    noPar = false;
                    isPar = true;
                }
            if(isPar){
                if(count != 0)
                    cout << ',';
                count++;
                cout << ' ' << matriz[i][j];
            }  
        }
    }
    if(noPar)
        cout << " No hay numeros pares";
    cout << endl;
}

int main(){
    //Variables
    int f, c;
    int matriz[N][N];
    int resultados[N];
    bool estado; //estan ordenados de menor a mayor?

    //punto 1
    cout << "Ingrese cantidad de filas:\n";
    f = MayorOIgual(1);
    cout << "Ingrese cantidad de columnas:\n";
    c = MayorOIgual(1);

    //punto 2
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matriz[i][j];
        }
    }

    //punto 3
    imprimirMatriz(matriz, f, c, '-', '#');

    //punto 4
    extraerFila(matriz, resultados, f, c);

    //punto 5
    estado = true;
    for(int i = 1; i < c; i++)
    {
        if(resultados[i-1] > resultados[i]){
            estado = false;
            break;
        }
    }

    //punto 6
    if(estado)
        for(int i = 0; i < c; i++)
            cout << resultados[i] << endl;
    else
        for(int i = 0; i < c; i++)
            cout << resultados[i] << ' ';
}