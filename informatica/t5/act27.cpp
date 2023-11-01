#include <iostream>
#include <iomanip>
using namespace std;

const int CANT_MAX_JUGADORES = 10;

/*
Inicaliza el arreglo jugadores pasado como parámetro haciendo
jugadores[i] = i
*/
void inicializar_arreglo_jugadores(int jugadores[], int cant_jugadores)
{
    for (int i = 0; i < cant_jugadores; i++)
        jugadores[i] = i;
}

/*
Carga los puntos obtenidos por cada jugador
en el arreglo puntos
*/
void cargar_puntos(int puntos[], int cant_jugadores)
{
    for (int i = 0; i < cant_jugadores; i++)
        do
        {
            cout << "Ingrese los puntos obtenidor por el jugador " << i << endl;
            cin >> puntos[i];
        } while (puntos[i] < 0);
}

/*
 Intercambiar valores entre n y m
*/
void intercambiar(int &n, int &m)
{
    int temp = n;
    n = m;
    m = temp;
}

/*
    Ordena el arreglo puntos de manera decreciente.
    Simultaneamente actualiza el arreglo jugadores,
    de manera tal que puntos[i] sean los puntos del
    jugador con identificador jugador[i]
*/
void ordenar_tabla_por_puntos(int puntos[], int jugadores[], int cantidad)
{
    for (int i = 0; i < cantidad - 1; i++)
        for (int j = 1; j < cantidad - i; j++)
            if (puntos[j - 1] < puntos[j])
            {
                intercambiar(puntos[j], puntos[j - 1]);
                intercambiar(jugadores[j], jugadores[j - 1]);
            }
}

int main()
{
    int cant_jugadores;
    int jugadores[CANT_MAX_JUGADORES], puntos[CANT_MAX_JUGADORES];

    // Solicito cantidad de jugadores
    cout << "Ingrese cantidad de jugadores\n";
    do
        cin >> cant_jugadores;
    while (cant_jugadores <= 0 || cant_jugadores > CANT_MAX_JUGADORES);

    // Incializo arreglo con identificador de jugadores
    // Aquí debe invocar la función correspondiente
    inicializar_arreglo_jugadores(jugadores, cant_jugadores);

    // Pido al usuario que ingrese los puntos
    // Aquí debe invocar la función correspondiente
    cargar_puntos(puntos, cant_jugadores);

    // Ordeno los jugadores de acuerdo a sus puntuaciones
    // Aquí debe invocar la función correspondiente
    ordenar_tabla_por_puntos(puntos, jugadores, cant_jugadores);

    // Imprimimo la tabla de posiciones
    // Imprimimo la tabla de posiciones
    cout << endl
         << "Tabla de posiciones" << endl;
    for (int i = 0; i < cant_jugadores; i++)
        cout << setw(2) << i + 1 << "- Jugador " << jugadores[i] << "  " << puntos[i] << " pts" << endl;
}