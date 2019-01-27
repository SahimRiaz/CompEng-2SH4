#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[] = {14,9,15,4,14,1,141,15,584,18,15,4,14,1,41,41,4,14};
    int_search(x,14,18);
    return 0;
}


void int_search(int v1[],int n, int size){
    int i = 0,c = 0;
    for(i;i<size;i++){
        if(v1[i] == n)
            c++;
        }
    printf("The number %d appears %d times in the array",n,c);
    }
