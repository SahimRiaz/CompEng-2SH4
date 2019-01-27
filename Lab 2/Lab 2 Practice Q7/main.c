#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

int is_toeplitz(int a[][N],int r);

int main()
{
    int x[4][5] = {9,2,1,0,4,7,9,2,1,0,3,7,9,2,1,5,3,7,9,2};
    printMatrix(x,4);
    printf("\n\n");
    is_toeplitz(x,4);
    return 0;
}

void printMatrix(int a[][N],int M){
    int c,r = 0;
    for(r;r<M;r++){
        c = 0;
        printf("\n");
        for(c;c<N;c++){
            printf("%d ",a[r][c]);
            }
        }
    }

int is_toeplitz(int a[][N],int M){
    int r = 0,i,c,f = 0;
        for(r;r<M-1;r++){
            i = r;
            c = 0;
            // i is represents r in this case
            //The above r is the starting position of the loop
            for(i,c;c<M-r-1;c++,i++){
            if(a[i+1][c+1] != a[i][c]){
                //printf("r = %d, a[%d][%d] = %d\n",r,i,c,a[i][c]);
                f += 1;
                break;
                }
            }
        }
        c = 1;
        for(c;c<N-1;c++){
            i = c;
            r = 0;
            // i is represents c in this case
            //The above c is the starting position of the loop
            for(i,r;r<M-c;r++,i++){
            if(a[r+1][i+1] != a[r][i]){
                //printf("c = %d, a[%d][%d] = %d\n",c,r,i,a[r][i]);
                f += 1;
                break;
                }
            }
        }
    //If there was even one failure the matrix is not the toeplitz matrix so will fail
    if(f != 0)
        printf("0");
    else
        printf("1");
    }
