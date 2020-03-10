#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//a.	Segitiga sembarang
//b.	Belah Ketupat 
//c.	Jajargenjang
//d.	Trapesium 
//e.	Lingkaran 
int main(){
	//deklarasi variabel
	int menu, d1, d2, alas, tinggi, sisi1, sisi2, sisi3, pil;
	double semesta, luas,  keliling, kalisemesta, sisi, sejajaralas, jari_jari, phi=3.14;
	char opsi;

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

	
	printf("\t\t\tPilih salah satu untuk menghitung keliling dan luas\n");
	printf("\t\t\t1. Segitiga sembarang\n");
	printf("\t\t\t2. Belah Ketupat\n");
	printf("\t\t\t3. Jajargenjang\n");
	printf("\t\t\t4. Trapesium\n");
	printf("\t\t\t5. Lingkaran\n");
	printf("\t\t\t6. Keluar\n");
	printf("\t\t\tSilahkan masukkan disini : ");
		scanf("%d", &menu);
		system("cls");
	switch(menu){
		case 1:
			segitiga:
			printf("\n");
			printf("\t\t\t===========================================================\n");
			printf("\t\t\t\t\tPerhitungan Seitiga Sembarang\n");
			printf("\t\t\t\t\tinput 3 sisi segitiga\n\n");
			printf("\t\t\tsisi 1 = ");
				scanf("%d", &sisi1 );
			printf("\n\t\t\tsisi 2 = ");
				scanf("%d", &sisi2);
			printf("\n\t\t\tsisi 3 = ");
				scanf("%d", &sisi3);
				sisi = sisi1 + sisi2 + sisi3;
				semesta = 0.5 * sisi;
				kalisemesta = semesta * (semesta - sisi1) * (semesta - sisi2) * (semesta - sisi3);
				luas = sqrt(kalisemesta);
				keliling = sisi1 + sisi2 + sisi3;
			printf("\n\n\tLuas segitiga sembarang dari sisi 1 2 dan 3 adalah : %2.lf \n", luas );
			printf("\tKelili segitiga sembarang dari sisi 1 2 dan 3 adalah : %2.lf \n", keliling);
		
			printf("\t=============================== \n");
			printf("\t1. Kembali Ke Menu Utama \n");
			printf("\t2. Hitung lagi \n");
			printf("\t3. Keluar\n");
			printf("\tPilih :");
			scanf_s("%d", &pil);
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
			scanf("%d", &d1);
			printf("\n\t\t\tdiagonal 2 = ");
				scanf("%d", &d2);
				luas = (d1 * d2)/2;
				keliling = 
				/*keliling*/
			printf("\n\tLuas belah ketupat yang diketahui diagonalnya adalah : %2.lf", luas);
			printf("\n\t=============================== \n");
			printf("\t1. Kembali Ke Menu Utama \n");
			printf("\t2. Hitung lagi \n");
			printf("\t3. Keluar\n");
			printf("\tPilih :");
			scanf_s("%d", &pil);
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
			printf("\t\t\tMasukkan alas dari jajar genjang : ");
				scanf("%d", &alas);
			printf("\n\t\t\tMasukkan tinggi dari jajar genjang :");
				scanf("%d", &tinggi);
				
				luas = alas * tinggi;
			printf("\n\tLuas jajargenjang dari inputan di atas adalah : %2.lf", luas);
			printf("\n\t=============================== \n");
			printf("\t1. Kembali Ke Menu Utama \n");
			printf("\t2. Hitung lagi \n");
			printf("\t3. Keluar\n");
			printf("\tPilih :");
			scanf_s("%d", &pil);
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
				scanf("%d", &alas);
			printf("\n\t\t\tSisi sejajar alas : ");
				scanf("%lf", &sejajaralas);
			printf("\n\t\t\tTinggi : ");
				scanf("%d", &tinggi);
				
				luas = 0.5 * (alas + sejajaralas) * tinggi;
			printf("\n\tLuas dari trapesium dengan inputan %d, %2.lf, dan %d adalah : %2.lf", alas,sejajaralas,tinggi,luas);
			printf("\n\t=============================== \n");
			printf("\t1. Kembali Ke Menu Utama \n");
			printf("\t2. Hitung lagi \n");
			printf("\t3. Keluar\n");
			printf("\tPilih :");
			scanf_s("%d", &pil);
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
				scanf("%lf", &jari_jari);

				luas = phi * jari_jari * jari_jari;
				keliling = 2 * phi * jari_jari;
				
			printf("\n\tLuas lingkaran dengan jari-jari %2.lf adalah : %2.lf\n", jari_jari, luas);
			printf("\n\tKeliling lingkaran dengan jari-jari %2.lf adalah : %2.lf\n", jari_jari, keliling); 
			printf("\n\t=============================== \n");
			printf("\t1. Kembali Ke Menu Utama \n");
			printf("\t2. Hitung lagi \n");
			printf("\t3. Keluar\n");
			printf("\tPilih :");
			scanf_s("%d", &pil);
			system("cls");
			if(pil == 1)
			goto menu;
			else if (pil ==2)
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
