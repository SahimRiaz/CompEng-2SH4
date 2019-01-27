#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float e,f,m,num,x,fact;
    do{
        printf("Please input a positive integer to add the sum to\n");
        scanf("%d",&n);
        printf("Now please input a positive numerator to use\n");
        scanf("%f",&m);
    } while(n<0 && m<0);
    num = m;
    x = m;
    i = 1;
    e = 1;
    for(i;i<n;i++){
        fact = 1;
        for(f=1;f<=i;f++){
            fact = fact * f;
            }
        e = e + (m/fact);
        m = num * m;
        }
    printf("e^%f with %d terms = %f",x,n,e);
    return 0;
}
