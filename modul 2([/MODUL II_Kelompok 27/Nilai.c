#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



float MenentukanNilaiAngka(float Absen, float Tugas1, float Tugas2, float Tugas3, float Quiz, float UTS, float UAS){
	float NilaiAngka;
	NilaiAngka = ((Absen * 0.05) + ((Tugas1 + Tugas2 + Tugas3 )* 0.2/3) + (Quiz * 0.15) + (UTS * 0.3) + (UAS * 0.3));
	return NilaiAngka;
}

int clear(){
	char tgs;
	while ((tgs = getchar()) != '\n' && tgs != EOF);
	return 1;
}

float valid(){
		float tugas;
		char tugaschar;
		if((scanf("%f%c",&tugas,&tugaschar)!=2 || tugaschar !='\n' || tugas>100) && clear()){
			printf("\n Silahkan Ulang Inputan : ");
			return valid();
		}else {
		return tugas;
		}
}
	
void Menu(){
	float absen, tugas1, tugas2, tugas3, quiz, uas, uts, nilai;
	int menu1;
	
	menu1:
	printf("\t\t ====APLIKASI PENENTUAN NILAI MATA KULIAH====");
	printf("\n\t Masukkan jumlah absensi: ");
	absen=valid();
	if((absen<=15)&&(absen>=0)){
		printf("\n\t Masukkan nilai tugas: ");
    	printf("\n\t\t Nilai tugas 1 : ");
    	tugas1=valid();
    	printf("\n\t\t Nilai tugas 2 : ");
    	tugas2=valid();
    	printf("\n\t\t Nilai tugas 3 : ");
    	tugas3=valid();
    	printf("\n\n\t Masukkan nilai Quiz: ");
    	quiz=valid();
    	printf("\n\t Masukkan nilai UTS: ");
    	uts=valid();
    	printf("\n\t Masukkan nilai UAS: ");
    	uas=valid();
    		nilai = MenentukanNilaiAngka(absen, tugas1, tugas2, tugas3, quiz, uts, uas);
    
	    	if((nilai>=0)&&(nilai<45)){
				printf("\t Nilai dalam huruf = E");
			}else if((nilai>=45)&&(nilai<50)){
				printf("\t Nilai dalam huruf = D");
			}else if((nilai>=50)&&(nilai<55)){
				printf("\t Nilai dalam huruf = D+");
			}else if((nilai>=55)&&(nilai<60)){
				printf("\t Nilai dalam huruf = C");
			}else if((nilai>=60)&&(nilai<65)){
				printf("\t Nilai dalam huruf = C+");
			}else if((nilai>=65)&&(nilai<75)){
				printf("\t Nilai dalam huruf = B");
			}else if((nilai>=75)&&(nilai<80)){
				printf("\t Nilai dalam huruf = B+");
			}else if((nilai>=80)&&(nilai<=100)){
				printf("\t Nilai dalam huruf = A");
			}
   
 		   printf("\n\t Nilai dari Mata Kuliah anda adalah %.2f",nilai);


   
	} else if(absen>15){
		system("cls");
	
		goto menu1;
	}
}

int main(){
   
   printf("\n\n\n\n\n");
   printf("             ======================================\n");
   printf("             SELAMAT DATANG DI PROGRAM NO.2 MODUL 2\n");
   printf("                     OLEH KELOMPOK 27              \n");
   printf("             ======================================\n");
   getch();
   system("cls");
   Menu();
   return(0);
}

