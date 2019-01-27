#include <stdio.h>
#include <stdlib.h>

int prefix(char word[], char pre[]);

int main()
{
    char a[] = "Hello", b[] = "Hell";
    return 0;
}

int prefix(char word[], char pre[]){
    int wordLen, preLen, i = 0;
    wordLen = stringCount(word);
    preLen = stringCount(pre);
    if(wordLen < preLen){
        printf("That isn't a prefix");
        return 0;
        }
    for()
    }

int stringCount(const char source[]){
    int e = 0;
    while(source[e] !='\0')
        {
        e++;
        }
    return (e);
    }
