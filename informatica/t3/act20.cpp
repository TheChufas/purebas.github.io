float mayor(float valores[], int N, int &pos)
{
    float mayor = valores[0];
    pos = 0;
    for(int i = 0; i < N; i++){
        if(valores[i] > mayor){
            mayor = valores[i];
            pos = i;
        }
    }
    return mayor;
}