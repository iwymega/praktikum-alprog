#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int validasi();
int validasipil();
void clear_buffer();
void iteratif(int n, char x, char y, char z);
void rekursif(int n, char x, char y, char z);
void menu();
void keluar();
void delay(int number_of_seconds);

int langkah;

int main(){
	printf("\n");
	printf("\t\t\t===========================================================\n");
	printf("\t\t\t|						 	  |\n");
	printf("\t\t\t|	PROGRAM LANGKAH - LANGKAH PERMAINAN HANOI 	  |\n");
	printf("\t\t\t|							  |\n");
	printf("\t\t\t===========================================================\n");
	printf("\n");
    menu();
    int pil;
    pilihan:
    printf("\n\t=============================== \n");
			printf("\t1. Hitung lagi \n");
			printf("\t2. Keluar\n");
			printf("\tPilih :");
			pil = validasipil();
			system("cls");
			if(pil == 1){
				main();	
			}
			else if(pil == 2){
				keluar();
			}
			else{
				goto pilihan;	
			}
			
				
	
    return 0;
}
void keluar(){
	keluar:
	printf("\t\t\t===================================================================\n\n\n");
	printf("\t\t\t\t\t\t  T E R I M A K A S I H  \n\n\n");
	printf("\t\t\t===================================================================\n");
}
void menu(){
    
	printf("\t\t\tMasukan jumlah cakram = ");
	langkah = validasi();
	
	printf("\n\t\tMenara Hanoi Rekursif\n");
    rekursif(langkah, '1', '2', '3');
	printf("\n\t\tMenara Hanoi Iteratif\n");
    iteratif(langkah, '1', '2', '3');
}
void iteratif(int n, char x, char y, char z){
	int i, iteratif = pow(2, n)-1;
    char str[4];
    str[0]=x;
	str[1]=y;
	str[2]=z;
    if (n%2==0){
		str[1] = z;
		str[2] = y;
	}
	for(i = 1; i <= iteratif; i++){
		printf("\t\t\tPindahkan CAKRAM teratas dari %c ke %c\n", str[(i&i-1)%3], str[((i|i-1)+1)%3]);
		
		delay(1);
		
	}
	printf("\n\t\t===========================================================\n");
	printf("\t\tLangkah minimum yang didapatkan dari %d CAKRAM adalah %d\n", n, iteratif);
	printf("\t\t===========================================================\n");
}

void rekursif(int n, char x, char y, char z){
    if(n == 1){
    	
        printf("\t\t\tPindahkan CAKRAM 1 dari %c ke %c\n", x, z);
    	delay(1);    
        return;
	}
    
    rekursif(n-1,x,z,y);
    printf("\t\t\tPindahkan CAKRAM %d dari %c ke %c\n", n, x, z);
    rekursif(n-1,y,x,z);
    delay(1);  
}

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 200 * number_of_seconds; 
  
    // Stroing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not acheived 
    while (clock() < start_time + milli_seconds) 
        ; 
}

int validasipil(){
	int num;
    char chara;
    if (scanf("%d%c",&num,&chara)!= 2  || chara != '\n' || chara == ','|| chara == '.'){
		clear_buffer();
        
        printf("Input anda salah! Silahkan Periksa Kembali : \t\t");
        return validasi();
    }
    else {
        return num;
    }
}

int validasi(){
	int num;
    char chara;
    if (scanf("%d%c",&num,&chara)!= 2  || chara != '\n' || chara == ','|| chara == '.'){
		clear_buffer();
        
        printf("Input anda salah! Silahkan Periksa Kembali : \t\t");
        return validasi();
    }
    else if(num<2){
    	printf("Minimum jumlah CAKRAM adalah 2, silahkan input ulang : \t\t");
        return validasi();
	}
    else {
        return num;
    }
}

void clear_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) ;
}
