//Escribir una funcion que reciba un arreglo como parametro #funcion(arr, N)
//tambien una variable entera que representa el tamanno del arreglo #N
//y solicitar el valor de los elementos del arreglo
void funcion(int arr[], int N){
    for(int i=0; i<N ; i++)
    {
        //cout << "Ingrese v(" <<i<< "): "; //Es necesario mostrar texto por cada valor?
        cin >> arr[i];
    }
}