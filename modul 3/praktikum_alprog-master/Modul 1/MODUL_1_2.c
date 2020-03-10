#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define PI 3.14 //nilai phi

float LuasPersegiPanjang(float a, float b); // a = panjang, b = lebar
float LuasSegitigaSembarang(float a, float b, float c); // a = sisi segitiga, b = sisi segitiga, c = sisi segitiga
float LuasLingkaran(float r); // r = jari-jari
float LuasTrapesium(float a, float b, float t); // a = sisi atas, b = sisi bawah, t = tinggi trapesium
float LuasJajargenjang(float a, float b, float t); // a = alas, b = sisi miring, t = tinggi

float KllPersegiPanjang(float a, float b); // a = sisi datar, b = sisi tegak
float KllSegitigaSembarang(float a, float b, float c); // a = sisi segitiga, b = sisi segitiga, c = sisi segitiga
float KllLingkaran(float r); // r = jari-jari
float KllTrapesium(float a, float b, float t); // a = sisi atas, b = sisi bawah, t = tinggi trapesium
float KllJajargenjang(float a, float b, float t); // a = alas, b = sisi miring, t = tinggi

int validasi(char* x);
int validasi_menu(char* x);
float konversi(char* x);

void PersegiPanjang();
void SegitigaSembarang();
void Lingkaran();
void Trapesium();
void Jajargenjang();

void menu();

int main(){
	menu();
	return 0;
}

void menu(){
	float r, x, y, z;
	int pilihan;
	char input[10];
	char ulang;
	
	start:
		system("cls");
		printf("\n\n\t===========================================");
    	printf("\n\t\tMenghitung Luas dan Keliling");
    	printf("\n\t===========================================");
   		printf("\n\t\t1. Persegi Panjang");
    	printf("\n\t\t2. Segitiga Sembarang");
    	printf("\n\t\t3. Lingkaran");
    	printf("\n\t\t4. Trapesium");
    	printf("\n\t\t5. Jajargenjang");
    	printf("\n\t\t6. Keluar");
    	printf("\n\t===========================================");
    	printf("\n\n\n\tMasukkan pilihan anda	: "); 
		scanf("%s", &input);
		system("cls");
	
		if(validasi_menu(input) == 1){
			pilihan = atoi(input);
		}else{
			printf("\n\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
			system("pause");
			goto start;
		}
		
		switch(pilihan){
			case 1:
				PersegiPanjang();
				break;
			case 2:
				SegitigaSembarang();
				break;
			case 3:
				Lingkaran();
				break;
			case 4:
				Trapesium();
				break;
			case 5:
				Jajargenjang();
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("\n\n\tPILIHAN TIDAK TERSEDIA, SILAKAN ULANGI!!\n");
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
			printf("\n\tINPUTAN TIDAK SESUAI! SILAKAN INPUT DENGAN BENAR!\n");
		}	
	}while(ulang != 't' || ulang != 'T');
}

