#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void my_strcat( const char str1[], char str2[], char str3[], int n);
int stringCount(const char source[]);

int main()
{
    const char a[] = "there";
    const char x[] = "hello ";
    char z[11];
    my_strcat(x,a,z,11);
    stringPrint(z,11);
    return 0;
}

void my_strcat( const char str1[], char str2[], char str3[], int n){
    int l,r,c = 0;
    l = stringCount(str1);
    r = stringCount(str2);
    if((l + r) > n){
        printf("The 3rd array is too small to store the 2 words\n");
        return 0;
        }
    for(c;c<l;c++){
        str3[c] = str1[c];
        }
    c = 0;
    for(c;c<r;c++){
        str3[l + c] = str2[c];
        }
    }

void stringPrint(const char str[],int n){
     int c = 0;
     for(c;c<n;c++){
        printf("%c ",str[c]);
        }
    }

int stringCount(const char source[]){
    int e = 0;
    while(source[e] !='\0')
        {
        //printf("%c ", source[e]);
        //printf("%d \n",e);
        e++;
        }
    //printf("%d\n",e);
    return (e);
    }
