#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
 * Desimal ke Binary
 
       13/2 = 6 sisa 1 -----> 1 * 10^0 =    1
       6/2  = 3 sisa 0 -----> 0 * 10^1 =   00
       3/2  = 1 sisa 1 -----> 1 * 10^2 =  100
       1/2  = 0 sisa 1 -----> 1 * 10^3 = 1000
                                        ------ +
                                         1101 (2)


 * Binary ke Desimal
       1101/10 = 110 sisa 1 -----> 1 * 2^0 = 1
       110/10  = 11  sisa 0 -----> 0 * 2^1 = 0
       11/10   = 1   sisa 1 -----> 1 * 2^2 = 4
       1/10    = 0   sisa 1 -----> 1 * 2^3 = 8
                                            --- +
                                             13 (10)

*/

long long int DesToBin(int x);
int BinToDes(int x);
int validasiDec(char* x);
int validasiBin(char* x);
int konversi(char *x);

void menu();
void Biner();
void Desimal();

int main(){
       menu();

       return 0;
}

void menu(){
       char menu; // pilih menu
       int bin; // input biner
       char ulang;

       start:
              system("cls");
              printf("1. Konversi Dari Desimal ke Biner \n");
              printf("2. Konversi dari Biner ke Desimal \n");
              printf("Pilih menu > "); scanf("%s", &menu);
              switch(menu){
                     case '1':{
                            Desimal();
                            break;
                     }
                     case '2':{
				Biner();
				break;
                     }
                     default:{
                           printf("Input anda salah!\n");
                     }
              }

              do{
			printf("Ulangi (y/t) > ");scanf("%s", &ulang);
			
			if(ulang == 'y' || ulang == 'Y'){
				goto start;
			}else if(ulang == 't' || ulang == 'T'){
				exit(0);
			}else{
				printf("Input anda salah!\n");
			}	
		}while(ulang != 't' || ulang != 'T');
}

void Biner(){
	char input[25];
	int bin;

	printf("Masukkan bilangan biner > "); scanf("%s", &input);
	if(validasiBin(input)==1){
		bin = konversi(input);
		printf("Hasil konversi adalah %d \n", BinToDes(bin));
	}
	else{
		printf("Input anda salah!\n");
	}
}

void Desimal(){
	char input[25];
	long long int des;

	printf("Masukkan bilangan desimal > "); scanf("%s", &input);
	if(validasiDec(input)==1){
		des = konversi(input);
		printf("Hasil konversi adalah %ld \n", DesToBin(des));
	}
	else{
		printf("Input anda salah!\n");
	}
}

long long int DesToBin(int x){
       int binary = 0;
       int sisa;
       int pangkat = 1;

       while(x > 0){
              sisa = x%2;
              x /= 2;
              binary = binary + (sisa*pangkat);
              pangkat *= 10;
       }

       return binary;
}

int BinToDes(int x){
       int binary = 0;
       int sisa;
       int pangkat = 1;

       while(x > 0){
              sisa = x%10;
              x /= 10;

              binary = binary + (sisa*pangkat);
              pangkat *= 2;
       }

       return binary;
}

int validasiDec(char* x){
       int len = strlen(x);
       int valid = 1;

       for(int i = 0; i<len; i++){
              if(!isdigit(x[i])){
                     valid = 0;
                     break;
              }
       }

       return valid;
}

int validasiBin(char* x){
       int len = strlen(x);
       int valid = 1;

       for(int i = 0; i<len; i++){
              if(!isdigit(x[i])){
                     valid = 0;
                     break;
              }
		else{
			if((int)(x[i]-'0') == 0 || (int)(x[i]-'0') == 1){
				valid = 1;
              	}
			else{
				valid = 0;
				break;
			}
		}
       }

       return valid;
}

int konversi(char *x){
       int y;

       y = atoi(x);

       return y;
}