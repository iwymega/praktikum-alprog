#include <stdio.h.>
#include <string.h>

//deklarasi variabel

//deklarasi struct
struct Gajiharian
{
	char  title[50];
   	char  author[50];
	int gajiperjam;
	int jam;
	int gaji;
	char subject[50];
};

//function declaration
void printgaji( struct Gajiharian gaji);
double validasi();
void clear_buffer();


// main
int main()
{
	printf("\t\t|---------------------------------------------------------------|");
	printf("\n\t\t|						  		|");
	printf("\n\t\t|\t\t	SELAMAT DATANG DI	 		|");
	printf("\n\t\t|\t----------PROGRAM PERHITUNGAN GAJI HARIAN----------	|");
	printf("\n\t\t|						  		|");
	printf("\n\t\t|---------------------------------------------------------------|");



	//deklarasi type Gajiharian
	struct Gajiharian pokok;
	struct Gajiharian lembur;


	//gaji tipe harian tidak lembur
	strcpy( pokok.title, "Ini Gaji anda hari ini dihitung tanpa lembur");
	pokok.gajiperjam = 10625;
	


	//gaji harian tipe lembur
	strcpy( lembur.title, "Dikarenakan anda sekarang lembur maka");
	lembur.gajiperjam = 10625;
	

   	printf("\nMasukkan julah jam kerja anda :");
   	pokok.jam = validasi();
	if (pokok.jam <=8)
	{
		system ("cls");			
		pokok.gaji = pokok.jam * pokok.gajiperjam;
		printgaji(pokok);

	} else if (pokok.jam > 8)
	{
		system ("cls");
		pokok.gaji = 8 * pokok.gajiperjam;
		printgaji(pokok);

		lembur.jam = pokok.jam - 8;
		lembur.gaji = 8 * lembur.gajiperjam;
		lembur.gaji = pokok.gaji + (lembur.gaji * lembur.jam);
		printgaji(lembur);
	}

	/*if (pokok.jam <= 8)
	{
		pokok.gaji = pokok.jam * pokok.gajiperjam;
		printf("%d\n", pokok.gaji);
	} else if (pokok.jam > 8)
	{
		lembur.jam = pokok.jam - 8;
		lembur.gaji = pokok.jam * pokok.gajiperjam;
		lembur.gaji = lembur.gaji + (lembur.gaji * (lembur.jam * 8));
		printf("%d\n", lembur.gaji);
	}
	/* code */
	return 0;
}

void printgaji( struct Gajiharian gaji) {
	printf("%s\n", gaji.title);
	printf("Gaji anda per jam : %d\n", gaji.gajiperjam);
	printf("Maka gaji anda sekarang ialah : %d\n", gaji.gaji);

}
/**/

double validasi(){
    double num;
    char chara;
    if (scanf("%lf%c",&num,&chara)!= 2  || chara != '\n' || chara == ','){
        clear_buffer();
        printf("Input invalid! Masukkan angka : ");
        return validasi();
    } else {
        return num;
    }
}

void clear_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) ;
}