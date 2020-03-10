#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i,j,temp,angka[64000],h,n,lo,hi,cari;
double waktu1000,waktu16000,waktu64000,waktuquick,jam1,jam2, waktuins, waktububl, waktu_binary_search, waktusequential;
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
	printf("\n\t\t|3. Keluar						  	|");
	printf("\n\t\tMasukkan pilihan anda : ");
	
	pil=validasi();
	if(pil>3 || pil<0){
		fflush(stdin);
		system ("cls");
		main();
	}
	
	switch(pil){
		case 1:
			printf("\n\t\tPilih banyak data yang ingin digunakan \n\t\t[1]. 1000 \n\t\t[2]. 16000 \n\t\t[3]. 64000 \n\t\t[0]. keluar \n\t\tMasukkan pilihan anda : ");
			pil=validasi();
		switch(pil){
			case 1:
				angka1000();
					printf("\n\nPress any key to continue...\n");
					getch();
					insertion_sort(1000); 
					bubble_sort(1000);
					jam1=clock();
					quicksort(angka,0,1000);
					jam2=clock();
				for(i=0;i<1000;i++){
					printf("%d\t",angka[i]);
				}			
					waktuquick=(double)(jam2-jam1)/CLOCKS_PER_SEC;
					printf("\n\nwaktu yang dibutuhkan QUICK SORT : %.2lf",waktuquick);	
					printf("\n\nwaktu yang dibutuhkan BUBLE SORT: %.2lf",waktuins);
					printf("\n\nwaktu yang dibutuhkan INSRTION SORT: %.2lf\n",waktububl);
					if (waktuquick < waktuins || waktuquick < waktububl)
					{
						printf("\n\nDalam kasus ini penggunaan algoritma QUICK SORT yang paling cepat yaitu %.2lf \n", waktuquick);
					}
					else if (waktuins < waktuquick || waktuins < waktububl)
					{
						printf("\n\nDalam kasus ini penggunaan algoritma BUBLE SORT yang paling cepat yaitu %.2lf \n", waktuins);
					}
					else if (waktububl < waktuquick || waktububl < waktuins)
					{
						printf("\n\nDalam kasus ini penggunaan algoritma INSRTION SORT yang paling cepat yaitu %.2lf \n", waktububl);
					}
					reset();
			break;
			case 2:
				angka16000();
					printf("\n\nPress any key to continue...\n");
					getch();
					insertion_sort(16000);
					bubble_sort(16000);
					jam1=clock();
					quicksort(angka,0,16000);
						jam2=clock();
					for(i=0;i<16000;i++){
						printf("%d\t",angka[i]);
					}			
					waktuquick=(double)(jam2-jam1)/CLOCKS_PER_SEC;
					printf("\n\nwaktu yang dibutuhkan : %.2lf",waktuquick);
					printf("\n\nwaktu yang dibutuhkan BUBLE SORT: %.2lf",waktuins);
					printf("\n\nwaktu yang dibutuhkan INSRTION SORT: %.2lf\n",waktububl);
					if (waktuquick < waktuins || waktuquick < waktububl)
					{
						printf("\n\nDalam kasus ini penggunaan algoritma QUICK SORT yang paling cepat yaitu %.2lf \n", waktuquick);
					}
					else if (waktuins < waktuquick || waktuins < waktububl)
					{
						printf("\n\nDalam kasus ini penggunaan algoritma BUBLE SORT yang paling cepat yaitu %.2lf \n", waktuins);
					}
					else if (waktububl < waktuquick || waktububl < waktuins)
					{
						printf("\n\nDalam kasus ini penggunaan algoritma INSRTION SORT yang paling cepat yaitu %.2lf \n", waktububl);
					}
					reset();
			break;
			case 3:
				angka64000();
					printf("\n\nPress any key to continue...\n");
					getch();
					insertion_sort(64000);
					bubble_sort(64000);
					jam1=clock();
					quicksort(angka,0,64000);
					jam2=clock();
					for(i=0;i<64000;i++){
						printf("%d\t",angka[i]);
					}			
					waktuquick=(double)(jam2-jam1)/CLOCKS_PER_SEC;
					printf("\n\nwaktu yang dibutuhkan : %.2lf",waktuquick);
					printf("\n\nwaktu yang dibutuhkan BUBLE SORT: %.2lf",waktuins);
					printf("\n\nwaktu yang dibutuhkan INSRTION SORT: %.2lf\n",waktububl);
					if (waktuquick < waktuins || waktuquick < waktububl)
					{
						printf("\n\nDalam kasus ini penggunaan algoritma QUICK SORT yang paling cepat yaitu %.2lf \n", waktuquick);
					}
					else if (waktuins < waktuquick || waktuins < waktububl)
					{
						printf("\n\nDalam kasus ini penggunaan algoritma BUBLE SORT yang paling cepat yaitu %.2lf \n", waktuins);
					}
					else if (waktububl < waktuquick || waktububl < waktuins)
					{
						printf("\n\nDalam kasus ini penggunaan algoritma INSRTION SORT yang paling cepat yaitu %.2lf \n", waktububl);
					}
					reset();
			break;
			case 0:
				reset();
			break;
			default:
				system ("cls");
				main();
			break;
		}
		break;

		case 2:
			printf("\n\t\tPilih banyak data yang ingin digunakan \n\t\t[1]. 1000 \n\t\t[2]. 16000 \n\t\t[3]. 64000 \n\t\t[0]. Keluar\n\t\tMasukkan pilihan anda : ");
			pilih=validasi();
			switch(pilih){
			case 1:
				angka1000();
					printf("\n\nmasukkan data yang dicari : ");
					cari=validasi();
					
					for(i=1;i<1000;i++){
						temp=angka[i];
						j=i-1;
						while (j>=0 && angka[j]>temp){
							angka[j+1]=angka[j];
							j=j-1;
							angka[j+1]=temp;
						}
					}
					/*for(i=0;i<1000;i++){
						printf("%d\t",angka[i]);
					}*/

					sequential(1000);
					binary_search(1000);
					printf("\n\nWaktu yang dibutuhkan sequential : %.2lf",waktusequential);
					printf("\n\nWaktu yang dibutuhkan binary_search : %.2lf",waktu_binary_search);
					if (waktusequential < waktu_binary_search)
					{
						printf("\n\nDalam kasus pencarian data penggunaan algoritma SWQUENTIAL yang paling cepat yaitu %.2lf \n", waktusequential);
					} else if (waktusequential > waktu_binary_search)
					{
						printf("\n\nDalam kasus pencarian data penggunaan algoritma BINARY SEARCH yang paling cepat yaitu %.2lf \n", waktu_binary_search);
					}
					reset();
			break;
			case 2:
				angka16000();
					printf("\n\nmasukkan data yang dicari : ");
					cari=validasi();
						
					for(i=1;i<16000;i++){
						temp=angka[i];
						j=i-1;
						while (j>=0 && angka[j]>temp){
							angka[j+1]=angka[j];
							j=j-1;
							angka[j+1]=temp;
						}
					}
					/*for(i=0;i<16000;i++){
						printf("%d\t",angka[i]);
					}*/

					sequential(16000);
					binary_search(16000);

					printf("\n\nWaktu yang dibutuhkan sequential : %.2lf",waktusequential);
					printf("\n\nWaktu yang dibutuhkan binary_search : %.2lf",waktu_binary_search);
					if (waktusequential < waktu_binary_search)
					{
						printf("\n\nDalam kasus pencarian data penggunaan algoritma SWQUENTIAL yang paling cepat yaitu %.2lf \n", waktusequential);
					} else if (waktusequential > waktu_binary_search)
					{
						printf("\n\nDalam kasus pencarian data penggunaan algoritma BINARY SEARCH yang paling cepat yaitu %.2lf \n", waktu_binary_search);
					}
					reset();
			break;
			case 3:
				angka64000();
					printf("\n\nmasukkan data yang dicari : ");
					cari=validasi();

						
						for(i=1;i<64000;i++){
							temp=angka[i];
							j=i-1;
							while (j>=0 && angka[j]>temp){
								angka[j+1]=angka[j];
								j=j-1;
								angka[j+1]=temp;
							}
						}
						/*for(i=0;i<64000;i++){
							printf("%d\t",angka[i]);
						}*/
					sequential(64000);		
					binary_search(64000);
					printf("\n\nWaktu yang dibutuhkan sequential : %.2lf",waktusequential);
					printf("\n\nWaktu yang dibutuhkan binary_search : %.2lf",waktu_binary_search);
					if (waktusequential < waktu_binary_search)
					{
						printf("\n\nDalam kasus pencarian data penggunaan algoritma SWQUENTIAL yang paling cepat yaitu %.2lf \n", waktusequential);
					} else if (waktusequential > waktu_binary_search)
					{
						printf("\n\nDalam kasus pencarian data penggunaan algoritma BINARY SEARCH yang paling cepat yaitu %.2lf \n", waktu_binary_search);
					}
				reset();
			break;
			case 0:
				reset();
			break;
			default:
				system ("cls");
				main();
			break;
		}
		break;
		case 3:
			reset();
		break;
		default:
			system ("cls");
			main();
		break;
	}

	return(0);
}