void PersegiPanjang(){
	char input1[10], input2[10];
	float x,y;
	
	hitung:
	system("cls");
	printf("\n\t\t     PERSEGI PANJANG");
	printf("\n\t============================================\n");
	
	//panjang
	printf("\n\tMasukkan panjang		: ");
	scanf("%s", &input1);
	
	if(validasi(input1) == 1){
		x = konversi(input1);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	//lebar
	printf("\tMasukkan lebar			: ");
	scanf("%s", &input2);
	
	if(validasi(input2) == 1){
		y = konversi(input2);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	printf("\n\tLuas persegi panjang		: %.2f", LuasPersegiPanjang(x, y));
    printf("\n\tKeliling persegi panjang	: %.2f", KllPersegiPanjang(x, y));
    printf("\n\n\t============================================\n");
    system("pause");
}

void SegitigaSembarang(){
	char input1[10], input2[10], input3[10];
	float x, y, z;
	
	
	hitung:
	system("cls");
	printf("\n\t\t     SEGITIGA SEMBARANG");
	printf("\n\t============================================\n");
	
	//sisi A
	printf("\n\tMasukkan panjang sisi A		: ");
	scanf("%s", &input1);
	
	if(validasi(input1) == 1){
		x = konversi(input1);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	//sisi B
	printf("\tMasukkan panjang sisi B		: ");
	scanf("%s", &input2);
	
	if(validasi(input2) == 1){
		y = konversi(input2);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	//sisi C
	printf("\tMasukkan panjang sisi C		: ");
	scanf("%s", &input3);
	
	if(validasi(input3) == 1){
		z = konversi(input3);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	printf("\n\tLuas segitiga sembarang		: %.2f", LuasSegitigaSembarang(x, y, z));
    printf("\n\tKeliling Segitiga Sembarang	: %.2f", KllSegitigaSembarang(x, y, z));
    printf("\n\n\t============================================\n");
    system("pause");
}

void Lingkaran(){
	char input1[10];
	float r;
	
	hitung:
	system("cls");
	printf("\n\t\t\tLINGKARAN");
	printf("\n\t============================================\n");
	
	//jari-jari
	printf("\n\tMasukkan jari-jari	: ");
	scanf("%s", &input1);
	
	if(validasi(input1) == 1){
		r = konversi(input1);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	printf("\n\tLuas lingkaran		: %.2f", LuasLingkaran(r));
    printf("\n\tKeliling lingkaran	: %.2f", KllLingkaran(r));
    printf("\n\n\t============================================\n");
	system("pause");
}

void Trapesium(){
	char input1[10], input2[10], input3[10];
	float x, y, z;
	
	hitung:
	system("cls");
	printf("\n\t\t\tTRAPESIUM");
	printf("\n\t============================================\n");
	
	//sisi atas
	printf("\n\tMasukkan sisi atas	: ");
	scanf("%s", &input1);
	
	if(validasi(input1) == 1){
		x = konversi(input1);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	//sisi bawah
	printf("\tMasukkan sisi bawah	: ");
	scanf("%s", &input2);
	
	if(validasi(input2) == 1){
		y = konversi(input2);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	//tinggi 
	printf("\tMasukkan tinggi		: ");
	scanf("%s", &input3);
	
	if(validasi(input3) == 1){
		z = konversi(input3);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	printf("\n\tLuas trapesium		: %.2f", LuasTrapesium(x,y,z));
    printf("\n\tKeliling trapesium	: %.2f", KllTrapesium(x,y,z));
    printf("\n\n\t============================================\n");
    system("pause");
}

void Jajargenjang(){
	char input1[10], input2[10], input3[10];
	float x, y, z;
	
	hitung:
	system("cls");
	printf("\n\t\t       JAJAR GENJANG");
	printf("\n\t============================================\n");
	
	//sisi alas
	printf("\n\tMasukkan panjang sisi alas	: ");
	scanf("%s", &input1);
	
	if(validasi(input1) == 1){
		x = konversi(input1);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	//sisi miring
	printf("\tMasukkan panjang sisi miring	: ");
	scanf("%s", &input2);
	
	if(validasi(input2) == 1){
		y = konversi(input2);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	//tinggi
	printf("\tMasukkan tinggi			: ");
	scanf("%s", &input3);
	
	if(validasi(input3) == 1){
		z = konversi(input3);
	}else{
		printf("\n\tINPUTAN MENGANDUNG KARAKTER YANG TIDAK VALID! \n\tSILAKAN INPUT DENGAN BENAR! \n");
		system("pause");
		goto hitung;
	}
	
	printf("\n\tLuas jajargenjang		: %.2f", LuasJajargenjang(x,y,z));
    printf("\n\tKeliling jajargenjang		: %.2f", KllJajargenjang(x,y,z));
    printf("\n\n\t============================================\n");
    system("pause");
}

float LuasPersegiPanjang(float a, float b){ // a = panjang, b = lebar
       return(a*b); // (a*b) adalah rumus luas persegi panjang
}

float KllPersegiPanjang(float a, float b){ // a = sisi datar, b = sisi tegak
       return(2*(a+b)); //(2*(a+b)) adalah rumus kll persegi panjang
}

float LuasSegitigaSembarang(float a, float b, float c){ // a = sisi segitiga, b = sisi segitiga, c = sisi segitiga
      float l, s;
       /*
       l = luas
       s = 0.5 * keliling
       */
       
       s = 0.5 * (a+b+c);
       l = sqrt(s*(s-a)*(s-b)*(s-c));
       return l;
}

float KllSegitigaSembarang(float a, float b, float c){ // a = sisi segitiga, b = sisi segitiga, c = sisi segitiga
       return(a+b+c);
}

float LuasLingkaran(float r){ // r = jari-jari
       return(PI*r*r);
}

float KllLingkaran(float r){ // r = jari-jari
       return(2*PI*r);
}

float LuasTrapesium(float a, float b, float t){ // a = sisi atas, b = sisi bawah, t = tinggi trapesium
       return((a+b)*t / 2);
}

float KllTrapesium(float a, float b, float t){ // a = sisi atas, b = sisi bawah, t = tinggi trapesium
       float k; //keliling
       float x,z;

       /*
                a
           ___________
          /|          \
       z / |t          \
        /__|____________\
         x   
                b
       */

       x = (b - a)/2;
       z = sqrt(x*x + t*t); //mencari nilai sisi miring
       k = a + b + ( 2*z );
    
       return k;
}

float LuasJajargenjang(float a, float b, float t){ // a = alas, b = sisi miring, t = tinggi
       return(a*t);
}

float KllJajargenjang(float a, float b, float t){
        /*
          _____________
         /############/   |
        /############/ b  | t
       /____________/   __|
              a
       
       */
       
       return(2*(a+b));
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
