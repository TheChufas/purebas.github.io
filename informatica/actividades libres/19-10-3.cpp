#include<iostream>
using namespace std;

int main()
{   
    const int fil = 2, col = 3;
    int mat[fil][col];
    
	for(int i=0; i<fil; i++){
    	for(int j=0; j<col; j++)
        {
            cout << "Ingrese elemento " << i << ' ' << j << ":\n";
            cin >> mat[i][j];   
        }
    }
    for(int i=0; i<fil; i++){
        cout <<'|';
    	for(int j=0; j<col; j++){
                cout << mat[i][j];
                if(j != col-1)
                    cout << '-';
    	    }
        cout << '|' << endl; 
    }
    
    int suma = 0;
    for(int i=0; i<fil; i++){
        for(int j=0; j<col; j++)
        {
            suma += mat[i][j];
        }
    }
    cout << "suma = " << suma;
    return 0;
}