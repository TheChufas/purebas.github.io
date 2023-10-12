#include <iostream>
#include <iomanip>
using namespace std;

int busqueda(int arr[], int max, int buscar){
    int i_inferior = 0;
    int i_superior = max - 1;

    while(i_inferior <= i_superior){
        int medio = (i_inferior + i_superior)/2;
        if(buscar == arr[medio]){
            return medio;
        }
        else if (buscar > arr[medio]){
            i_inferior = medio + 1;
        }
        else {
            i_superior = medio - 1;
        }
    }
    return -1;
}

int main()
{
    const int N = 12;
    int datos[N];
    int i = 1, buscado;

    cin>>datos[0];
    do
    {
        cin>>datos[i]; 
        if (datos[i] >= datos[i-1])
            i++;
    }while(i<N);
    
    cin>>buscado;
    //Busqueda binaria o dicotomica
    /*int li=0, ls=N-1;
    
    while(li<=ls)
    {
        int medio = (li+ls)/2;
        if (datos[medio] == buscado) 
        {
            cout<< "El elemento " << buscado << " se encuentra en la posicion "<< medio << " de la lista" << endl;
            break;
        }
        else if (datos[medio] > buscado)
            li = medio + 1;
        else
            ls = medio - 1;    
    }
    
    if (!(li<ls))
        cout<< "El elemento "<< buscado << " no se encuentra en la lista" << endl;
    
    */

    int indice = busqueda(datos, N, buscado);
    if(indice != -1){
        cout<< "El elemento " << buscado << " se encuentra en la posicion "<< indice << " de la lista" << endl;
    }
    else{
        cout<< "El elemento "<< buscado << " no se encuentra en la lista" << endl;
    }

    return 0;
}