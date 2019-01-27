#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Part (a)
    int n,a,c=0,p=0,i=0,count,mult;
    do{
        printf("Enter a number to flip\n");
        scanf("%d",&n);
        a = n;
        while(a>0){
            a = a/10;
            c++;
            }
        }
    while(n<0);
    mult = 1;
    count = c;
    for(c;c>1;c--){
        mult = mult * 10;
        }
    for(i=0;i<count;i++)
        {
            p = p + n%10*mult;
            mult = mult/10;
            n = n/10;
        }
    printf("p = %d",p);
    return 0;
}
