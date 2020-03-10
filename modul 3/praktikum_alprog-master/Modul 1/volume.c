#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define PI 3.14


//Volume Bangun Ruang
void HitungVolumeBalok(float p, float l, float t);
/*
 p = panjang
 l = lebar
 t = tinggi
*/

void HitungVolumeBola(float r);
/*
 r = jari-jari
*/

void HitungVolumeLimas(float s, float t);
/*
 Limas segitiga sama sisi
 s = sisi alas segitiga
 t = tinggi
*/

void HitungVolumePrisma(float s, float t);
/*
 Prisma segitiga sama sisi
 s = sisi segitiga
 t = tinggi
*/

void HitungVolumeTabung(float r, float t);
/*
 r = jari-jari
 t = tinggi
*/


//Luas Permukaan Bangun Ruang

void HitungLuasBalok(float p, float l, float t);
/*
 p = panjang
 l = lebar
 t = tinggi
*/

void HitungLuasBola(float r);
/*
 r = jari=jari
*/

void HitungLuasLimas(float s, float ls);
/*
 Limas Segitiga Sama Sisi
 s  = sisi alas
 ls = luas sisi
*/

void HitungLuasPrisma(float s, float t);
/*
 s = sisi segitiga
 t = tinggi
*/

void HitungLuasTabung(float r, float t);
/*
 r = jari-jari
 t = tinggi
*/

void Balok();
void Bola();
void Limas();
void Prisma();
void Tabung();

void menu();
int validasi(char* x);
float konversi(char* x);


int main(){

       menu();
       return 0;
}

void menu(){
       float p, l, t, s, ls, r;
	char input[10];
       int pilihan;
       char ulang;
       
       do{
              system("cls");
              printf("\n\n\t\t  MENU");
              printf("\n\n\tMenghitung Volume dan Luas Permukaan");
              printf("\n\n\t1. Balok");
              printf("\n\t2. Bola");
              printf("\n\t3. Limas segitiga sama sisi");
              printf("\n\t4. Prisma segitiga sama sisi");
              printf("\n\t5. Tabung");
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
                            Balok();
                            break;
                     }
                     case 2:{
                            Bola();
                            break;
                     }
                     case 3:{
                            Limas();
                            break;
                     }
                     case 4:{
                            Prisma();
                            break;
                     }
                     case 5:{
                            Tabung();
                            break;
                     }
              }
		end:
              printf("\n\n\tUlangi (y/t)? ");
              scanf("%s", &ulang);
       }while(ulang == 'y' || ulang == 'Y');
}

void Balok(){
       char input[10];
       float p,l,t;
       //panjang
       printf("\n\tMasukkan panjang  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	p = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
       //lebar
       printf("\n\tMasukkan lebar  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	l = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
       //tinggi
       printf("\n\tMasukkan tinggi  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	t = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
       
       HitungVolumeBalok(p, l, t);
       HitungLuasBalok(p, l, t);
}

void Bola(){
       char input[10];
       float r;
       printf("\n\tMasukkan jari jari  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	r = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}

       HitungVolumeBola(r);
       HitungLuasBola(r);

       end:;
}

void Limas(){
       char input[10];
       float s, ls, t;

       //alas
       printf("\n\tMasukkan alas  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	s = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
       //luas sisi
       printf("\n\tMasukkan luas sisi  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	ls = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
       //tinggi
       printf("\n\tMasukkan tinggi  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	t = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}  

       HitungVolumeLimas(s, t);
       HitungLuasLimas(s, ls);   
}

void Prisma(){
       char input[10];
       float s, t;

       //sisi alas
       printf("\n\tMasukkan sisi alas  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	s = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
       //tinggi
       printf("\n\tMasukkan tinggi  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	t = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}

       HitungVolumePrisma(s, t);
       HitungLuasPrisma(s, t);

       end:;      
}

void Tabung(){
       char input[10];
       float r, t;

       //jari-jari
       printf("\n\tMasukkan jari-jari  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	r = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}
       //tinggi
       printf("\n\tMasukkan tinggi  : "); scanf("%s", &input);
      	if(validasi(input) == 1){
           	t = konversi(input);
      	}
     	else{
		printf("Inputan anda mengandung karakter yang tidak valid \n");
		return; // lompat ke akhir prosedur
      	}  

       HitungVolumeTabung(r, t);
       HitungLuasTabung(r, t);

       end:;    
}


void HitungVolumeBalok(float p, float l, float t){
       float volume;

       volume = p*l*t;
       printf("Volume balok adalah : %.2f \n", volume);
}

void HitungLuasBalok(float p, float l, float t){
       float lp;

       lp = 2*(p*l) + 2*(l*t) + 2*(p*t);
       printf("Luas permukaan balok adalah : %.2f \n", lp);
}

void HitungVolumeBola(float r){
       float volume;

       volume = (4/3)*PI*r*r*r;
       printf("Volume bola adalah : %.2f \n", volume);
}

void HitungLuasBola(float r){
       float lp;

       lp = 4*PI*r*r;
       printf("Luas permukaan bola adalah : %.2f \n", lp);
}

void HitungVolumeLimas(float s, float t){
       float volume, la, n;

       n = (3*s)/2;
       la = sqrt(n*(n-s)*(n-s)*(n-s));
       volume = (0.33)*la*t; // (1/3) = 0.33
       printf("Volume limas adalah : %.2f \n", volume);
}

void HitungLuasLimas(float s, float ls){
       float lp, la, n;

       n = (3*s)/2;
       la = sqrt(n*(n-s)*(n-s)*(n-s));
       lp = la + (3*ls);
       printf("Luas permukaan limas adalah : %.2f \n", lp);       
}

void HitungVolumePrisma(float s, float t){
       float volume, la, n;

       n = (3*s)/2;
       la = sqrt(n*(n-s)*(n-s)*(n-s));
       volume = la*t;
       printf("Volume prisma adalah : %.2f \n", volume);
}

void HitungLuasPrisma(float s, float t){
       float lp, la, n;

       n = (3*s)/2;
       la = sqrt(n*(n-s)*(n-s)*(n-s));
       lp = (3*s*t) + (2*la);
       printf("Luas permukaan prisma adalah : %.2f \n", lp);
}

void HitungVolumeTabung(float r, float t){
       float la, volume;

       la = PI*r*r;
       volume = la*t;
       printf("Volume tabung adalah : %.2f \n", volume);
}

void HitungLuasTabung(float r, float t){
       float kll, la, lp;

       la = PI*r*r;
       kll = PI*2*r;
       lp = (2*la) + (kll*t);
       printf("Luas permukaan tabung adalah : %.2f \n", lp);
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

