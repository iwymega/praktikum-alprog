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

void HitungVolumeBola(float r)	;
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

void HitungLuasBola(float r)	;
/*
	r = jari-jari
*/

void HitungLuasLimas(float s, float t);
/*
	Limas segitiga sama sisi
	s = sisi alas segitiga
	t = tinggi
*/

void HitungLuasPrisma(float s, float t);
/*
	Prisma segitiga sama sisi
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
int validasi_menu(char* x);
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
	
	start:
		system("cls");
		printf("\n\n\t============================================");
		printf("\n\t    Menghitung Volume dan Luas Permukaan");
		printf("\n\t============================================");
		printf("\n\t\t1. Balok");
		printf("\n\t\t2. Bola");
		printf("\n\t\t3. Limas segitiga sama sisi");
		printf("\n\t\t4. Prisma segitiga sama sisi");
		printf("\n\t\t5. Tabung");
		printf("\n\t\t6. Keluar");
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
				Balok();
				break;
			case 2:
				Bola();
				break;
			case 3:
				Limas();
				break;
			case 4:
				Prisma();
				break;
			case 5:
				Tabung();
				break;
			case 6:
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

void Balok(){
	char input[10];
	float p, l, t;
	
	hitung:
	system("cls");
	printf("\n\n\t\t\tBALOK");
	printf("\n\t============================================\n");
	
	//panjang
	printf("\n\tMasukkan panjang	: ");
	scanf("%s", &input);
	
	if(validasi(input) == 1){
		p = konversi(input);
	}else{
		printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID!! \n\tSILAKAN INPUT DENGAN BENAR!!\n\n");
		system("pause");
		goto hitung;
	}
	
	//lebar
	printf("\tMasukkan lebar		: ");
	scanf("%s", &input);
	
	if(validasi(input) == 1){
		l = konversi(input);
	}else{
		printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID!! \n\tSILAKAN INPUT DENGAN BENAR!\n\n");
		system("pause");
		goto hitung;
	}
	
	//tinggi 
	printf("\tMasukkan tinggi		: ");
	scanf("%s", &input);
	
	if(validasi(input) == 1){
		t = konversi(input);
	}else{
		printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID!! \n\tSILAKAN INPUT DENGAN BENAR!\n\n");
		system("pause");
		goto hitung;
	}
	
	HitungVolumeBalok(p, l ,t);
	HitungLuasBalok(p, l, t);
	printf("\n\n\t============================================\n");
	system("pause");
}

void Bola(){
	char input[10];
	float r;
	
	hitung:
	system("cls");
	printf("\n\n\t\t\tBOLA");
	printf("\n\t============================================\n");
	
	//jari-jari
	printf("\n\tMasukkan jari-jari	: ");
	scanf("%s", &input);
	
	if(validasi(input) == 1){
		r = konversi(input);
	}else{
		printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID!! \n\tSILAKAN INPUT DENGAN BENAR!\n\n");
		system("pause");
		goto hitung;
	}
	
	HitungVolumeBola(r);
	HitungLuasBola(r);
	printf("\n\n\t============================================\n");
	system("pause");
}

void Limas(){
	char input[10];
	float s, ls, t;
	
	hitung:
	system("cls");
	printf("\n\n\t\t\tLIMAS");
	printf("\n\t============================================\n");
	
	//alas
	printf("\n\tMasukkan alas		: ");
	scanf("%s", &input);
	
	if(validasi(input) == 1){
		s = konversi(input);
	}else{
		printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID!! \n\tSILAKAN INPUT DENGAN BENAR!\n\n");
		system("pause");
		goto hitung;
	}
	
	
	//tinggi
	printf("\tMasukkan tinggi		: ");
	scanf("%s", &input);
	
	if(validasi(input) == 1){
		t = konversi(input);
	}else{
		printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID!! \n\tSILAKAN INPUT DENGAN BENAR!\n\n");
		system("pause");
		goto hitung;
	}
	
	HitungVolumeLimas(s, t);
	HitungLuasLimas(s, t);
	printf("\n\n\t============================================\n");
	system("pause");
}

void Prisma(){
	char input[10];
	float s, t;
	
	hitung:
	system("cls");
	printf("\n\n\t\t\tPRISMA");
	printf("\n\t============================================\n");
	
	//sisi alas
	printf("\n\tMasukkan sisi alas	: ");
	scanf("%s", &input);
	
	if(validasi(input) == 1){
		s = konversi(input);
	}else{
		printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID!! \n\tSILAKAN INPUT DENGAN BENAR!\n\n");
		system("pause");
		goto hitung;
	}
	
	//tinggi
	printf("\tMasukkan tinggi		: ");
	scanf("%s", &input);
	
	if(validasi(input) == 1){
		t = konversi(input);
	}else{
		printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID!! \n\tSILAKAN INPUT DENGAN BENAR!\n\n");
		system("pause");
		goto hitung;
	}
	
	HitungVolumePrisma(s, t);
	HitungLuasPrisma(s,t);
	printf("\n\n\t============================================\n");
	system("pause");
}

void Tabung(){
	char input[10];
	float r, t;
	
	hitung:
	system("cls");
	printf("\n\n\t\t\tTABUNG");
	printf("\n\t============================================\n");
	
	//jari-jari
	printf("\n\tMasukkan jari-jari	: ");
	scanf("%s", &input);
	
	if(validasi(input) == 1){
		r = konversi(input);
	}else{
		printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID!! \n\tSILAKAN INPUT DENGAN BENAR!\n\n");
		system("pause");
		goto hitung;
	}
	
	//tinggi
	printf("\tMasukkan tinggi		: ");
	scanf("%s", &input);
	
	if(validasi(input) == 1){
		t = konversi(input);
	}else{
		printf("\n\tINPUTAN ANDA MENGANDUNG KARAKTER YANG TIDAK VALID!! \n\tSILAKAN INPUT DENGAN BENAR!\n\n");
		system("pause");
		goto hitung;
	}
	
	HitungVolumeTabung(r, t);
	HitungLuasTabung(r, t);
	printf("\n\n\t============================================\n");
	system("pause");
}

void HitungVolumeBalok(float p, float l, float t){
	float volume;
	
	volume = p*l*t;
	printf("\n\tVolume balok		: %.2f", volume);
}

void HitungLuasBalok(float p, float l, float t){
	float lp;
	
	lp = 2*((p*l) + (l*t) + (p*t));
	printf("\n\tLuas permukaan balok	: %.2f", lp);
}

void HitungVolumeBola(float r){
	float volume;
	
	volume = (4/3)*PI*r*r*r;
	printf("\n\tVolume bola		: %.2f", volume);
}

void HitungLuasBola(float r){
	float lp;
	
	lp = 4*PI*r*r;
	printf("\n\tLuas permukaan bola	: %.2f", lp);
}

void HitungVolumeLimas(float s, float t){
	float volume, la, n;
	
	n = (3*s)/2;
	la = sqrt(n*(n-s)*(n-s)*(n-s));
	volume = (0.33)*la*t;
	printf("\n\tVolume limas		: %.2f", volume);
}

void HitungLuasLimas(float s, float t){
	float lp, la, n;
	
	n = (3*s)/2;
	la = sqrt(n*(n-s)*(n-s)*(n-s));
	lp = la + (3*s*t*0.5);
	printf("\n\tLuas permukaan limas	: %.2f", lp);
}

void HitungVolumePrisma(float s, float t){
	float volume, la, n;
	
	n = (3*s)/2;
	la = sqrt(n*(n-s)*(n-s)*(n-s));
	volume = la*t;
	printf("\n\tVolume prisma		: %.2f", volume);
}

void HitungLuasPrisma(float s, float t){
	float lp, la, n;
	
	n = (3*s)/2;
	la = sqrt(n*(n-s)*(n-s)*(n-s));
	lp = (3*s*t) + (2*la);
	printf("\n\tLuas permukaan prisma	: %.2f", lp);
}

void HitungVolumeTabung(float r, float t){
	float la, volume;

	la = PI*r*r;
	volume = la*t;
	printf("\n\tVolume tabung		: %.2f", volume);
}

void HitungLuasTabung(float r, float t){
    float kll, la, lp;

    la = PI*r*r;
    kll = PI*2*r;
    lp = (2*la) + (kll*t);
    printf("\n\tLuas permukaan tabung	: %.2f", lp);
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
