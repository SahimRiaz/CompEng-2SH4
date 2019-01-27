#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **read_words(const char *input_filename,int *nPtr);
void sort_words(char **list, int n);

int main()
{
    int wordCount;
    char **words;
    words = read_words("letter.txt",&wordCount);
    sort_words(words,wordCount);
    printAll(words,wordCount);
    return 0;
}

char **read_words(const char *input_filename,int *nPtr){
    FILE *l = fopen(input_filename,"r");
    if(l == NULL){
        printf("File not found");
    }
    fscanf(l,"%d",nPtr);
    char **wordPtr;
    wordPtr = calloc(*nPtr,sizeof(char*));
    if(wordPtr == NULL){
        printf("Not enough space");
    }
    int i = 0;
    for(i;i<*nPtr;i++){
        wordPtr[i] = malloc(sizeof(char*));
        fscanf(l,"%s",wordPtr[i]);
    }
    fclose(l);
    return wordPtr;
}

void sort_words(char **list, int n){
    int i,j = 0;
    char *temp = malloc(sizeof(char*));
    for(j;j<n;j++){
        i = j+1;
        for(i;i<n;i++){
            if(strcmp(list[j],list[i])>0){
               temp = list[i];
               list[i] = list[j];
               list[j] = temp;
            }
        }
    }
}

void printAll(char **list, int n){
    int i = 0;
    for(i;i<n;i++){
        printf("%s\n",list[i]);
    }
}
