// Bibliotecas
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int fibonacci[N];

  //Completar con su codigo
  fibonacci[0] = 0;
  fibonacci[1] = 1;
  for(int i=2; i<N; i++){
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
  }

  for(int i=0; i<N; i++)
    cout << fibonacci[i] << " ";

  return 0;
}