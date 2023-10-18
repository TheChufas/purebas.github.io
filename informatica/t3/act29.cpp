void minMax(int A[], int N, int &m, int &M)
{
    m = M = A[0];
    for (int i = 0; i < N; i++)
    {
        if(A[i] < m){
            m = A[i];
        }
        if(A[i] > M){
            M = A[i];
        }
    }
}