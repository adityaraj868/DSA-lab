#include<iostream>
#include<vector>
using namespace std;

void reverse(int* a,int n){
    int temp;
    for(int i=0; i<n/2; i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}

void matrix_multiply(int *a, int *b, int *c, int m, int n, int o) {
    //c is result matrix
    for (int i=0; i<m*o; i++)
        c[i] = 0;

    for (int i=0; i<m; i++) {
        for (int j=0; j<o; j++) {
            for (int k=0; k<n; k++) {
                c[i*o+j] += a[i*n+k] * b[k*o+j];
            }
        }
    }
}

void transpose(int *a, int *b, int m, int n){
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            //a[i][j]=a[i*n+j] is transposed it becomes b[j][i]=b[j*m+i] 
            b[j*m+i]=a[i*n+j];
        }
    }
}

int main(){

}