int insertion_sort(int n){
	double awal,akhir;
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
		printf("%d\t",angka[i]);
	}
	akhir=clock();
	waktuins=(double)(akhir-awal)/CLOCKS_PER_SEC;
	printf("\n\nwaktu yang dibutuhkan : %.2lf\n\n",waktuins);
}

int bubble_sort(int n){
	double awal,akhir;
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
		printf("%d\t",angka[i]);
	}
	waktububl=(double)(akhir-awal)/CLOCKS_PER_SEC;
	printf("\n\nwaktu yang dibutuhkan : %.2lf\n\n",waktububl);
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
	int i=0,ketemu=0;
	double awal,akhir;
	
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
		printf("\n\nData yang kamu cari sudah ditemukan di index ke-%d yaitu %d",i+1,angka[i]);
	}else{
		printf("\n\nData yang anda cari tidak ada");
	}
	waktusequential=(double)(akhir-awal)/CLOCKS_PER_SEC;
	printf("\n\nwaktu yang dibutuhkan : %.2lf\n\n",waktusequential);
	
}

void binary_search(int n){
	int awal=0,akhir=n-1,hasil=0,tengah;
	double awalj,akhirj;
	
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
		printf("\n\nData yang anda inginkan sudah ditemukan di index ke-%d yaitu %d",tengah,cari);
	}else{
		printf("\n\nData yang anda cari tidak ada dalam ");
	}	
	waktu_binary_search=(double)(akhirj-awalj)/CLOCKS_PER_SEC;
	printf("\n\nwaktu yang dibutuhkan : %.2lf\n\n",waktu_binary_search);
	
}

