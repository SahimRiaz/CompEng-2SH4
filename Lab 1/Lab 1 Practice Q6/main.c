#include <stdio.h>
#include <stdlib.h>

int main()
{
    int end,c;
    float pi,start;
    start = 1;
    pi = 0;
    c = 1;
    printf("Input the number of values to add to make Pi\n");
    scanf("%d",&end);
    while(c<=end){
        if(c%2==1){
            pi = pi + 4/start;
            start+=2;
            c++;
        }else{
            pi = pi - 4/start;
            start+=2;
            c++;
        }
    }
    printf("The value of Pi is %f",pi);
    return 0;
}
