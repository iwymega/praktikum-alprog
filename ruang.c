#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

float phi=3.14;
float validcek(){
    float angka;
    char kata;
    if (scanf("%f%c",&angka,&kata)!= 2 || kata != '\n' || kata == ','){
    	clear();
        printf("Silahkan ulangi : ");
        return validcek();
	}else {
        return angka;
    }
}

int validmenu (){
	int number;
    char word;
    
	if (scanf("%d%c",&number,&word)!= 2  || word != '\n' || word == ','){
        clear();
        return validmenu;
    } else {
    	return number;
	}
}

void clear(){
    char clr;
    while ((clr = getchar()) != '\n' && clr != EOF) ;
}
    
float hitungvoltabung (){
	float jari_jari,tinggi_tabung;
	float voltabung;
	
	printf("\n-----------------------VOLUME TABUNG--------------------\n");
	printf("\n                    MASUKAN DATA TABUNG\n\n");
	printf("         ------------------------------------------\n\n");	
	do {
	printf("Jari-Jari\t: ");
	jari_jari=validcek();
	} while (jari_jari==0);
	do {
	printf("Tinggi\t\t: ");
	tinggi_tabung=validcek();
	} while (tinggi_tabung==0);
	
	voltabung=phi*jari_jari*jari_jari*tinggi_tabung;
	printf("\nVolume Tabung adalah : %.2f\n",voltabung);
	printf("--------------------------------------------------------\n");
	printf("         Tekan ENTER untuk Melanjutkan ke MENU      \n");
	getch();
	system("cls");
	printf("%d",inputmenu());
	return voltabung;
}
float hitunglptabung (){
	float jari_jari;
	float tinggi_tabung;
	float lptabung;
	
	printf("\n--------------------LUAS PERMUKAAN TABUNG-----------------\n");
	printf("\n                     MASUKAN DATA TABUNG\n\n");
	printf("         ------------------------------------------\n\n");
	do {
	printf("Jari-Jari\t: ");
	jari_jari=validcek();
	} while (jari_jari==0);
	do {
	printf("Tinggi\t\t: ");
	tinggi_tabung=validcek();
	} while (tinggi_tabung==0);
	
	lptabung=2*phi*jari_jari*(jari_jari+tinggi_tabung);
	printf("\nLuas Permukaan Tabung adalah :%.2f\n",lptabung );
	printf("--------------------------------------------------------\n");
	printf("         Tekan ENTER untuk Melanjutkan ke MENU      \n");
	getch();
	system("cls");
	printf("%d",inputmenu());
	return lptabung;
}

float hitungvolbola (){
	float jari_jari;
	float volbola;
		
	printf("\n-----------------------VOLUME BOLA----------------------\n");
	printf("\n                    MASUKAN DATA BOLA\n");
	printf("         ------------------------------------------\n\n");
	do {
	printf("Jari-Jari\t: ");
	jari_jari=validcek();
	} while (jari_jari==0);
	
	volbola=1.33*phi*jari_jari*jari_jari*jari_jari;
	printf("\nVolume Bola adalah : %.2f\n",volbola);
	printf("\n--------------------------------------------------------\n");
	printf("         Tekan ENTER untuk Melanjutkan ke MENU      \n");
	getch();
	system("cls");
	printf("%d",inputmenu());
	return volbola;
}

float hitunglpbola (){
	float lpbola;
	float jari_jari;

	printf("\n-------------------LUAS PERMUKAAN BOLA------------------\n");
	printf("\n                    MASUKAN DATA BOLA\n");
	printf("         ------------------------------------------\n\n");
	do {
	printf("Jari-Jari\t: ");
	jari_jari=validcek();
	} while (jari_jari==0);
	
	lpbola=4*phi*jari_jari*jari_jari;
	printf("\nLuas Permukaan Bola adalah : %.2f\n",lpbola);
	printf("\n--------------------------------------------------------\n");
	printf("         Tekan ENTER untuk Melanjutkan ke MENU      \n");
	getch();
	system("cls");
	printf("%d",inputmenu());
	return lpbola;
}

