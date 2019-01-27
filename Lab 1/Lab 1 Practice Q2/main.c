#include <stdio.h>
#include <stdlib.h>

int main()
{
   int input;
   scanf("%d",&input);
   while(input<0){
    printf("Please input a positive value\n");
    scanf("%d",&input);
   }
   return 0;
}
