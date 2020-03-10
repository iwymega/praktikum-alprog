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
void PerkailanMatriks();
void PenjumlahanMatriks();
void Transpose();
void menu();

int validasi(char* x);
int validasi_menu(char* x);
float konversi(char* x);

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
    
		if(validasi_menu(input) == 1){
			pilihan = atoi(input);
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
				PerkailanMatriks();
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
       int i, j; // counter for loop 
       int m, n; // ordo matriks
       int x; // variabel pengali
       char input1[10], input2[10];

       //1. input matriks
       ulangOrdo:
       fflush(stdin);
       printf("Masukkan ordo matriks \n"); scanf("%s %s", &input1, &input2);
       if(validasi(input1) != 0 && validasi(input2) != 0 ){
              ulangElemen1:
              printf("Masukkan elemen matriks\n");
              m = konversi(input1);
              n = konversi(input2);

              for (i = 0; i < m; i++){
                     for (j = 0; j < n; j++){
                            scanf("%s", &input1);
                            if(validasi(input1) != 0){
                                   matriks[i][j] = konversi(input1); 
                            }
                            else{
                                   printf("Input anda salah!\n");
                                   fflush(stdin);
                                   goto ulangElemen1;
                            }
                     }
              }
       }
       else{
              printf("Input anda salah!\n");
              goto ulangOrdo;
       }
       

       printf("Matriks \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     printf(" %.1f", matriks[i][j]);
              }
              printf("\n");
       }
       //2. input pengali
       printf("\nMasukkan pengali > "); scanf("%d", &x);

       //3. proses perkalian
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     matriks[i][j] *= x;
              }
       }
       //4. output hasil
       printf("Matriks \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     printf(" %4.1f", matriks[i][j]);
              }
              printf("\n");
       }
       
}

void PerkailanMatriks(){
       int matriks1[10][10], matriks2[10][10], matriks3[10][10];
       int i, j, k; // counter for loop 
       int m1, n1; // ordo matriks 1
       int m2, n2; // ordo matriks 1


       //1. input matriks
       printf("Masukkan ordo matriks pertama \n");
       scanf("%d %d", &m1, &n1);

       printf("Masukkan elemen matriks 1 \n");
       for (i = 0; i < m1; i++){
              for (j = 0; j < n1; j++){
                     scanf("%d", &matriks1[i][j]);
              }
       }

       printf("Masukkan ordo matriks kedua \n");
       scanf("%d %d", &m2, &n2);

       if(n1 == m2){
              //2. input pengali
              printf("Masukkan elemen matriks 2 \n");
              for (i = 0; i < m2; i++){
                     for (j = 0; j < n2; j++){
                            scanf("%d", &matriks2[i][j]);
                     }
              }

              //3. tampilkan kedua matriks
              printf("Matriks 1 \n");
              for (i = 0; i < m1; i++){
                     for (j = 0; j < n1; j++){
                            printf(" %d", matriks1[i][j]);
                     }
                     printf("\n");
              }

              printf("Matriks 2 \n");
              for (i = 0; i < m2; i++){
                     for (j = 0; j < n2; j++){
                            printf(" %d", matriks2[i][j]);
                     }
                     printf("\n");
              }
              //4. output hasil
              printf("\nMatriks hasil perkalian\n");
              for (i=0;i<m1;i++){
                     for (j=0;j<n2;j++){              
                     matriks3[i][j] = 0;
                            for (k=0;k<m2;k++){
                                   matriks3[i][j] += matriks1[i][k] * matriks2[k][j];
                            }
                            printf("%d", matriks3[i][j]);            
                            if (j == (n2-1)) printf("\n");
                            else printf(" ");
                     }
              }
       }
       else{
              printf("Absis matriks kedua harus sama dengan ordinat matriks pertama");
       }
       
}

void PenjumlahanMatriks(){
       int matriks1[10][10], matriks2[10][10];
       int i, j; // counter for loop 
       int m, n; // ordo matriks 

       //1. input matriks
       printf("Masukkan ordo matriks yang akan dijumlahkan \n");
       scanf("%d %d", &m, &n);

       printf("Masukkan elemen matriks 1 \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     scanf("%d", &matriks1[i][j]);
              }
       }

       printf("Masukkan elemen matriks 2 \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     scanf("%d", &matriks2[i][j]);
              }
       }

       //2. tampilkan matriks 1 dan matriks 2
       printf("Matriks 1 \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     printf(" %d", matriks1[i][j]);
              }
              printf("\n");
       }

       printf("Matriks 2 \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     printf(" %d", matriks2[i][j]);
              }
              printf("\n");
       }

       //3. penjumlahan kedua matriks
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     matriks1[i][j] += matriks2[i][j];
              }
       }

       //4. output
       printf("Hasil penjumlahan matriks ordo %d x %d \n", m, n);
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     printf(" %3d", matriks1[i][j]);
              }
              printf("\n");
       }
       
              
}

void Transpose(){
       int matriks[10][10];
       int i, j; // counter for loop 
       int m, n; // ordo matriks

       //1. input matriks
       printf("Masukkan ordo matriks \n");
       scanf("%d %d", &m, &n);
       printf("Masukkan elemen matriks \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     scanf("%d", &matriks[i][j]);
              }
       }

       printf("Matriks \n");
       for (i = 0; i < m; i++){
              for (j = 0; j < n; j++){
                     printf(" %d", matriks[i][j]);
              }
              printf("\n");
       }

       //2. output hasil
       printf("Transpose matriks \n");
       for (j = 0; j < n; j++){
              for (i = 0; i < m; i++){
                     printf(" %d", matriks[i][j]);
              }
              printf("\n");
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
		
		if(!isdigit(x[i])){
			valid = 0;
			break;
		}
	}
	return valid;
}

float konversi(char* x){
	float y;
	
	y = atof(x);
	
	return y;
}

int validasi_menu(char* x){
	int len = strlen(x);
	int valid = 1;
	int i;
	
	for(i=0; i<len; i++){
		if(!isdigit(x[i])){
			valid = 0;
			break;
		}	
	}
	return valid;
}

// validasi dalem for
// ganti for pakek while
// buat funsi khusus input matrik