void angka1000(){
	int temp,k=0;
	srand(time(0));
	for(i=0;i<=1000;i++){
		angka[i]=rand()%9999;
	}
	for(i=0;i<1000;i++){
		printf("%d\t",angka[i]);
		k++;
	}
	printf("\nhasil : %d",k);
}

void angka16000(){
	int temp;
	srand(time(0));
	for(i=0;i<=16000;i++){
		angka[i]=rand()%99999;
	}
	for(i=0;i<16000;i++){
		printf("%d\t",angka[i]);
	}
}

void angka64000(){
	int temp;
	srand(time(0));
	for(i=0;i<=64000;i++){
		angka[i]=rand()%99999;
	}
	for(i=0;i<64000;i++){
		printf("%d\t",angka[i]);
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
  			printf("\t\t|---------------------------------------------------------------|");
			printf("\n\t\t|						  		|");
			printf("\n\t\t|\t	TERIMAKASI TELAH MENGGUNAKAN PROGRAM	 	|");
			printf("\n\t\t|\t\t PENGURUTAN DAN PENCARIAN DATA			|");
			printf("\n\t\t|						  		|");
			printf("\n\t\t|---------------------------------------------------------------|");
			
 		} 
 		else if (strcmpi(pilih,"n")==0){ 
  			system("cls"); 
 			main(); 
 		} 
 		else 
  			goto keluar2;  
} 




