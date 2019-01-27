#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void letter_freq(const char word[], int freq []);

int main()
{
    int letters[26] = {0};
    char word[] = {'a','b','c','d','D','d','d','d','d','z','g','M','t','o','P','a','X'};
    letter_freq(word,letters);
    return 0;
}

void letter_freq(const char word[], int freq []){
    int c,i = 97,I = 65;
    for(i,I;i<=122;i++,I++){
        c = 0;
        while(word[c] != '\0'){
            if(word[c] == i){
                freq[i-97] = freq[i-97] + 1;
                //printf("c = %d,char = %c\n",c,word[c]);
                }
            else if(word[c] == I){
                freq[i-97] = freq[i-97] + 1;
                //printf("c = %d,char = %c\n",c,word[c]);
                }
            c++;
            }
        }
    i = 0;
    for(i;i<26;i++){
        printf("The count of '%c' and '%c' is %d\n",i+'A',i+'a',freq[i]);
        }
    }
