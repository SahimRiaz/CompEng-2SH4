#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int my_strcomp(const char str1[],const char str2[]);

int main()
{
    char list1[] = "zjacjkwbv", list2[] = "kjbcjkwb";
    my_strcomp(list1,list2);
    return 0;
}

int my_strcomp(const char str1[],const char str2[]){
    int len1, len2, i = 0;
    len1 = stringCount(str1);
    len2 = stringCount(str2);
    for(i;i<len1 || i<len2;i++){
        if(str1[i] < str2[i]){
            printf("1");
            return 1;
            }
        else if(str1[i] > str2[i]){
            printf("-1");
            return -1;
            }
        }
    printf("0");
    return 0;
    }

int stringCount(const char source[]){
    int e = 0;
    while(source[e] !='\0')
        {
        e++;
        }
    return (e);
    }
