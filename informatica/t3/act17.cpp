#include <iostream>
using namespace std;

const int N=10;

void rellenar_arreglo(float [], int n);

int main()
{
	//1 y 2 Declarar variables
	float A[N];
	int M;

	//3 Solicitar rango de 1 a N (ambos inclusive).
    do{
		cout<< "Ingrese M:\n";
		cin >> M;
    }while(M < 1 || M > N);

	//4 Rellenar el arreglo llamando a la funcion rellenar_arreglo
	rellenar_arreglo(A, M);

	//5 Mostrar valores  "El arreglo es: x, y, ... z," 
	cout<<"\nEl arreglo es: ";
	for(int i = 0; i < M; i++){
		cout<<A[i];
		if(i == M-1)
			return
		cout<<", ";
	}

    return 0;
}


void rellenar_arreglo(float arr[] , int cant)
{
    for(int i=0; i<cant; i++)
    {
        cout << "Ingrese el elemento ("<<i<<"): "<<endl;
        cin >> arr[i];
    }
}