#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    const size_t m = 4;
    const size_t n = 5;
    const size_t l = 6;
    srand(time(nullptr));
    int A[m][n];
    for(unsigned int i = 0; i < m; i++){//
        for(unsigned int j = 0; j < n; j++){
            A[i][j] = 1 + rand()%10;
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    printf("\n\n");
    int B[n][l];
    for(unsigned int i = 0; i < n; i++){
        for(unsigned int j = 0; j < l; j++){
            B[i][j] = 1 + rand()%10;
            cout<<B[i][j]<<"\t";
        }
        cout<<endl;
    }
    printf("\n\n");
     int C[m][l];//Резельтат перемножения матриц А и Б
    for(unsigned int i = 0; i < m; i++){
        for(unsigned int j = 0; j < l; j++){
            C[i][j] = 0;
            for(unsigned int k = 0; k < n; k++){
            C[i][j] += A[i][k]*B[k][i];
            }
        }
    }
    for(unsigned int i = 0; i < m; i++){
        for(unsigned int j = 0; j < l; j++){
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
