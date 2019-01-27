#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
    printf("Please input an integer(0 to end):");
    scanf("%d",&n);
    if(n>=10000 && n<99999){
        printf("Your input is a five digit number: %d\n",n);
    }
    if(n<-10000 && n>=-99999){
        printf("Your input is a five digit number: %d\n",n);
    }
    }while(n!=0);
    return 0;
}
