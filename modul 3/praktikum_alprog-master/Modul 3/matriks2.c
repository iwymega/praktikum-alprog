#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
 * perkalian dengan konstanta
 * perkalian dengan matriks :
        * matriks A[p,n]
        * matriks B[n,l]
        * A[p,n] * B[n,l] = C[p,l]
 * penjumlahan dengan matriks :
        * ordo matriks harus sama
 * transpose
 * 
 * Program ini maksimal menampung matriks dengan ordo 10x10
 */

void PerkalianKonstan();
void PerkalianMatriks();
void PenjumlahanMatriks();
void Transpose();
void outMatriks(float **mat);
void menu();

int validasi(char* x);
float konversi2F(char* x);
int konversi2I(char* x);
float **inMatriks(int baris, int kolom);


int main(){
       menu();

       return 0;
}


void menu(){
       char input[10];
	int pilihan;
	char ulang;
	
	start:
		system("cls");
		printf("\n\n\t============================================");
		printf("\n\t             Operasi matriks");
		printf("\n\t============================================");
		printf("\n\t\t1. Perkalian Matriks dengan Konstan");
		printf("\n\t\t2. Perkalian Matriks dengan Matriks");
		printf("\n\t\t3. Penjumlahan Matriks");
		printf("\n\t\t4. Transpose Matriks");
		printf("\n\t\t5. Keluar");
		printf("\n\t============================================");
		printf("\n\n\tMasukkan pilihan anda : ");
		scanf("%s", &input);
    
		if(validasi(input) == 1){
			pilihan = konversi2I(input);
		}else{
			printf("\n\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR!!\n\n");
			system("pause");
			goto start;
		} 
    	
		switch(pilihan){
			case 1:
				PerkalianKonstan();
				break;
			case 2:
				PerkalianMatriks();
				break;
			case 3:
				PenjumlahanMatriks();
				break;
			case 4:
				Transpose();
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("\n\n\tPILIHAN TIDAK TERSEDIA, SILAKAN ULANGI!!\n\n");
				system("pause");
				goto start;
				break;
		}
		
	do{
		printf("\n\n\tBalik ke menu (y/t) ? ");
		scanf("%s", &ulang);
		
		if(ulang == 'y' || ulang == 'Y'){
			goto start;
		}else if(ulang == 't' || ulang == 'T'){
			exit(0);
		}else{
			printf("\n\tINPUTAN ANDA TIDAK SESUAI, SILAKAN ULANGI!!\n\n");
			system("pause");
		}	
	}while(ulang != 't' || ulang != 'T');
}


void PerkalianKonstan(){
       float matriks[10][10];
       char input1[10], input2[10];
       float **mat;
       int i,j,x;
       int baris, kolom; //ordo matriks

       //input matriks
       ulangOrdo:
       printf("Masukkan ordo matriks \n"); scanf("%s %s", &input1, &input2);
       if(validasi(input1) != 0 && validasi(input2) != 0 ){
              printf("Masukkan elemen matriks\n");
              baris = konversi2I(input1);
              kolom = konversi2I(input2);

              mat = inMatriks(baris,kolom);
              
              for(i = 0; i<baris; i++){
                     for(j = 0;j<kolom;j++){
                            matriks[i][j] = *(*(mat + i) + j);
                     }
              }

              printf("Matriks \n");
              for (i = 0; i < baris; i++){
                     for (j = 0; j < kolom; j++){
                            printf(" %4.1f", matriks[i][j]);
                     }
                     printf("\n");
              }
              //2. input pengali
              printf("\nMasukkan pengali > "); scanf("%d", &x);

              //3. proses perkalian
              for (i = 0; i < baris; i++){
                     for (j = 0; j < kolom; j++){
                            matriks[i][j] *= x;
                     }
              }
              //4. output hasil
              printf("Matriks \n");
              for (i = 0; i < baris; i++){
                     for (j = 0; j < kolom; j++){
                            printf(" %4.1f", matriks[i][j]);
                     }
                     printf("\n");
              }
       }
       else{
              printf("Input anda salah!\n");
              goto ulangOrdo;
       }
}

void PerkalianMatriks(){
       float matriks1[10][10], matriks2[10][10], matriks3[10][10];
       int i, j, k; // counter for loop 
       int baris1, kolom1, baris2, kolom2; //ordo matriks
       float **mat; //pointer to float untuk matriks
       char input1[10], input2[10];

       ulangOrdo1:
       //input ordo matriks pertama
       printf("Masukkan ordo matriks pertama\n"); scanf("%s %s", &input1, &input2);
       if(validasi(input1) != 0 && validasi(input2) != 0 ){
              printf("Masukkan elemen matriks pertama\n");
              baris1 = konversi2I(input1);
              kolom1 = konversi2I(input2);

              //input matriks pertama
              mat = inMatriks(baris1,kolom1);

              //assign dari pointer ke array
              for(i = 0; i<baris1; i++){
                     for(j = 0;j<kolom1;j++){
                            matriks1[i][j] = *(*(mat + i) + j);
                     }
              }

              ulangOrdo2:
              //input ordo matriks kedua
              printf("Masukkan ordo matriks kedua\n"); scanf("%s %s", &input1, &input2);
              if(validasi(input1) != 0 && validasi(input2) != 0 ){
                     printf("Masukkan elemen matriks kedua\n");
                     baris2 = konversi2I(input1);
                     kolom2 = konversi2I(input2);

                     if(kolom1 == baris2){
                            //input matriks kedua
                            mat = inMatriks(baris2,kolom2);

                            //assign dari pointer ke array
                            for(i = 0; i<baris2; i++){
                                   for(j = 0;j<kolom2;j++){
                                          matriks2[i][j] = *(*(mat + i) + j);
                                   }
                            }

                            printf("Matriks 1 \n");
                            for (i = 0; i < baris1; i++){
                                   for (j = 0; j < kolom1; j++){
                                          printf(" %4.1f", matriks1[i][j]);
                                   }
                                   printf("\n");
                            }

                            printf("Matriks 2 \n");
                            for (i = 0; i < baris2; i++){
                                   for (j = 0; j < kolom2; j++){
                                          printf(" %4.1f", matriks2[i][j]);
                                   }
                                   printf("\n");
                            }

                            //output hasil
                            printf("\nMatriks hasil perkalian\n");
                            for (i=0;i<baris1;i++){
                                   for (j=0;j<kolom2;j++){              
                                          matriks3[i][j] = 0;
                                          for (k=0;k<baris2;k++){
                                                 matriks3[i][j] += matriks1[i][k] * matriks2[k][j];
                                          }
                                          printf(" %4.1f", matriks3[i][j]);            
                                          if (j == (kolom2-1)) printf("\n");
                                          else printf(" ");
                                   }
                            }
                     }
                     else{
                            printf("Input anda salah\n");
                            printf("kolom matriks pertama harus sama dengan baris matriks kedua\n");
                            goto ulangOrdo2;
                     }
              }
              else{
                     printf("Input anda salah!\n");
                     goto ulangOrdo2;
              }
       }
       else{
              printf("Input anda salah!\n");
              goto ulangOrdo1;
       }       
}

