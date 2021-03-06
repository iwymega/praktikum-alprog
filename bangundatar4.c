#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//a.	Segitiga sembarang
//b.	Belah Ketupat 
//c.	Jajargenjang
//d.	Trapesium 
//e.	Lingkaran 

//deklarasi prosedur
void hitungsegitiga();
void hitungbelahketupat();
void hitungjajargenjang();
void hitungtrapesium();
void hitunglingkaran();
void clear_buffer();
double validasi();

//deklarasi variabel global
	int menu, d1, d2, alas, tinggi, sisi1, sisi2, sisi3, pil, sejajaralas;
	double semesta, luas,  keliling, kalisemesta, sisi, jari_jari, phi=3.14, sisiluar, alas_siku_siku, alas_disamping_siku_siku, sisi_miring;
	char opsi;

int main(){
	menu:
	printf("\n");
	printf("\t\t\t===========================================================\n");
	printf("\t\t\t|						 	  |\n");
	printf("\t\t\t|		PROGRAM PENGHITUNG BANGUN DATAR 	  |\n");
	printf("\t\t\t|							  |\n");
	printf("\t\t\t===========================================================\n");
	printf("\t\t\t| PROGRAM INI MERUPAKAN PROGRAM UNTUK MENGHITUNG KELILING |\n");
	printf("\t\t\t|		DAN LUAS DARI BANGUN DATAR BERIKUT 	  |\n");
	printf("\t\t\t| SILAHKAN PILIH NOMOR  BERIKUT UNTUK MENGHITUNGNYA 	  |\n");
	printf("\t\t\t|							  |\n");
	printf("\t\t\t===========================================================\n");

	
	printf("\t\t\tPilih salah satu menu untuk menghitung keliling dan luas bangn datar berikut :\n");
	printf("\t\t\t1. Segitiga sembarang\n");
	printf("\t\t\t2. Belah Ketupat\n");
	printf("\t\t\t3. Jajargenjang\n");
	printf("\t\t\t4. Trapesium\n");
	printf("\t\t\t5. Lingkaran\n");
	printf("\t\t\t6. Keluar\n");
	printf("\t\t\tSilahkan masukkan disini : ");
		menu=validasi();
		system("cls");
		
	switch(menu){
		case 1:
			segitiga:
			printf("\n");
			printf("\t\t\t===========================================================\n");
			printf("\t\t\t\t\tPerhitungan Seitiga Sembarang\n");
			printf("\t\t\t\t\tinput 3 sisi segitiga\n\n");
			printf("\t\t\tsisi 1 = ");
			sisi1=validasi();
			printf("\n\t\t\tsisi 2 = ");
			sisi2=validasi();
			printf("\n\t\t\tsisi 3 = ");
			sisi3=validasi();
			hitungsegitiga();
			getch();
			printf("\t=============================== \n");
			printf("\t1. Kembali Ke Menu Utama \n");
			printf("\t2. Hitung lagi \n");
			printf("\t3. Keluar\n");
			printf("\tPilih :");
			pil=validasi();
			system("cls");
			if(pil == 1)
			goto menu;
			else if (pil ==2)
			goto segitiga;
			else
			exit;
			return(0);
		goto menu; 
		break;

		case 2:
			belahkrtupat:
			printf("\n");
			printf("\t\t\t===========================================================\n");
			printf("\t\t\t\t\tPerhitungan Belahkrtupat\n");
			printf("\t\t\t\t\tinput 2 diagonal dibawah \n\n");
			printf("\n\t\t\tdiagonal 1 = ");
			d1=validasi();
			printf("\n\t\t\tdiagonal 2 = ");
			d2=validasi();
				
			hitungbelahketupat();
			getch();
			
			printf("\n\t=============================== \n");
			printf("\t1. Kembali Ke Menu Utama \n");
			printf("\t2. Hitung lagi \n");
			printf("\t3. Keluar\n");
			printf("\tPilih :");
			pil=validasi();
			system("cls");
			if(pil == 1)
			goto menu;
			else if (pil ==2)
			goto belahkrtupat;
			else
			exit;
			return(0);
		goto menu; 
		break;

		case 3:
			jajargenjang:
			printf("\n");
			printf("\t\t\t===========================================================\n");
			printf("\n\t\t\t\t\tPerhitungan Jajargenjang \n\n");
			printf("\n\t\t\tMasukkan tinggi dari jajar genjang :");
			tinggi=validasi();
			printf("\t\t\tMasukkan alas siku-siku dari dari tinggi : ");
			alas_siku_siku=validasi();
			printf("\t\t\tMasukkan alas disamping alas siku-siku dari jajar genjang : ");
			alas_disamping_siku_siku=validasi();
			
			hitungjajargenjang();
			getch();
			
			printf("\n\t=============================== \n");
			printf("\t1. Kembali Ke Menu Utama \n");
			printf("\t2. Hitung lagi \n");
			printf("\t3. Keluar\n");
			printf("\tPilih :");
			pil=validasi();
			system("cls");
			if(pil == 1)
			goto menu;
			else if (pil ==2)
			goto jajargenjang;
			else
			exit;
			return(0);
		goto menu; break;

		case 4: 
			trapesium:
			printf("\n");
			printf("\t\t\t===========================================================\n");
			printf("\t\t\t\t\tPerhitungan Trapesium \n\n");
			printf("\t\t\tMasukkan\n\n");
			printf("\t\t\tAlas: ");
			alas=validasi();
			printf("\n\t\t\tSisi sejajar alas : ");
			sejajaralas=validasi();
			printf("\n\t\t\tTinggi : ");
			tinggi = validasi();
			hitungtrapesium();
			getch();
			printf("\n\t=============================== \n");
			printf("\t1. Kembali Ke Menu Utama \n");
			printf("\t2. Hitung lagi \n");
			printf("\t3. Keluar\n");
			printf("\tPilih :");
			pil=validasi();
			system("cls");
			if(pil == 1)
			goto menu;
			else if (pil ==2)
			goto trapesium;
			else
			exit;
			return(0);
		goto menu; break;

		case 5:
			lingkaran:
			printf("\n");
			printf("\t\t\t===========================================================\n");
			printf("\t\t\t\t\tPerhitungan lingkaran\n\n");
			printf("\t\t\tMasukkan jari-jari lingkaran : ");
			jari_jari = validasi();
			hitunglingkaran();
			getch();
			printf("\n\t=============================== \n");
			printf("\t1. Kembali Ke Menu Utama \n");
			printf("\t2. Hitung lagi \n");
			printf("\t3. Keluar\n");
			printf("\tPilih :");
			pil = validasi();
			system("cls");
			if(pil == 1)
			goto menu;
			else if (pil == 2)
			goto lingkaran;
			else
			exit;
			return(0);
		goto menu; break;

		case 6:
			goto keluar;
		break;

		default :
        printf("\t\tPilihan Tidak ada, silahkan input 1-5 !");
        getch();
        goto menu;
	}
	keluar:
	system("cls");
	printf("\t\t\t===================================================================\n\n\n");
	printf("\t\t\t  T E R I M A K A S I H  D A N  S E M O G A  B E R M A N F A A T\n\n\n");
	printf("\t\t\t===================================================================\n");

	return 0;
	
}

