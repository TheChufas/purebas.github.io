void invierte(int org[][3], int dst[][3], int F)
{
    for (int i = 0; i < F; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dst[i][j] = org[F-i-1][j];
        }
    }
}