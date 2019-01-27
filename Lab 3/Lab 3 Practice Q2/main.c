#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int ID;
    char first[15],last[15];
    int m1,m2;
    float finalGrade;
} student;

student **create_class_list(char *filename, int *sizePtr);
int find(int idNo, student **list, int size);
void input_grades(char *filename, student **list, int size);
void compute_final_course_grades(student **list,int size);
void output_final_course_grades(char* out, student **list, int size);
void print_list(student** list, int size);
void withdraw(int idNo, student** list,int* sizePtr);
void destroy_list(student** list, int *sizePtr);

int main(){
    int classSize,q,i = 0;
    student** ptrA;
    //Does part 1
    printf("Part 1\n");
    ptrA = create_class_list("class111.txt",&classSize);
    for(i; i<classSize;i++){
            printf("%d %s %s\n",ptrA[i]->ID,ptrA[i]->first,ptrA[i]->last);
    }

    //Does part 2
    printf("part 2\n");
    q = find(9000,ptrA,classSize);
    printf("%d\n",q);

    //Does part 3
    printf("Part 3\n");
    input_grades("grades.txt",ptrA,classSize);
    for(i = 0;i<classSize;i++){
        printf("%d %d %d\n",ptrA[i]->ID,ptrA[i]->m1,ptrA[i]->m2);
    }

    //Part 4
    printf("Part 4\n");
    compute_final_course_grades(ptrA,classSize);
    for(i = 0;i<classSize;i++){
        printf("%d %f\n",ptrA[i]->ID,ptrA[i]->finalGrade);
    }

    //Part 5
    printf("Part 5\n");
    output_final_course_grades("out.txt",ptrA,classSize);
    FILE *out = fopen("out.txt","r");
    if(out != NULL){
        printf("File was made\n");
    }
    else{
        printf("File not made\n");
    }

    //Part 6
    printf("Part 6\n");
    print_list(ptrA,classSize);

    //Part 7
    printf("Part 7\n");
    withdraw(4580,ptrA,&classSize);
    print_list(ptrA,classSize);

    //Part 8
    printf("Part 8\n");
    destroy_list(ptrA,&classSize);
    printf("Class size = %d\n",classSize);
    print_list(ptrA,classSize);

    return 0;
}

student **create_class_list(char *filename, int *sizePtr){
    FILE *studentClass = fopen(filename,"r");
    if(filename == NULL){
        printf("File not loaded");
    }
    fscanf(studentClass,"%d",sizePtr);
    student** studentList = malloc(*sizePtr*sizeof(student*));
    int i = 0;
    for(i;i<*sizePtr;i++){
        studentList[i] = calloc(1,sizeof(student));
        fscanf(studentClass,"%d%s%s",&(studentList[i]->ID),&(studentList[i]->first),&(studentList[i]->last));
    }
    return studentList;
}

int find(int idNo, student **list, int size){
    int i = 0;
    for(i;i<size;i++){
        if(list[i]->ID == idNo){
            return i;
        }
    }
    return -1;
}

void input_grades(char *filename, student **list, int size){
    FILE *grades = fopen(filename,"r");
    if(grades == NULL){
        printf("The file wasn't found");
        return 0;
    }
    int i = 0,j,id;
    for(i;i<size;i++){
        fscanf(grades,"%d",&id);
        j = find(id,list,size);
        fscanf(grades,"%d%d",&(list[j]->m1),&(list[j]->m2));
    }
}

void compute_final_course_grades(student **list,int size){
    int i = 0;
    for(i;i<size;i++){
        list[i]->finalGrade = (list[i]->m1 + list[i]->m2)/2.0;
    }
}

void output_final_course_grades(char* out, student **list, int size){
    FILE *output = fopen(out,"w");
    fprintf(output,"%d\n",size);
    int i = 0;
    for(i;i<size;i++){
        fprintf(output,"%d %f\n",list[i]->ID,list[i]->finalGrade);
    }
}

void print_list(student** list, int size){
    int i = 0;
    for(i;i<size;i++){
        printf("ID = %d First Name: %s Last Name: %s Grade 1:%d Grade 2: %d Final Grade: %f\n",list[i]->ID,list[i]->first,list[i]->last,list[i]->m1,list[i]->m2,list[i]->finalGrade);
    }
}

void withdraw(int idNo, student** list,int* sizePtr){
    int i,j;
    i = find(idNo,list,sizePtr);
    if(i != *sizePtr-1){
        for(j = i+1;j<*sizePtr;j++){
            list[j-1] = list[j];
        }
    }
    *sizePtr = *sizePtr - 1;
    free(&list[*sizePtr]);
}

void destroy_list(student** list, int *sizePtr){
    int i = 0;
    for(i;i<*sizePtr;i++){
        free(&list[i]);
    }
    free(&list);
    *sizePtr = 0;
}
