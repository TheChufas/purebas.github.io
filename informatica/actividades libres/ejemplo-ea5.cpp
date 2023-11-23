#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void rellenar_vectores(double V[][2], int cant);
void extrae_fila(double V[][2], double vector[2], int fil);
void crear_matriz_rotacion(double rot[2][2], double angulo);
int vector_mayor_modulo(double vectores[][2], int cant);
void multiplicar_matriz_vector(double M[][2], int c, double v[2], double resultado[]);

const int N = 10;

int main()
{
    int c;
    double vectores[N][2];
    double angulo;
    double rot[2][2];
    int fil;
    double vect[2];
    double rotado[2];
    
    //Introducir cantidad (0 - 10]
    do{
        cout << "Ingrese la cantidad de vectores:\n";
        cin >> c;
    }
    while(c <= 0 || c > 10);
    cout << "Se ingresarán " << c << " vectores\n";

    //Introducir vectores <x,y>
    cout << endl;
    rellenar_vectores(vectores, c);
    cout << endl;
    cout << "Vectores\n";
    for(int i = 0; i < c; i++){
        cout << '<' << vectores[i][0] << ',' << vectores[i][1] << '>' << endl;
    }
    
    //Angulo de rotación
    cout << endl;
    cout << "Ingrese el ángulo de rotación\n";
    cin >> angulo;
    crear_matriz_rotacion(rot, angulo);
    cout << endl << "Matriz de rotación\n";
    cout << rot[0][0] << ' ' << rot[0][1] << endl;
    cout << rot[1][0] << ' ' << rot[1][1] << endl;
    
    //Mayor modulo indice
    cout << endl;
    fil = vector_mayor_modulo(vectores, c);
    cout << "El vector de mayor módulo está en la fila " << fil << endl;

    //Mayor modulo mostrar
    cout << endl;
    extrae_fila(vectores, vect, fil);
    cout << "Vector de mayor módulo: <" << vect[0] << ',' << vect[1] << '>' << endl;

    //Rotar mayor modulo
    cout << endl;
    multiplicar_matriz_vector(rot, 2, vect, rotado);
    cout << "Vector rotado: <" << rotado[0] << ',' << rotado[1] << '>' << endl;
    return 0;
}
void rellenar_vectores(double V[][2], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        cout << "vector " << i << ":\n";
        cout << "Ingrese la coordenada x:\n";
        cin >> V[i][0];
        cout << "Ingrese la coordenada y:\n";
        cin >> V[i][1];
    }
}
void extrae_fila(double V[][2], double vector[2], int fil)
{
    vector[0] = V[fil][0];
    vector[1] = V[fil][1];
}
void crear_matriz_rotacion(double rot[2][2], double angulo)
{
    const double PI = 3.14159265359;
    rot[0][0] = cos(angulo * (PI/180));
    rot[0][1] = -sin(angulo * (PI/180));
    rot[1][0] = -rot[0][1];
    rot[1][1] = rot[0][0];
}
int vector_mayor_modulo(double vectores[][2], int cant)
{
    int indice = 0;
    for (int i = 0; i < cant; i++)
        if(sqrt(pow(vectores[i][0],2) + vectores[i][1]) > sqrt(pow(vectores[indice][0],2) + vectores[indice][1]))
            indice = i;
    return indice;
}
void multiplicar_matriz_vector(double M[][2], int c, double v[2], double resultado[])
{
    for (int i = 0; i < c; i++)
    {
        resultado[i] = M[i][0]*v[0] + M[i][1]*v[1];
    }
}