#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,c;
    do{
        printf("Input an integer greater than 1 to find out if it is a prime number\n");
        scanf("%d",&n);
        }while(n<=1);
    i = 1;
    c = 0;
    for(i;i<=n;i++){
        if(n%i == 0){
            c++;
            }
        }
    if(c == 2)
        printf("%d is a prime number",n);
    else
        printf("%d isn't a prime number",n);
    return 0;
}
