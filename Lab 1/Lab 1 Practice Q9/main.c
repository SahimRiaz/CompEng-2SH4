#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s,a,space;
    do{
        printf("Input an odd number to make the shapes\n");
        scanf("%d",&n);
    }
    while(n<=0 || n>25 && n%2==0);
    //Square code
    a = n;
    for(a;a>0;a--){
        printf("\n");
        for(s = 2*n-1;s>0;s--){
            printf("*");
            }
        }
    printf("\n\n");

    //Triangle Code
    for(a = 1;a<n;a++){
        printf("\n");
        for(s = 2*a-1;s>0;s--){
            printf("*");
            if(s!=n){
                space = ((2*n-1)-a)/2;
                for(space;space>0;space--){
                    printf(" ");
                    }
                }
            }
        }
    printf("\n\n");

    //Right angle triangle Code
    a = n;
    for(a;a>0;a--){
        printf("\n");
        for(s = 2*a-1;s>0;s--){
            printf("*");
            }
        }
    printf("\n\n");

    return 0;
}
