#include <iostream>
using namespace std;

const int N = 52;
const int NUM_LETRAS = 26;

int reemplazar_no_letras(char letras[], int n, char reemplazo);
void contar_letras(char letras[], int cantidad_x_letra[], int n);
void reemplazar_min_x_may(char letras[], int n);
void imprimir_histograma(int cantidad_x_letra[]);

int main()
{
    char caracteres[N];
    int cantidad_por_letra[NUM_LETRAS];
    int _N = 0;

    for (int i = 0; i <= N; i++)
    {
        cin >> caracteres[i];
        _N = i;
        if (caracteres[i] == '-')
            break;
    }

    int no_letras = reemplazar_no_letras(caracteres, _N, '_');
    cout << "Se ingresaron " << _N - no_letras << " letras.\n";

    reemplazar_min_x_may(caracteres, _N);

    contar_letras(caracteres, cantidad_por_letra, _N);

    imprimir_histograma(cantidad_por_letra);
}

int reemplazar_no_letras(char letras[], int n, char reemplazo)
{
    int cant_invalidos = 0;

    for (int i = 0; i < n; i++)
    {
        if (letras[i] < 'A' || letras[i] > 'z')
        {
            letras[i] = reemplazo;
            cant_invalidos++;
        }
    }
    return cant_invalidos;
}

void contar_letras(char letras[], int cantidad_x_letra[], int n)
{
    for (char c = 'A'; c <= 'Z'; c++)
    {
        cantidad_x_letra[c - 65] = 0;
        for (int i = 0; i < n; i++)
            if (letras[i] == c)
                cantidad_x_letra[c - 65]++;
    }
}

void reemplazar_min_x_may(char letras[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (letras[i] != '_' && (letras[i] < 'A' || letras[i] > 'Z'))
            letras[i] = letras[i] - 32;
    }
}

void imprimir_histograma(int cantidad_x_letra[])
{
    cout << "HISTOGRAMA" << endl;
    for (int i = 0; i < NUM_LETRAS; i++)
    {
        if (cantidad_x_letra[i] > 0)
        {
            cout << char('A' + i) << "|";
            for (int j = 0; j < cantidad_x_letra[i]; j++)
                cout << "#";
            cout << endl;
        }
    }
}