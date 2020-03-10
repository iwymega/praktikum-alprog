#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i,j,temp,angka[64000],h,n,lo,hi;
double waktu1000,waktu16000,waktu64000,jam,jam1,jam2;
int insertion_sort();
int bubble_sort();
void quicksort();
void sequential();
void binary_search();
void angka1000();
void angka16000();
void angka64000();
void reset();
void clear_buffer();
double validasi();

int main(){
	int pil,pilih;
	
	char yt;
	printf("\t\t|---------------------------------------------------------------|");
	printf("\n\t\t|						  		|");
	printf("\n\t\t|\t\t	SELAMAT DATANG DI	 		|");
	printf("\n\t\t|\t\t\t-----PROGRAM-----			|");
	printf("\n\t\t|\t\t PENGURUTAN DAN PENCARIAN DATA			|");
	printf("\n\t\t|						  		|");
	printf("\n\t\t|---------------------------------------------------------------|");
	printf("\n\t\t|						  		|");
	printf("\n\t\t|Sialhkan pilih menu yang ada :				 	|");
	printf("\n\t\t|						  		|");
	printf("\n\t\t|1. Short					  		|");
	printf("\n\t\t|2. Search					  		|");
	printf("\n\t\t|						  		|");
	printf("\nPilih Menu yang ada \n[1]. Sort \n[2]. Search \n[0]. keluar\nMasukkan pilihan anda : ");
	pil=validasi();
	if(pil>3 || pil<0){
		fflush(stdin);
		system ("cls");
		main();
	}
	
	switch(pil){
		case 1:
			printf("Pilih Menu yang ada \n[1]. Insertion Sort \n[2]. Bubble Sort \n[3]. Quicksort \n [0]. keluar \nMasukkan pilihan anda : ");
			pil=validasi();
		switch(pil){
			case 1:
				printf("Pilih Menu yang ada \n[1]. 1000 \n[2]. 16000 \n[3]. 64000 \nMasukkan pilihan anda : ");
				pilih=validasi();
				switch(pilih){
					case 1:
						angka1000();
						printf("\n\nPress any key to continue...");
						getch();
							insertion_sort(1000);
						reset();
						break;
					case 2:
						angka16000();
						printf("\n\nPress any key to continue...");
						getch();
							insertion_sort(16000);
						reset();
						break;
					case 3:
					 	angka64000();
						printf("\n\nPress any key to continue...");
						getch();
							insertion_sort(64000);
						reset();
						break;
				}
				break;
			case 2:
				printf("Pilih Menu yang ada \n[1]. 1000 \n[2]. 16000 \n[3]. 64000 \nMasukkan pilihan anda : ");
				pilih=validasi();
				switch(pilih){
					case 1:
						angka1000();
						printf("\n\nPress any key to continue...");
						getch();
							bubble_sort(1000);
						reset();
						break;
					case 2:
						angka16000();
						printf("\n\nPress any key to continue...");
						getch();
							bubble_sort(16000);
						reset();
						break;
					case 3:
					 	angka64000();
						printf("\n\nPress any key to continue...");
						getch();
							bubble_sort(64000);
						reset();
						break;			
				}
				break;
			case 3:
				printf("Pilih Menu yang ada \n[1]. 1000 \n[2]. 16000 \n[3]. 64000 \nMasukkan pilihan anda : ");
				pilih=validasi();
				switch(pilih){
					case 1:
						angka1000();
						printf("\n\nPress any key to continue...");
						getch();
							jam1=clock();
							quicksort(angka,0,1000);
							jam2=clock();
						for(i=0;i<1000;i++){
							printf("\ndata yang sudah terurut : %d",angka[i]);
						}			
						jam=(double)(jam2-jam1)/CLOCKS_PER_SEC;
						printf("\nwaktu yang dibutuhkan : %.2lf",jam);	
						reset();
						break;
					case 2:
						angka16000();
						printf("\n\nPress any key to continue...");
						getch();
							jam1=clock();
							quicksort(angka,0,16000);
							jam2=clock();
						for(i=0;i<16000;i++){
							printf("\ndata yang sudah terurut : %d",angka[i]);
						}			
						jam=(double)(jam2-jam1)/CLOCKS_PER_SEC;
						printf("\nwaktu yang dibutuhkan : %.2lf",jam);	
						reset();
						break;
					case 3:
					 	angka64000();
						printf("\n\nPress any key to continue...");
						getch();
							jam1=clock();
							quicksort(angka,0,64000);
							jam2=clock();
						for(i=0;i<64000;i++){
							printf("\ndata yang sudah terurut : %d",angka[i]);
						}			
						jam=(double)(jam2-jam1)/CLOCKS_PER_SEC;
						printf("\nwaktu yang dibutuhkan : %.2lf",jam);	
						reset();
						break;			
				}
				break;			
			}
		break;

		case 2:
			printf("Pilih Menu yang ada \n[1]. Sequential Search \n[2]. Binary Search \n[0]. keluar \nMasukkan pilihan anda : ");
			pil=validasi();
			switch(pilih){
			case 1:
				printf("Pilih Menu yang ada \n[1]. 1000 \n[2]. 16000 \n[3]. 64000 \nMasukkan pilihan anda : ");
				pilih=validasi();
				switch(pilih){
					case 1:
						angka1000();
						printf("\n\nPress any key to continue...");
						getch();
							sequential(1000);
						reset();
						break;
					case 2:
						angka16000();
						printf("\n\nPress any key to continue...");
						getch();
							sequential(16000);
						reset();
						break;
					case 3:
					 	angka64000();
						printf("\n\nPress any key to continue...");
						getch();
							sequential(64000);	
						reset();
						break;
				}
				break;
			case 2:
				printf("Pilih Menu yang ada \n[1]. 1000 \n[2]. 16000 \n[3]. 64000 \nMasukkan pilihan anda : ");
				pilih=validasi();
				switch(pilih){
					case 1:
						angka1000();
						for(i=1;i<1000;i++){
							temp=angka[i];
							j=i-1;
							while (j>=0 && angka[j]>temp){
								angka[j+1]=angka[j];
								j=j-1;
								angka[j+1]=temp;
							}
						}
						for(i=0;i<1000;i++){
							printf("\ndata yang terurut ke-%d : %d",i,angka[i]);
						}
						printf("\n\nPress any key to continue...");
						getch();
							binary_search(1000);
						reset();
						break;
					case 2:
						angka16000();
						for(i=1;i<16000;i++){
							temp=angka[i];
							j=i-1;
							while (j>=0 && angka[j]>temp){
								angka[j+1]=angka[j];
								j=j-1;
								angka[j+1]=temp;
							}
						}
						for(i=0;i<16000;i++){
							printf("\ndata yang terurut ke-%d : %d",i,angka[i]);
						}
						printf("\n\nPress any key to continue...");
						getch();
							binary_search(16000);
						reset();
						break;
					case 3:
					 	angka64000();
						for(i=1;i<64000;i++){
							temp=angka[i];
							j=i-1;
							while (j>=0 && angka[j]>temp){
								angka[j+1]=angka[j];
								j=j-1;
								angka[j+1]=temp;
							}
						}
						for(i=0;i<64000;i++){
							printf("\ndata yang terurut ke-%d : %d",i,angka[i]);
						}
						printf("\n\nPress any key to continue...");
						getch();
							binary_search(64000);
						reset();
						break;			
				}
				break;
			}
		break;
		}
	switch(pilih){
		case 0:
			printf("\n\nterimakasih sudah menggunakan layanan kami");
			exit(0);
	}

	return(0);
}

