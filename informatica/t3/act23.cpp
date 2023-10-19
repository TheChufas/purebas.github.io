#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int N = 15;
    double X[N];
    double mu, sigma;

    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
        mu += X[i];
    }

    mu /= N;
    for (int i = 0; i < N; i++)
    {
        sigma += pow(X[i] - mu, 2);
    }
    sigma = sqrt(sigma / N);

    cout << mu << ',' << sigma;
}