#include <iostream>
#include <cmath>
using namespace std;

/*
	Dado un arreglo de datos y la cantidad de elementos 
	a explorar, esta función calcula el valor de la mediana 
	y lo devuelve como valor de retorno. Además, en el 
	argumento pos_mediana, almacena	la posicion en la que 
	se encuentra el valor de la mediana	si la mediana pertenece 
	a la colección o -1 en caso contrario.
*/
double calcular_mediana(int datos[], int N, double& pos_mediana)
{
	//ordeno el arreglo datos usando ordenamiento burbuja
    for (int i=0; i<N-1; i++)
        for (int j=1 ; j < N - i; j++)
            if (datos[j-1] > datos[j])
            {
                int temp = datos[j];
                datos[j] = datos[j-1];
                datos[j-1] = temp;
            }
    
	//calculo mediana
    if(N%2 == 1)
    {
		//Si la coleccion de datos es impar es el valor del medio
        pos_mediana = N/2;
        return datos[(int)pos_mediana];
    }else{
		//Sino es el promedio de los dos valores del medio
        double mediana = (datos[N/2 - 1] + datos[N/2]) / 2.0; 
        if (mediana == datos[N/2])
            pos_mediana = N/2;
        else
            pos_mediana = -1;
        return mediana;
    }  
}

int main()
{
    const int N = 15;
    int nums[N];
    double  mediana;
    int i = 0, num; 
    double mediana_pos = 0;
    
	//solicito datos al usuario
    cin>>num;
    while(num!=0 && i<N)
    {
        nums[i] = num;
        i++;
        cin>>num;
    }

    if (i == 0) 
        //El usuario no ingreso datos		
		cout<<"No se ingresaron datos"<<endl;
    else
    {
        //Calculo mediana e informo resultados
	      mediana = calcular_mediana(nums, i, mediana_pos);
	      if (mediana_pos != -1)
	          cout<<"La mediana es: "<< mediana <<" y es un elemento de la coleccion."<<endl;
        else
            cout<<"La mediana es: "<< mediana <<" pero no es un elemento de la coleccion."<<endl;
    }    
}