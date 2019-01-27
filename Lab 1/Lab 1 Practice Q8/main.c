#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,sum,count;
    count = 0;
    do{
    printf("Input a value to search to\n\n");
    scanf("%d",&n);
    }
    while(n<0);
    for(n;n>5;n--){
        sum = 0;
        for(d=1;d<n;d++){
            if(n%d == 0)
                sum+=d;
        }
    if(sum == n){
        count++;
        printf("\n%d\n",n);
        }
    }
    printf("Perfect numbers present = %d",count);
    return 0;
}