float hitungvollimas (){
	float sisi_alas,tinggi;
	float ls_alas,vollimas;
	
	printf("\n-----------------VOLUME LIMAS SEGIEMPAT-----------------\n");
	printf("\n              MASUKAN DATA LIMAS SEGIEMPAT\n");
	printf("         ------------------------------------------\n\n");
	do {
	printf("Sisi Alas\t: ");
	sisi_alas=validcek();
	} while (sisi_alas==0);
	do {
	printf("Tinggi\t\t: ");
	tinggi=validcek();
	} while (tinggi==0);
	
	ls_alas=sisi_alas*sisi_alas;
	vollimas=0.33*ls_alas*tinggi;
	printf("\nLuas alas adalah : %.2f\n",ls_alas);
	printf("\nVolume Limas Segiempat adalah : %.2f\n",vollimas);
	printf("\n--------------------------------------------------------\n");
	printf("         Tekan ENTER untuk Melanjutkan ke MENU      \n");
	getch();
	system("cls");
	printf("%d",inputmenu());
	return vollimas;
}

float hitunglplimas (){
	float lplimas;
	float sisi_alas,ls_alas,ls_tegak;
	float tinggi;
	float tinggi_tegak,setengah_sisi;

	printf("\n-------------LUAS PERMUKAAN LIMAS SEGIEMPAT-------------\n");
	printf("\n              MASUKAN DATA LIMAS SEGIEMPAT\n");
	printf("         ------------------------------------------\n\n");
	do {
	printf("Sisi Alas\t: ");
	sisi_alas=validcek();
	} while (sisi_alas==0);
	do {
	printf("Tinggi\t\t: ");
	tinggi=validcek();
	} while (tinggi==0);
	
	ls_alas=sisi_alas*sisi_alas;
	setengah_sisi=0.5*sisi_alas;
	tinggi_tegak=sqrt((setengah_sisi*setengah_sisi)+(tinggi*tinggi));
	ls_tegak=0.5*sisi_alas*tinggi_tegak;
	lplimas=ls_alas+(4*ls_tegak);
	printf("\nLuas alas adalah : %.2f\n",ls_alas);
	printf("\nTinggi Sisi Tegak adalah : %.2f\n",tinggi_tegak);
	printf("\nLuas Sisi Tegak adalah : %.2f\n",ls_tegak);
	printf("\nLuas Permukaan Limas Segiempat adalah : %.2f\n",lplimas);
	printf("\n--------------------------------------------------------\n");
	printf("         Tekan ENTER untuk Melanjutkan ke MENU      \n");
	getch();
	system("cls");
	printf("%d",inputmenu());
	return lplimas;
}

float hitungvolprisma (){
	float sisi_alas1,sisi_alas2,sisi_alas3,tinggi_prisma;
	float keliling,setengah_kll,ls_alas;
	float volprisma;
	
	printf("\n-----------------VOLUME PRISMA SEGITIGA-----------------\n");
	printf("\n              MASUKAN DATA PRISMA SEGITIGA\n");
	printf("         ------------------------------------------\n\n");
	do {
	printf("Sisi Alas Pertama\t: ");
	fflush(stdin);
	sisi_alas1=validcek();
	} while (sisi_alas1==0);
	do {
	printf("Sisi Alas Kedua\t\t: ");
	fflush(stdin);
	sisi_alas2=validcek();
	} while ((sisi_alas2==sisi_alas1) || (sisi_alas2==0));
	do {
	printf("Sisi Alas Ketiga\t: ");
	fflush(stdin);
	sisi_alas3=validcek();
	} while ((sisi_alas3==sisi_alas2)||(sisi_alas3==sisi_alas1)|| (sisi_alas3==0));
	printf("Tinggi Prisma\t\t: ");
	tinggi_prisma=validcek();
	
	keliling=sisi_alas1+sisi_alas2+sisi_alas3;
	setengah_kll=0.5*keliling;
	ls_alas=sqrt(setengah_kll*(setengah_kll-sisi_alas1)*(setengah_kll-sisi_alas2)*(setengah_kll-sisi_alas3));
	volprisma=ls_alas*tinggi_prisma;
	printf("\nKeliling Alas adalah : %.2f\n",keliling);
	printf("\nLuas Alas adalah : %.2f\n",ls_alas);
	printf("\nVolume Prisma Segitiga adalah : %.2f\n",volprisma);
	printf("--------------------------------------------------------\n");
	printf("         Tekan ENTER untuk Melanjutkan ke MENU      \n");
	getch();
	system("cls");
	printf("%d",inputmenu());
	return volprisma;
}

