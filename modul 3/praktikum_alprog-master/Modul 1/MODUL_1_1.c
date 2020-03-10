#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float tambah(float a, float b);
float kurang(float a, float b);
float kali(float a, float b);
float bagi(float a, float b);
int mod(float a, float b);

int validasi(char* x); // validasi input dari user
int validasi_menu(char*x);
float konversi(char* x); // konversi dari string ke float 

void menu();

int main(){
	menu();
	return 0;
}

void menu(){
	char input[10];
	float x, y;
	int pilihan;
	char ulang;
	
	start:
		system("cls");
		printf("\n\n\t============================");
        printf("\n\t\t KALKULATOR");
        printf("\n\t============================");
        printf("\n\t      1. Penjumlahan");
        printf("\n\t      2. Pengurangan");
        printf("\n\t      3. Perkalian");
        printf("\n\t      4. Pembagian");
        printf("\n\t      5. Sisa hasil bagi");
        printf("\n\t      6. Keluar");
        printf("\n\t============================");
        printf("\n\n\tMasukkan pilihan anda : "); 
		scanf("%s", &input);
		
		if(validasi_menu(input) == 1){
			pilihan = atoi(input);
		}else{
			printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID! SILAKAN INPUT DENGAN BENAR! \n");
			system("pause");
			goto start;
		} 
		
		if(pilihan == 6){
			exit(0);
		}
		
		if(pilihan < 1 || pilihan > 5){
			printf("\n\tPILIHAN TIDAK TERSEDIA, SILAKAN INPUT DENGAN BENAR!\n");
			system("pause");
			goto start;
		}
		
		printf("\n\tMasukkan bilangan pertama	: "); 
		scanf("%s", &input);
		
		if(validasi(input) == 1){
			x=konversi(input);
		}else{
			printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID! SILAKAN INPUT DENGAN BENAR! \n");	
			goto loop;
		}
		
		printf("\tMasukkan bilangan kedua		: "); 
		scanf("%s", &input);
		
		if(validasi(input) == 1){
			y=konversi(input);
		}else{
			printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID! SILAKAN INPUT DENGAN BENAR! \n");	
			goto loop;
		}
		
		switch(pilihan){
			case 1:
				printf("\tHasil penjumlahan  		: %.2f\n\n", tambah(x, y));
                system("pause");
                break;
            case 2:
            	printf("\tHasil pengurangan  		: %.2f\n\n", kurang(x, y));
                system("pause");
                break;
			case 3:
				printf("\tHasil perkalian  			: %.2f\n\n", kali(x, y));
                system("pause");
                break;
            case 4:
            	printf("\tHasil pembagian	 		: %.2f\n\n", bagi(x, y));
                system("pause");
                break;
            case 5:
            	printf("\tSisa hasil bagi  		: %d\n\n", mod(x, y));
                system("pause");
                break;
		}
		
	loop:
		do{
			printf("\n\n\tUlangi (y/t) ? ");
			scanf("%s", &ulang);
			
			if(ulang == 'y' || ulang == 'Y'){
				goto start;
			}else if(ulang == 't' || ulang == 'T'){
				exit(0);
			}else{
				printf("\n\tINPUTAN TIDAK SESUAI! SILAKAN INPUT DENGAN BENAR!\n");
			}	
		}while(ulang != 't' || ulang != 'T');
}

float tambah(float a, float b){
       return(a+b); //penjumlahan
}

float kurang(float a, float b){
       return(a-b); //pengurangan
}

float kali(float a, float b){
       return(a*b); //perkalian
}

float bagi(float a, float b){
       return(a/b); //pembagian
}

int mod(float a, float b){
       int x, y; //sisa hasil bagi
 
       x = (int) a;
       y = (int) b; //type casting
 
       return(x%y);
}

int validasi(char* x){
    int len = strlen(x);
    int valid = 1;
	int i;
	   
    for(i = 0; i<len; i++){
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
float konversi(char* x){
       float y;

       y = atof(x);

       return y;
}
