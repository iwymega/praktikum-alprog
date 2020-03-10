#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int baris, kolom;

int validasi(char* x){
	int len = strlen(x);
	int valid = 1;
	int i;
	
	for(i=0; i<len; i++){
		if(x[i] == '.'){
			continue;
		}
		
		if(!isdigit(x[i])){
			valid = 0;
			break;
		}
	}
	return valid;
}

float konversi2F(char* x){
	float y;
	
	y = atof(x);
	
	return y;
}

int konversi2I(char* x){
	int y;
	
	y = atoi(x);
	
	return y;
}

float **inMatriks(){
       char input1[10], input2[10];
       float **mat;

       ulang1:
       printf("Masukkan ordo matriks > "); scanf("%s %s",&input1, &input2);
       if(validasi(input1) != 0 && validasi(input2) != 0 ){
              baris = konversi2I(input1);
              kolom = konversi2I(input2);

              //alokasi memori untuk baris pada matriks
              mat = (float**)malloc(baris * sizeof(float*));

              //alokasi memori untuk kolom pada setiap baris
              for(int i = 0; i<baris; i++){
                     mat[i] = (float *)malloc(kolom * sizeof(float));
              }

              //input elemen matriks
              for(int i = 0; i<baris; i++){
                     for(int j = 0; j<kolom; j++){
                            ulang2:
                            printf("Masukkan nilai matriks[%d][%d] > ",i,j); scanf("%s",&input1);
                            if(validasi(input1) != 0){
                                   mat[i][j] = konversi2F(input1);
                            }
                            else{
                                   printf("Input anda salah!\n");
                                   goto ulang2;
                            }
                     }
              }
       }
       else{
              printf("Input anda salah!\n");
              goto ulang1;
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