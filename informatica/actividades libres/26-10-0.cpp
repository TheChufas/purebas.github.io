#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  const int N = 5;
  const int M = 3;
  const int C = 5;
  
  int temp, datos[M][N] = {
    {
      1,
      999,
      1,
      2,
      1
    },
    {
      -11,
      -12,
      -234,
      42,
      10
    },
    {
      11,
      2,
      3,
      4,
      1
    }
  };

  for (int k = 0; k < M; k++) {
    for (int i = 0; i < N; i++) {
      cout << setw(C) << datos[k][i];
    }
    cout << endl;
  }

  //cout << "//////////////////////////////" << endl;
  for(int i = 0; i < C*N; i++)
    cout << '/';
  cout << endl;

  for (int c = 0; c < N; c++) {
    for (int k = 0; k < N - 1; k++) {
      for (int i = 0; i < N - 1 - k; i++) {
        if (datos[c][i] > datos[c][i + 1]) {
          temp = datos[c][i];
          datos[c][i] = datos[c][i + 1];
          datos[c][i + 1] = temp;
        }
      }
    }
  }
  for (int k = 0; k < M; k++) {
    for (int i = 0; i < N; i++) {
      cout << setw(C) << datos[k][i];
    }
    cout << endl;
  }
  return 0;
}