#include<iostream>
using namespace std;

int main()
{   
    const int fil = 2, col = 3;
    int mat[fil][col] = {{3,5,8},{2,7,4}};
    
	for(int i=0; i<fil; i++){
    	for(int j=0; j<col; j++)
            cout << mat[i][j];   
        cout << endl; 
    }
    return 0;
}