//////////           prosedur            ////////////
void hitungsegitiga(){
	sisi = sisi1 + sisi2 + sisi3;
	semesta = 0.5 * sisi;
	kalisemesta = semesta * ((semesta - sisi1) * (semesta - sisi2) * (semesta - sisi3));
	luas = sqrt(kalisemesta);
	keliling = sisi1 + sisi2 + sisi3;
	printf("\n\n\tLuas segitiga sembarang dari sisi 1 2 dan 3 adalah : %2.lf \n", luas );
	printf("\tKeliling segitiga sembarang dari sisi 1 2 dan 3 adalah : %2.lf \n", keliling);
}
void hitungbelahketupat(){
	luas = (d1 * d2)/2;
	sisiluar = sqrt(((0.5*d1)*(0.5*d1)) + ((0.5*d2)*(0.5*d2)));
	keliling = 4 * sisiluar;
	printf("\n\tLuas belah ketupat yang diketahui diagonalnya adalah : %2.lf", luas);
	printf("\n\tKeliling belah ketupat yang diketahui diagonalnya adalah : %2.lf", keliling);
}
void hitungjajargenjang(){
	alas = alas_disamping_siku_siku + alas_siku_siku;
	luas = alas * tinggi;
	sisiluar = sqrt((alas_siku_siku*alas_siku_siku) + (tinggi*tinggi));
	keliling = 2 * (sisiluar + alas);
	printf("\n\tLuas jajargenjang dari inputan di atas adalah : %4.lf", luas);
	printf("\n\tKeliling jajargenjang dari inputan di atas adalah : %4.lf", keliling);
}
void hitungtrapesium(){
	luas = (0.5 * (alas + sejajaralas)) * tinggi;
	alas_siku_siku = alas - sejajaralas;
	sisi_miring = sqrt((alas_siku_siku * alas_siku_siku) + (tinggi * tinggi));
	keliling = alas + tinggi + sejajaralas + sisi_miring;
	printf("\n\tLuas dari trapesium dengan inputan %d, %d, dan %d adalah     : %2.lf", alas,sejajaralas,tinggi,luas);
	printf("\n\tKeliling dari trapesium dengan inputan %d, %d, dan %d adalah : %2.lf", alas,sejajaralas,tinggi,keliling);
}
void hitunglingkaran(){
	luas = phi * jari_jari * jari_jari;
	keliling = 2 * phi * jari_jari;	
	printf("\n\tLuas lingkaran dengan jari-jari %2.lf adalah : %2.lf\n", jari_jari, luas);
	printf("\n\tKeliling lingkaran dengan jari-jari %2.lf adalah : %2.lf\n", jari_jari, keliling); 
}
/*
///////////      validasi        ////////////
void reInputVldInt(int *var, char *prompt, char *msg){
    while(1){
        printf(prompt);
        if(isValidInt(var))
            break;
        printf(msg);
    }
}

void reInputVldFlt(float *var, char *prompt, char *msg){
    while(1){
        printf(prompt);
        if(isValidFlt(var))
            break;
        printf(msg);
    }
}
*/

double validasi(){
    double num;
    char chara;
    if (scanf("%lf%c",&num,&chara)!= 2  || chara != '\n' || chara == ','){
        clear_buffer();
        printf("Input anda salah! Silahkan Masukkan berupa angka : \t\t");
        return validasi();
    } else {
        return num;
    }
}

void clear_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) ;}
