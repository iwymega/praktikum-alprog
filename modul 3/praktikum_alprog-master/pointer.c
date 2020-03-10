#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int baris, kolom;

float **inMatriks(){

       printf("Masukkan ordo matriks > "); scanf("%d %d",&baris,&kolom);
       float **mat = (float**)malloc(baris * sizeof(float*));

       for(int i = 0; i<baris; i++){
              mat[i] = (float *)malloc(kolom * sizeof(float));
       }

       for(int i = 0; i<baris; i++){
              for(int j = 0; j<kolom; j++){
                     ulang:
                     printf("Masukkan nilai matriks[%d][%d] > ",i,j); scanf("%f",&mat[i][j]);
              }
       }

       return mat;
}

void outMatriks(float **mat){

       for(int i = 0; i<baris; i++){
              for(int j = 0;j<kolom;j++){
                     printf("%.1f",*(*(mat + i) + j));
                     printf(" ");
              }
              printf("\n");
       }
}


/* main function to call above defined function */
int main () {

       float **p;

       p = inMatriks();
       outMatriks(p);
       free(*p);

       return 0;
}