int insertion_sort(int n){
	double awal,akhir,waktu;
	awal=clock();
	for(i=1;i<n;i++){
		temp=angka[i];
		j=i-1;
		while (j>=0 && angka[j]>temp){
			angka[j+1]=angka[j];
			j=j-1;
			angka[j+1]=temp;
		}
	}
	for(i=0;i<n;i++){
		printf("\ndata yang terurut : %d",angka[i]);
	}
	akhir=clock();
	waktu=(double)(akhir-awal)/CLOCKS_PER_SEC;
	printf("\n\nwaktu yang dibutuhkan : %.2lf",waktu);
}

int bubble_sort(int n){
	double awal,akhir,waktu;
	awal=clock();
	for(i=0;i<=n-2;i++){
		for(j=0;j<=n-2-i;j++){
			if(angka[j+1]<angka[j]){
				temp=angka[j];
				angka[j]=angka[j+1];
				angka[j+1]=temp;
			}
		}
	}
	akhir=clock();
	for(i=0;i<n;i++){
		printf("urut : %d\n",angka[i]);
	}
	waktu=(double)(akhir-awal)/CLOCKS_PER_SEC;
	printf("waktu yang dibutuhkan : %.2lf\n",waktu);
}

void quicksort(int angka[],int lo, int hi){
	int i,j,temp,pivot;
	if(lo<hi){
		pivot=lo;
		i=lo;
		j=hi;
		while(i<j){
			while(angka[i]<=angka[pivot] && i<hi){
				i++;
			}
			while(angka[j]>angka[pivot]){
				j--;
			}
			if(i<j){
				temp=angka[i];
				angka[i]=angka[j];
				angka[j]=temp;
			}
		}
		temp=angka[pivot];
		angka[pivot]=angka[j];
		angka[j]=temp;
		quicksort(angka,lo,j-1);
		quicksort(angka,j+1,hi);
	}
}