float hitunglpprisma (){
	float lpprisma;
	float sisi_alas1,sisi_alas2,sisi_alas3,ls_alas;
	float tinggi_prisma;
	float keliling,setengah_kll;
	int i,n;

	printf("\n--------------LUAS PERMUKAAN PRISMA SEGITIGA-------------\n");
	printf("\n               MASUKAN DATA PRISMA SEGITIGA\n");
	printf("         ------------------------------------------\n\n");
	do {
	printf("Sisi Alas Pertama\t: ");
	fflush(stdin);
	sisi_alas1=validcek();
	} while (sisi_alas1==0);
	do {
	printf("Sisi Alas Kedua\t\t: ");
	fflush(stdin);
	sisi_alas2=validcek();
	} while ((sisi_alas2==sisi_alas1) || (sisi_alas2==0));
	do {
	printf("Sisi Alas Ketiga\t: ");
	fflush(stdin);
	sisi_alas3=validcek();
	} while ((sisi_alas3==sisi_alas2)||(sisi_alas3==sisi_alas1)|| (sisi_alas3==0));
	printf("Tinggi Prisma\t\t: ");
	tinggi_prisma=validcek();
	
	keliling=sisi_alas1+sisi_alas2+sisi_alas3;
	setengah_kll=0.5*keliling;
	ls_alas=sqrt(setengah_kll*(setengah_kll-sisi_alas1)*(setengah_kll-sisi_alas2)*(setengah_kll-sisi_alas3));
	lpprisma=(2*ls_alas)+((sisi_alas1+sisi_alas2+sisi_alas3)*tinggi_prisma);
	printf("\nKeliling Alas adalah : %.2f\n",keliling);
	printf("\nLuas Alas adalah : %.2f\n",ls_alas);
	printf("\nLuas Permukaan Prisma Segitiga adalah : %.2f\n",lpprisma);
	printf("--------------------------------------------------------\n");
	printf("         Tekan ENTER untuk Melanjutkan ke MENU      \n");
	getch();
	system("cls");
	printf("%d",inputmenu());
	return lpprisma;
}

float hitungvolkerucut (){
	float jari_jari,tinggi_kerucut;
	float volkerucut;
		
	printf("\n--------------------VOLUME KERUCUT----------------------\n");
	printf("\n                 MASUKAN DATA KERUCUT\n");
	printf("         ------------------------------------------\n\n");
	do {
	printf("Jari-Jari\t: ");
	jari_jari=validcek();
	} while (jari_jari==0);
	do {
	printf("Tinggi\t\t: ");
	tinggi_kerucut=validcek();
	} while (tinggi_kerucut==0);
	
	volkerucut=0.33*phi*jari_jari*jari_jari*tinggi_kerucut;
	printf("\nVolume Kerucut adalah : %.2f\n",volkerucut);
	printf("--------------------------------------------------------\n");
	printf("         Tekan ENTER untuk Melanjutkan ke MENU      \n");
	getch();
	system("cls");
	printf("%d",inputmenu());
	return volkerucut;
}

