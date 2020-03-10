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
float konversi(char* x);

void PersegiPanjang();
void SegitigaSembarang();
void Lingkaran();
void Trapesium();
void Jajargenjang();

void menu();

int main() {
       menu();
       return 0;
}

void menu(){
       float r, x, y, z;
       int pilihan;
	char input[10];
       char ulang;
       
       do{
              system("cls");
              printf("\n\n\t\t  MENU");
              printf("\n\n\tMenghitung Luas dan Keliling");
              printf("\n\n\t1. Persegi Panjang");
              printf("\n\t2. Segitiga Sembarang");
              printf("\n\t3. Lingkaran");
              printf("\n\t4. Trapesium");
              printf("\n\t5. Jajargenjang");
              printf("\n\n\tMasukkan pilihan anda : "); scanf("%s", &input);
		if(validasi(input) == 1){ // validasi input berupa bilangan
			pilihan = atoi(input);
		}
		else{
			printf("Inputan anda mengandung karakter yang tidak valid \n");
			goto end;
		}

		if(pilihan > 5){ // validasi input tidak melebihi menu
                     printf("Inputan anda melebihi menu yang tersedia \n");
                     goto loop;
              }
              
              switch(pilihan){
                     case 1:{
                            PersegiPanjang();
                            break;
                     }
                     case 2:{
                            SegitigaSembarang();
                            break;
                     }
                     case 3:{
                            Lingkaran();
                            break;
                     }
                     case 4:{
                            Trapesium();
                            break;
                     }
                     case 5:{
                            Jajargenjang();
                            break;
                     }
              }
		end:
              printf("\n\n\tUlangi (y/t)? ");
              scanf("%s", &ulang);
       }while(ulang == 'y' || ulang == 'Y');
}

void PersegiPanjang(){
      	char input1[10], input2[10];
      	float x,y;

	// panjang
      	printf("\n\tMasukkan panjang  : "); scanf("%s", &input1);
      	if(validasi(input1) == 1){
           	x = konversi(input1);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
	// lebar
	printf("\n\tMasukkan lebar    : "); scanf("%s", &input2);
      	if(validasi(input2) == 1){
           	y = konversi(input2);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
	printf("\n\tLuas persegi panjang  : %.2f", LuasPersegiPanjang(x, y));
       printf("\n\tKeliling persegi panjang : %.2f", KllPersegiPanjang(x, y));

	end:; //
}

void SegitigaSembarang(){
	char input1[10], input2[10], input3[10];
	float x,y,z;

	//Sisi A
	printf("\n\tMasukkan panjang sisi A  : "); scanf("%s", &input1);
      	if(validasi(input1) == 1){
           	x = konversi(input1);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}

	//Sisi B
	printf("\n\tMasukkan panjang sisi B  : "); scanf("%s", &input2);
      	if(validasi(input2) == 1){
           	y = konversi(input2);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}

	//Sisi C
	printf("\n\tMasukkan panjang sisi C  : "); scanf("%s", &input3);
      	if(validasi(input3) == 1){
           	z = konversi(input3);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
	
	printf("\n\tLuas segitiga sembarang  : %.2f", LuasSegitigaSembarang(x, y, z));
       printf("\n\tKeliling Segitiga Sembarang : %.2f", KllSegitigaSembarang(x, y, z));
	end:;
}

void Lingkaran(){
	char input1[10];
	float r;

	// jari-jari
      	printf("\n\tMasukkan jari-jari  : "); scanf("%s", &input1);
      	if(validasi(input1) == 1){
           	r = konversi(input1);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
	printf("\n\tLuas lingkaran  : %.2f", LuasLingkaran(r));
       printf("\n\tKeliling lingkaran : %.2f", KllLingkaran(r));
	end:;
}

void Trapesium(){
	char input1[10], input2[10], input3[10];
	float x,y,z;

	//Sisi atas
	printf("\n\tMasukkan panjang sisi atas  : "); scanf("%s", &input1);
      	if(validasi(input1) == 1){
           	x = konversi(input1);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}

	//Sisi bawah
	printf("\n\tMasukkan panjang sisi bawah  : "); scanf("%s", &input2);
      	if(validasi(input2) == 1){
           	y = konversi(input2);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}

	//Tinggi
	printf("\n\tMasukkan tinggi  : "); scanf("%s", &input3);
      	if(validasi(input3) == 1){
           	z = konversi(input3);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}

	printf("\n\tLuas trapesium  : %.2f", LuasTrapesium(x,y,z));
       printf("\n\tKeliling trapesium : %.2f", KllTrapesium(x,y,z));

	end:;
}

void Jajargenjang(){
	char input1[10], input2[10], input3[10];
	float x,y,z;

	//Sisi alas
	printf("\n\tMasukkan panjang sisi alas  : "); scanf("%s", &input1);
      	if(validasi(input1) == 1){
           	x = konversi(input1);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}

	//Sisi miring
	printf("\n\tMasukkan panjang sisi miring  : "); scanf("%s", &input2);
      	if(validasi(input2) == 1){
           	y = konversi(input2);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}

	//Tinggi
	printf("\n\tMasukkan tinggi  : "); scanf("%s", &input3);
      	if(validasi(input3) == 1){
           	z = konversi(input3);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}

	printf("\n\tLuas jajargenjang : %.2f", LuasJajargenjang(x,y,z));
       printf("\n\tKeliling jajargenjang : %.2f", KllJajargenjang(x,y,z));

	end:;	
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

int validasi(char* x){
      int len = strlen(x);
      int valid = 1;

     	for(int i = 0; i<len; i++){
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
