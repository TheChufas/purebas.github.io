#include <iostream>
#include <iomanip>
using namespace std;

float calc_des(float inicial, float menor)
{
    return ((inicial - menor) / inicial) * 100;
}

int main()
{
    const int N = 10;
    int n = N;
    float mat[N][2];

    cout << "Ingrese la cantidad de productos a procesar n\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Ingrese precios de producto " << i << " recuerdo, el precio por mayor debe ser menor\n";
            float obj = 0;
            while (true)
            {
                cin >> obj;
                if (j == 1 && obj >= mat[i][0])
                    cout << "Error RE Ingrese precio por mayor\n";
                else
                {
                    mat[i][j] = obj;
                    break;
                }
            }
        }
    }

    int id = 0;
    float des = calc_des(mat[0][0], mat[0][1]);
    for (int i = 0; i < n; i++)
    {
        if (calc_des(mat[i][0], mat[i][1]) > des)
        {
            des = calc_des(mat[i][0], mat[i][1]);
            id = i;
        }
    }
    cout << "El producto con mayor porcentaje de descuento es el ID:" << id << " con un " << fixed << setprecision(2) << des << " %";
    return 0;
}