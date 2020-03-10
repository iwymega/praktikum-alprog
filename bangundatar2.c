#include <stdio.h>
#include <math.h>
//a.	Segitiga sembarang
//b.	Belah Ketupat 
//c.	Jajargenjang
//d.	Trapesium 
//e.	Lingkaran 
int main(){
	int menu;
	void segitigasembarang();
	void belahketupat();
	void jajargenjang();
	void trapesium();
	void lingkaran();

	printf("\n");
	printf("\t\t\t=======================================================\n");
	printf("\t\t\t=======================================================\n");
	printf("\t\t\t=========== PROGRAM PENGHITUNG BANGUN DATAR ===========\n");
	printf("\t\t\t=======================================================\n");
	printf("\t\t\tPROGRAM INI MERUPAKAN PROGRAM UNTUK MENGHITUNG KELILING\n");
	printf("\t\t\t========= DAN LUAS DARI BANGUN DATAR BERIKUT ==========\n");
	printf("\t\t\t== SILAHKAN PILIH NOMOR  BERIKUT UNTUK MENGHITUNGNYA ==\n");
	printf("\t\t\t=======================================================\n");

	system("cls");
	menu:
	printf("Pilih salah satu untuk menghitung keliling dan luas\n");
	printf("1. Segitiga sembarang\n");
	printf("2. Belah Ketupat\n");
	printf("3. Jajargenjang\n");
	printf("4. Trapesium\n");
	printf("5. Lingkaran\n");
	printf("Silahkan masukkan disini : ");
		scanf("%d", &menu);
	switch(menu){
		case 1: segitigasembarang(); goto menu; break;
		case 2: belahketupat(); goto menu; break;
		case 3: jajargenjang(); goto menu; break;
		case 4: trapesium(); goto menu; break;
		case 5: lingkaran(); goto menu; break;
	}
	
}

void segitigasembarang(){
	double semesta, luas, sisi1, sisi2, sisi3, keliling, kalisemesta, sisi;
	char opsi;
	printf("Perhitungan seitiga sembarang\n");
	printf("input 3 sisi segitiga\n");
	printf("sisi 1 = ");
		scanf("%d", &sisi1 );
	printf("\nsisi 2 = ");
		scanf("%d", &sisi2);
	printf("\nsisi 3 = ");
		scanf("%d", &sisi3);
		sisi = sisi1 + sisi2 + sisi3;
		semesta = 0.5 * sisi;
		kalisemesta = semesta * (semesta - sisi1) * (semesta - sisi2) * (semesta - sisi3);
		luas = sqrt(kalisemesta);
		keliling = sisi1 + sisi2 + sisi3;
	printf("Luas segitiga sembarang dari sisi 1 2 dan 3 adalah : %lf \n", luas );
	printf("Kelili segitiga sembarang dari sisi 1 2 dan 3 adalah : %lf \n", keliling);

}
void belahketupat(){
	//d = diagonal
	int d1, d2;
	double luas;
	char opsi;
	printf("Perhitungan belahkrtupat\n");
	printf("input 2 diagonal dibawah \n");
	printf("\ndiagonal 1 = ");
		scanf("%d", &d1);
	printf("\ndiagonal 2 = ");
		scanf("%d", &d2);
		luas = (d1 * d2)/2;
		

	printf("\nLuas belah ketupat yang diketahui diagonalnya adalah : %lf", luas);
	

}
void jajargenjang(){
	int alas, tinggi;
	double luas, keliling;
	char opsi;
	printf("Perhitungan Jajargenjang \n");
	printf("Masukkan alas dari jajar genjang : ");
		scanf("%d", &alas);
	printf("\nMasukkan tinggi dari jajar genjang :");
		scanf("%d", &tinggi);
		
		luas = alas * tinggi;
	printf("\nLuas jajargenjang dari inputan di atas adalah : %lf", luas);
	
}
void trapesium(){
	//c adalah sisi sejajar dengan alas
	int alas, tinggi, c;
	double luas;
	char opsi;
	printf("Perhitungan Trapesium \n");
	printf("Masukkan\n");
	printf("alas: ");
		scanf("%d", &alas);
	printf("\nsisi sejajar alas : ");
		scanf("%d", &c);
	printf("\ntinggi : ");
		scanf("%d", &tinggi);
		
		luas = 0.5 * (alas + c) * tinggi;
	printf("Luas dari trapesium dengan inputan %d, % d, dan %d adalah : %lf", alas,c,tinggi,luas);
	

}
void lingkaran(){
	// r = jari-jari
	int r;
	double luas, phi=2.14, keliling;
	char opsi;

	printf("Perhitungan lingkaran\n");
	printf("Masukkan jari-jari lingkaran : ");
		scanf("%d", &r);

		keliling = 2 * phi * r;
		luas = phi * r * r;
	printf("\nLuas lingkaran dengan jari-jari %d adalah : %lf\n", r,luas);
	printf("\nKeliling lingkaran dengan jari-jari %d adalah : %lf\n", r,keliling);

}

