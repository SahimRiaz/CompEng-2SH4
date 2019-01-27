#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ave;
    printf("Enter the students average\n");
    scanf("%f",&ave);
    switch((int)ave){
        case 90 ... 100:
            printf("4\n");
            break;
        case 80 ... 89:
            printf("3\n");
            break;
        case 70 ... 79:
            printf("2\n");
            break;
        case 60 ... 69:
            printf("1\n");
            break;
        case 0 ... 59:
            printf("0\n");
            break;
        default:
            printf("This is an invalid input\n");
    }
    return 0;
}