float hitunglpkerucut (){
	float lpkerucut;
	float jari_jari,tinggi_kerucut,selimut;

	printf("\n----------------LUAS PERMUKAAN KERUCUT------------------\n");
	printf("\n                 MASUKAN DATA KERUCUT\n");
	printf("         ------------------------------------------\n");
	do {
	printf("Jari-Jari\t: ");
	jari_jari=validcek();
	} while (jari_jari==0);
	do {
	printf("Tinggi\t\t: ");
	tinggi_kerucut=validcek();
	} while (tinggi_kerucut==0);
	
	selimut=sqrt((jari_jari*jari_jari)+(tinggi_kerucut*tinggi_kerucut));
	lpkerucut=phi*jari_jari*(jari_jari+selimut);
	printf("\nPanjang Selimut Kerucut adalah : %.2f\n",selimut);
	printf("\nLuas Permukaan Kerucut adalah : %.2f\n",lpkerucut);
	printf("--------------------------------------------------------\n");
	printf("         Tekan ENTER untuk Melanjutkan ke MENU      \n");
	getch();
	system("cls");
	printf("%d",inputmenu());
	return lpkerucut;
}
int inputmenu(){
 	int pilihan1,pilihan2,pilihan;
 
 	printf("\n\n\n\n\n\n\t    --------------------------MENU--------------------------\n");
 	printf("\t    |1. VOLUME BANGUN RUANG                                |\n");
 	printf("\t    |2. LUAS PERMUKAAN BANGUN RUANG                        |\n");
 	printf("\t    |3. EXIT                                               |\n");
 	printf("\t    --------------------------------------------------------\n");
 	printf("\t                Silahkan Masukkan Pilihan Menu : "); 
 	pilihan=validmenu();
 	system("cls");
 	switch(pilihan){
  		case 1: 
  		pilihan1=pilihanmenu1();
		printf("%s",pilihan1);
  		break;
    	case 2: 
    	pilihan2=pilihanmenu2 ();
	 	printf("%s",pilihan2);
	 	case 3: 
	 	printf("\n\n\n\n\n\n\n\n\n\n\t        -----Tidak ada pilihan menu, terimakasih!-----\n");
	 	getch();
	 	exit(0);
    	break;
    	default: printf("%d",inputmenu());
 	}  
	return pilihan;
}
int pilihanmenu1 (){
	int menu,pil1,pil2,pil3,pil4,pil5;
	
	printf("\n\n\n\n\n\n\t    ----------------------BANGUN RUANG----------------------\n");
	printf("\t    |1.TABUNG                                              |\n");
	printf("\t    |2.BOLA                                                |\n");
	printf("\t    |3.LIMAS SEGIEMPAT                                     |\n");
	printf("\t    |4.PRISMA SEGITIGA                                     |\n");
	printf("\t    |5.KERUCUT                                             |\n");
	printf("\t    |6.BACK TO MENU                                        |\n");
	printf("\t    --------------------------------------------------------\n");
	printf("\t            Silahkan Masukkan Pilihan Bangun Ruang : "); 
	menu=validmenu();
	system("cls");
	switch(menu){
		case 1: 
		pil1=hitungvoltabung();
		printf("%s\n",pil1);
		break;
	  	case 2: 
	  	pil2=hitungvolbola ();
	  	printf("%s\n",pil2);
	  	break;
	  	case 3: 
	  	pil3=hitungvollimas ();
	  	printf("%s\n",pil3);
	  	break;
	  	case 4: 
	  	pil4=hitungvolprisma ();
	  	printf("%s\n",pil4);
	  	break;
	  	case 5: 
	  	pil5=hitungvolkerucut ();
	  	printf("%s\n",pil5);
	  	case 6:
	  	printf("%d",inputmenu());
	  	break;
	  	default: printf("%d",pilihanmenu1());
	}return menu;
}

int pilihanmenu2 (){
	int menu,menu1,menu2,menu3,menu4,menu5;
	
	printf("\n\n\n\n\n\n\t    ----------------------BANGUN RUANG----------------------\n");
	printf("\t    |1.TABUNG                                              |\n");
	printf("\t    |2.BOLA                                                |\n");
	printf("\t    |3.LIMAS SEGIEMPAT                                     |\n");
	printf("\t    |4.PRISMA SEGITIGA                                     |\n");
	printf("\t    |5.KERUCUT                                             |\n");
	printf("\t    |6.BACK TO MENU                                        |\n");
	printf("\t    --------------------------------------------------------\n");
	printf("\t            Silahkan Masukkan Pilihan Bangun Ruang : "); 
	menu=validmenu();
	system("cls");
	switch(menu){
		case 1: 
		menu1=hitunglptabung();
		printf("%s\n",menu1);
		break;
	  	case 2: 
	  	menu2=hitunglpbola ();
	  	printf("%s\n",menu2);
	  	break;
	  	case 3: 
	  	menu3=hitunglplimas ();
	  	printf("%s\n",menu3);
	  	break;
	  	case 4: 
	  	menu4=hitunglpprisma ();
	  	printf("%s\n",menu4);
	  	break;
	  	case 5: 
	  	menu5=hitunglpkerucut ();
	  	printf("%s\n",menu5);
	  	case 6:
	  	printf("%d",inputmenu());
	  	break;
	  	default: printf("%d",pilihanmenu2());
	  	fflush(stdin);
	}return menu;
}

int main (){
	
	fflush(stdin);
	printf("\n\n\n\n\n\n\n\t    --------------------------------------------------------\n");
	printf("\t                          SELAMAT DATANG                  \n");
	printf("\n\t    PROGRAM MENGHITUNG VOLUME & LUAS PERMUKAAN BANGUN RUANG\n");
	printf("\n\t             Tekan ENTER untuk Melanjutkan ke MENU      \n");
	printf("\t    --------------------------------------------------------");
	getch ();
	system("cls");
	printf("%d",inputmenu());
	return 0;
}
