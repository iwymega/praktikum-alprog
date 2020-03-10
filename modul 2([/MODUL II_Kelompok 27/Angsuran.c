#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float angsuranpokok (float pokok_pinj,float lama_pinj);
void clear();
float valid();


int main (){
	float pokok_pinj,bunga, total, ang_pokok,bunga_y;
	float bunga_total=0;
	float ang_total=0;
	float grandtotal=0;
	int lama_pinj, y;
	char pilihan,pilihan1,lama_pinj1;
	
	fflush(stdin);
	printf("\n\n\n\n\n\n\t\t    --------------------------------------------------------\n");
	printf("\t\t                       SELAMAT DATANG DI BANK 27                  \n");
	printf("\n\t\t                      PROGRAM MENGHITUNG ANGSURAN\n");
	printf("\t\t    --------------------------------------------------------\n");
	printf("\n\t\t\t             INGIN MELANJUTKAN KE MENU?\n");
	printf("\n\t\t\t                        YES(y/Y)\n");
	printf("\n\t\t\t                        NO(n/N)\n");
	printf("\n\t\t\t                        ---> ");
	scanf("%c%c",&pilihan,&pilihan1);
	system ("cls");
	if((pilihan=='y'||pilihan=='Y' || pilihan=='n'||pilihan=='N') && pilihan1 == '\n'){
		if (pilihan=='y'||pilihan=='Y'){
			printf("------------------------ANGSURAN PERBULAN---------------------\n");
			printf("--------------------------------------------------------------\n\n\n");
			do {
				printf ("Pokok Pinjaman\t: ");
				fflush(stdin);
				pokok_pinj=valid();
			} while (pokok_pinj==0||pokok_pinj<0);
			do {
				printf("Besar Bunga\t: ");
				fflush(stdin);
				bunga=valid();
			} while (bunga==0||bunga<0||bunga>100);
			printf("Lama Pinjaman\t: ");
			fflush(stdin);
			if(scanf("%d%c", &lama_pinj, &lama_pinj1) != 2 || lama_pinj1 != '\n'){
				do {
					printf("Lama Pinjaman\t: ");
		  			fflush(stdin);
		  			lama_pinj=valid();
				} while (lama_pinj==0||lama_pinj<0);
			} 
			ang_pokok=angsuranpokok(pokok_pinj,lama_pinj);
			
			printf("\n--------------------------------------------------------------\n");
			printf("| Bulan\t | Bunga\t | Angsuran Pokok | Total Angsuran   |\n");
			printf("|------------------------------------------------------------|\n");
			for (y=1;y<=lama_pinj;y++){
				if (bunga<1 && bunga>0){	
					bunga_y=(pokok_pinj-((y-1)*ang_pokok))*bunga/12;
				} else if (bunga>=1 && bunga<=100) {
					bunga_y=(pokok_pinj-((y-1)*ang_pokok))*bunga/12/100;
				}
					printf("| %d\t | %.2f\t | %.2f\t  | %.2f\t     |\n",y,bunga_y,ang_pokok,bunga_y+ang_pokok);
					bunga_total=bunga_total+bunga_y;
					ang_total=ang_total+ang_pokok;
					grandtotal=grandtotal+(bunga_y+ang_pokok);
			}
			
			printf("|------------------------------------------------------------|\n");
			printf("| Total\t | %.2f\t | %.2f\t  | %.2f\t     |\n",bunga_total,ang_total,grandtotal);
		    printf("--------------------------------------------------------------\n");
		    getch();
		    system("cls");
		    main();
		} else if (pilihan=='n'|| pilihan=='N'){
			printf("\n\n\n\n\n\n\n\n\t\t   ----Anda Telah Keluar dari Program Utama, Terimakasih^^---- \n");
			getch();
			exit (0);
		}
		} else {
			main ();
		}
	
    return 0;
}

float angsuranpokok (float pokok_pinj,float lama_pinj){
 	float angsuran;
 	angsuran=pokok_pinj/lama_pinj;
 	return angsuran;
 }
 
void clear(){
    char clr;
    while ((clr = getchar()) != '\n' && clr != EOF) ;
}

float valid(){
    float ank;
    char kta;
    if (scanf("%f%c",&ank,&kta)!= 2  || kta != '\n' || kta == ','){
        clear();
        printf("Perintah yang Anda Masukan Salah! \nSilahkan ulangi : ");
        return valid();
    } else {
        return ank;
    }
}
