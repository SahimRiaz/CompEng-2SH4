#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 0,n;
    do{
    printf("Input a number to check how many digits it contains\n");
    scanf("%d",&n);
    }
    while(n<0);
    while(n>0){
        n = n/10;
        c+=1;
        }
    printf("Number of digits = %d",c);
    return 0;
}
