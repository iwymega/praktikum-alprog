#include <stdio.h>
#include <math.h>

int main()
{	
	float phi=3.14;
	float jarijari, luas, kll, tinggi, volume;
	
	printf("Program menghitung luas lingkaran dan keliling lingkaran \n");
	printf("Input nilai jari-jari lingkaran : ");
	scanf("%f", &jarijari);
	printf("Input nilai tinggi tabung : ");
	scanf("%f", &tinggi);
	
	luas = phi*jarijari*jarijari;
	kll = 2*phi*jarijari;
	volume = luas* tinggi;
	
	printf("Luas lingkaran sesuai jari-jari yang diinput adalah : %.2f\n", luas);
	printf("Keliling lingkaran sesuai jari-jari yang diinput adalah : %.2f\n", kll);
	
	printf("Volume tabung yang didapat adalah : %.2f\n", volume);
	
	
	return 0;
}
//a.	Segitiga sembarang
//b.	Belah Ketupat 
//c.	Jajargenjang
//d.	Trapesium 
//e.	Lingkaran 

