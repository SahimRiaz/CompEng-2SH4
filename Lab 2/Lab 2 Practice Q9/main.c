#include <stdio.h>
#include <stdlib.h>

void string_copy(const char source[], char destination[], int n);

int main()
{
    char initial[] = {'h','e','l','l','o'},final[4];
    //printf("c = %d\n",stringCount(initial));
    string_copy(initial,final,4);
    return 0;
}

void string_copy(const char source[], char destination[], int n){
    int c = 0;
    for(c;c<n-1;c++){
        destination[c] = source[c];
        }
    destination[c] = '\0';
    for(c = 0;c<n;c++){
        printf("%c",destination[c]);
        }
    }
