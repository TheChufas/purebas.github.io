int min(int A[], int N)
{
    int min = A[0];
    for(int i = 0; i < N; i++){
        if(A[i] < min){
            min = A[i];
        }
    }
    return min;
}