void sequential(int n){
	int i=0,ketemu=0,cari;
	double awal,akhir,waktu;
	printf("\n\nmasukkan data yang dicari : ");
	scanf("%d",&cari);
	awal=clock();
	while(i<n && ketemu!=1){
		if(angka[i]==cari){
			ketemu=1;
		}else{
			i++;
		}
	}
	akhir=clock();
	if(ketemu==1){
		printf("\ndata yang kamu cari sudah ditemukan di index ke-%d yaitu %d",i+1,angka[i]);
	}else{
		printf("\ndata yang anda cari tidak ada");
	}
	waktu=(double)(akhir-awal)/CLOCKS_PER_SEC;
	printf("\nwaktu yang dibutuhkan : %.2lf",waktu);
}

void binary_search(int n){
	int awal=0,akhir=n-1,hasil=0,tengah,cari;
	double awalj,akhirj,waktuj;
	printf("\n\nmasukkan data yang ingin dicari : ");
	scanf("%d",&cari);
	awalj=clock();
	tengah=(awal+akhir)/2;	
	while(awal<=akhir){
		if(angka[tengah]<cari){
			awal=tengah+1;
			tengah=(awal+akhir)/2;
		}else if(angka[tengah]==cari){
			hasil=1;
			break;
		}else{
			akhir=tengah-1;
			tengah=(awal+akhir)/2;
		}
	}
	akhirj=clock();
	if(hasil==1){
		printf("\ndata yang anda inginkan sudah ditemukan di-%d yaitu %d",tengah,cari);
	}else{
		printf("\ndata yang anda cari hilang");
	}	
	waktuj=(double)(akhirj-awalj)/CLOCKS_PER_SEC;
	printf("\nwaktu yang dibutuhkan : %.2lf",waktuj);
}

void angka1000(){
	int temp,k=0;
	srand(time(0));
	for(i=0;i<=1000;i++){
		angka[i]=rand()%8999+1000;
	}
	for(i=0;i<1000;i++){
		printf("\ndata yang diacak di-%d : %d",i+1,angka[i]);
		k++;
	}
	printf("\nhasil : %d",k);
}

void angka16000(){
	int temp;
	srand(time(0));
	for(i=0;i<=16000;i++){
		angka[i]=rand()%30000+10000;
	}
	for(i=0;i<16000;i++){
		printf("\ndata yang diacak di-%d : %d",i+1,angka[i]);
	}
}

void angka64000(){
	int temp;
	srand(time(0));
	for(i=0;i<=64000;i++){
		angka[i]=rand();
	}
	for(i=0;i<64000;i++){
		printf("\ndata yang diacak di-%d : %d",i+1,angka[i]);
	}
}

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
    while ((c = getchar()) != '\n' && c != EOF) ;}

void reset(){ 
	char pilih[100]; 
 	keluar2: 
 	fflush(stdin); 
 		printf ("\nIngin Keluar Program? (Y/N)"); 
 		scanf("%s",&pilih); 
 		
 		if (strcmpi(pilih,"y")==0){ 
 			system("cls"); 
  			printf("semoga hari anda menyenangkan!"); 
  			getch(); 
 		} 
 		else if (strcmpi(pilih,"n")==0){ 
  			system("cls"); 
 			main(); 
 		} 
 		else 
  			goto keluar2;  
} 




