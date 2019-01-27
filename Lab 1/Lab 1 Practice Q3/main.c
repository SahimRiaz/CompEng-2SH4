#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please input the number of values you would like to enter\n");
    int n,s,i,j;
    scanf("%d",&n);
    while(n<0){
        printf("Please input a positive value\n");
        scanf("%d",&n);
    }
    printf("Now please input %d numbers \n",n);
    scanf("%d",&s);
    i = 1;
    while(i<=n-1){
        scanf("%d",&j);
        if(j<s){
            s = j;
        }
        i+=1;
    }
    printf("The smallest number was %d",s);
    return 0;
}
