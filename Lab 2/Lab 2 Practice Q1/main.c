#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x[4] = {5,3,7,9};
    double y[4] = {8,2,3,6};
    double z[4];
    print_vector(x,4);
    add_vectors(x,y,z,4);
    for(int i = 0;i<6;i++){
        printf("\nz = %G",z[i]);
        }
    printf("\n\n");
    scalar_prod(x,y,z,4);
    for(int i = 0;i<6;i++){
        printf("\nz = %G",z[i]);
        }
    norm2(x,4);
    return 0;
}


void print_vector(double array[],int size){
        int i = 1;
        printf("%G",array[0]);
        for(i;i<size;i++){
            printf(", %G",array[i]);
        }
}

void add_vectors(double vector1[],double vector2[],double vector3[],int n){
        int i = 0;
        for(i;i<n;i++)
            vector3[i] = vector1[i] + vector2[i];
}


void scalar_prod(double vector1[],double vector2[],double vector3[],int n){
    int i = 0;
    for(i;i<n;i++)
        vector3[i] = vector1[i]*vector2[i];
}


void norm2(double vector1[],int n){
    double L = 0,f;
    int i = 0;
    for(i;i<n;i++){
        L = L + vector1[i]*vector1[i];
        }
    f = sqrt(L);
    printf("\nL2 = %f\n",f);
    }
