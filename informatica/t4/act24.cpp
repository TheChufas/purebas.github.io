#include <iostream>
using namespace std;
const int N = 10;

void ingresar_elemento(int arr[], int size, int id = 1)
{
    int placeholder = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Ingrese los " << size << " elementos del array " << id << ", recuerde Enteros PARES mayores iguales 0 y menores iguales a 50.\n";
        cin >> placeholder;
        while (placeholder < 0 || placeholder > 50 || placeholder % 2 != 0)
        {
            cout << "Error RE Ingrese elemento del array " << id << ", recuerde Enteros PARES mayores iguales 0 y menores iguales a 50.\n";
            cin >> placeholder;
        }
        arr[i] = placeholder;
    }
}
int elementos_mayores(int arr1[], int arr2[], int size)
{
    int value = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] > arr2[i])
            value++;
        else if (arr1[i] < arr2[i])
            value--;
    }
    return value;
}
int main()
{
    int array1[N], array2[N];
    int cantidad = N;

    cout << "Ingrese el tamaño t de los arreglos a utilizar\n";
    cin >> cantidad;

    ingresar_elemento(array1, cantidad, 1);
    ingresar_elemento(array2, cantidad, 2);

    int resultado = elementos_mayores(array1, array2, cantidad);
    if (resultado > 0)
        cout << "El arreglo con mayor cantidad de elementos mayores es array1";
    else if (resultado < 0)
        cout << "El arreglo con mayor cantidad de elementos mayores es array2";
    else
        cout << "EMPATE";
}