#include <iostream>
#include <iomanip>
using namespace std;

float calc_des2(float inicial, float des)
{
    return inicial - inicial * (des/100);
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
            cout << "Ingrese precio y descuento pago contado del producto " << i << " recuerde descuento debe ser entre 5 y 50 por ciento\n";
            float obj = 0;
            while (true)
            {
                cin >> obj;
                if (j == 1 && (obj < 5 || obj > 50))
                    cout << "Error RE Ingrese DESCUENTO\n";
                else
                {
                    mat[i][j] = obj;
                    break;
                }
            }
        }
    }

    float cost = mat[0][0];
    for (int i = 0; i < n; i++)
    {
        if (calc_des2(mat[i][0], mat[i][1]) < cost)
        {
            cost = calc_des2(mat[i][0], mat[i][1]);
        }
    }
    cout << "El producto más economico cuesta:" << fixed << setprecision(2) << cost;
    return 0;
}