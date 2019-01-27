#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,s1,s2,h;
    c = 0;
    h = 400;
    for(h;h >= 2;h--){
        s2 = 400;
        for(s2;s2 >= 1;s2--){
            s1 = 400;
            for(s1;s1>=1;s1--){
                if(s1<=s2){
                    if(s1*s1+s2*s2==h*h){
                        printf("h = %d,s1 = %d,s2 = %d\n",h,s1,s2);
                        c+=1;
                        }
                    }
                }
            }
        }
    printf("c = %d",c);
    return 0;
}
