#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,dec,mult;
    printf("Please input a binary number to convert into decimal\n");
    scanf("%d",&n);
    a = n;
    c = 0;
    while(a>0){
        a = a/10;
        c++;
        }
    dec = 0;
    mult = 1;
    b = 0;
    for(b;b<c;b++){
        if(n%2==1){
            dec = dec + mult;
            n = n-1;
            n = n/10;
            mult = mult*2;
            }
        else{
            n = n/10;
            mult = mult*2;
            }
        }
    printf("The decimal number is %d",dec);
    return 0;
}
