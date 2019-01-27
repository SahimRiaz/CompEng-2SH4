#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 2

int is_diag_dom(int mat[][N]);

int main()
{
    int x[2][2] = {1,3,2,4};
    is_diag_dom(x);
    return 0;
}


//Prints any sized matrix(Has to be 2D)
void printMatrix(int a[][N],int x,int y){
    int i = 0;
    for(x;i<x;i++){
        int j = 0;
        for(j;j<y;j++){
        printf("%d,%d = ",i,j);
        printf("%d\n",a[i][j]);
            }
        }
    }

int is_diag_dom(int mat[][N]){
    int i = 0,check = 0;
    for(i;i<N;i++){
        int j = 0,sum = 0;
        for(j;j<N;j++){
            if(j != i){
                sum += fabs(mat[i][j]);
                }
            }
        if(sum < mat[i][i]){
            check += 1;
            }
        }
    if(check == N){
        printf("1");
        }
    else{
        printf("0");
        }
    }
