#include <stdio.h>
#include <stdlib.h>

void change(int x[],int n);

int main()
{
    int a[] = {0,2,1,1,5,0,10,1,0,10,1,1,0,10,1,0,19};
    change(a,17);
    return 0;
}
void change(int x[],int n){
    int i = 0,c = 0,count = 0,t1;
    for(i;i<n;i++){
        if(x[i] != 0){
            x[c] = x[i];
            c += 1;
            }
        }
    t1 = n - c;
    for(c;c<n;c++)
        x[c] = 0;
    printf("The changed array is %d",x[0]);
    i = 1;
    for(i;i<n;i++)
    printf(" ,%d",x[i]);
    }
