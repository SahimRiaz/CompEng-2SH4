#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[] = {1,2,3,4,5,6,7};
    array_sort(x,7);
    return 0;
}

void array_sort(int vector1[],int size){
    int i = 0;
    for(i;i<size-1;i++){
        if(vector1[i] > vector1[i+1]){
            printf("The array isn't sorted");
            break;
            }
        }
    printf("The array is sorted");
    }
