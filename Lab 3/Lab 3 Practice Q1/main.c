#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strcat(const char * const str1, const char * const str2);

int main()
{
    const char a[] = "Hello" , b[] = " There";
    printf("%s",my_strcat(a,b));
    return 0;
}

char *my_strcat(const char * const str1, const char * const str2){
    int i;
    i = strlen(str1) + strlen(str2) + 1;
    char *str3;
    str3 = (char *) malloc(i*sizeof(char));
    str3[i-1] = '\0';
    for(i = 0;i<strlen(str1);i++){
        str3[i] = str1[i];
    }
    for(i;i<(strlen(str2)+strlen(str1));i++){
        str3[i] = str2[i-strlen(str1)];
    }
    return str3;
}
