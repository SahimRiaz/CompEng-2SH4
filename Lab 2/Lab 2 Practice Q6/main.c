#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

void printMatrix(int a[][N]);

int main()
{
    int mat[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    printMatrix(mat);
    return 0;
    }

void printMatrix(int a[][N]){
    int j = 0,c = 0,t=1,r;
    for(j;j<N;j++){
        c = 0;
        for(c;c<=j;c++){
            printf("%d ",a[j - c][c]);
            }
        }
    for(j = 1;j<N;j++){
        r = N-1;
        c = j;
        for(t=j;t<N;t++){
            printf("%d ",a[r][c]);
            r--;
            c++;
            }
        }
}