void PenjumlahanMatriks(){
       float matriks1[10][10], matriks2[10][10];
       int i, j; // counter for loop 
       int baris, kolom; //ordo matriks
       float **mat; //pointer to float untuk matriks
       char input1[10], input2[10]; 

	ulangOrdo:
       printf("Masukkan ordo matriks \n"); scanf("%s %s", &input1, &input2);
       if(validasi(input1) != 0 && validasi(input2) != 0 ){
              baris = konversi2I(input1);
              kolom = konversi2I(input2);

		//input elemen matriks pertama
		printf("Masukkan elemen matriks pertama\n");
              mat = inMatriks(baris,kolom);
              
              for(i = 0; i<baris; i++){
                     for(j = 0;j<kolom;j++){
                            matriks1[i][j] = *(*(mat + i) + j);
                     }
              }

		//input elemen matriks kedua
		printf("Masukkan elemen matriks kedua\n");
              mat = inMatriks(baris,kolom);
              
              for(i = 0; i<baris; i++){
                     for(j = 0;j<kolom;j++){
                            matriks2[i][j] = *(*(mat + i) + j);
                     }
              }

		//output matriks pertama
              printf("Matriks 1\n");
              for (i = 0; i < baris; i++){
                     for (j = 0; j < kolom; j++){
                            printf(" %4.1f", matriks1[i][j]);
                     }
                     printf("\n");
              }

		//output matriks kedua
		printf("Matriks 2\n");
              for (i = 0; i < baris; i++){
                     for (j = 0; j < kolom; j++){
                            printf(" %4.1f", matriks2[i][j]);
                     }
                     printf("\n");
              }

		//jumlahkan kedua matriks
		for (i = 0; i < baris; i++){
			for (j = 0; j < kolom; j++){
				matriks1[i][j] += matriks2[i][j];
			}
		}

		printf("Hasil penjumlahan matriks ordo %d x %d \n", baris, kolom);
		for (i = 0; i < baris; i++){
			for (j = 0; j < kolom; j++){
				printf(" %4.1f", matriks1[i][j]);
			}
			printf("\n");
		}  
       }
       else{
              printf("Input anda salah!\n");
              goto ulangOrdo;
       }  
}

void Transpose(){
       float matriks[10][10];
       int i, j; // counter for loop 
       int baris, kolom; //ordo matriks
       float **mat; //pointer to float untuk matriks
       char input1[10], input2[10]; 

	ulangOrdo:
       printf("Masukkan ordo matriks \n"); scanf("%s %s", &input1, &input2);
       if(validasi(input1) != 0 && validasi(input2) != 0 ){
              baris = konversi2I(input1);
              kolom = konversi2I(input2);

		//input elemen matriks 
		printf("Masukkan elemen matriks pertama\n");
              mat = inMatriks(baris,kolom);
              
              for(i = 0; i<baris; i++){
                     for(j = 0;j<kolom;j++){
                            matriks[i][j] = *(*(mat + i) + j);
                     }
              }

		//output matriks
              printf("Matriks\n");
              for (i = 0; i < baris; i++){
                     for (j = 0; j < kolom; j++){
                            printf(" %4.1f", matriks[i][j]);
                     }
                     printf("\n");
              }

		 //2. output hasil
		printf("Transpose matriks \n");
		for (j = 0; j < kolom; j++){
			for (i = 0; i < baris; i++){
				printf(" %4.1f", matriks[i][j]);
			}
			printf("\n");
		}
       }
       else{
              printf("Input anda salah!\n");
              goto ulangOrdo;
       }
}

int validasi(char* x){
	int len = strlen(x);
	int valid = 1;
	int i;
	
	for(i=0; i<len; i++){
		if(x[i] == '.'){
			continue;
		}

            if(x[i] == '-'){
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

float **inMatriks(int baris, int kolom){
       char input1[10], input2[10];
       float **mat;

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

       return mat;
}
/*
void outMatriks(float **mat){

       for(int i = 0; i<baris; i++){
              for(int j = 0;j<kolom;j++){
                     printf("%.1f",*(*(mat + i) + j));
                     printf(" ");
              }
              printf("\n");
       }
}
*/
