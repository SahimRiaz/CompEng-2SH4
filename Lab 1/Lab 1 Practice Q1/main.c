#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum;
    i = 32;
    sum = 0;
    for(i;i>=30&&i<=1000;i+=4){
           sum+=i;
    }
    printf("The sum is %d using the for loop \n",sum);

    i = 32;
    sum = 0;
    while(i<=1000){
        sum+=i;
        i+=4;
    }
    printf("The sum is %d using the while loop \n",sum);

    i = 32;
    sum = 0;

    do{
        sum+=i;
        i+=4;
    }
    while(i<=1000);

    printf("The sum is %d using the do loop",sum);

    return(0);
}
