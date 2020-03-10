#include <stdio.h>
#include <stdbool.h>

#define BUB 10

int list[BUB] = {1,8,4,6,0,3,5,2,7,9};

void display() {
   int i;
   printf("[");
	
   // navigasi melalui semua item
   for(i = 0; i < BUB; i++) {
      printf("%d ",list[i]);
   }
	
   printf("]\n");
}

void bubbleSort() {
   int temp;
   int i,j;
	
   bool swapped = false;
   
   // loop melalui semua angka
   for(i = 0; i < BUB-1; i++) { 
      swapped = false;
		
      // loop melalui angka yang jatuh di depan
      for(j = 0; j < BUB-1-i; j++) {

         // periksa apakah nomor berikutnya lebih rendah dari no saat ini
         //   menukar angka
         //  (Menggembungkan angka tertinggi)
			
         if(list[j] > list[j+1]) {
            temp = list[j];
            list[j] = list[j+1];
            list[j+1] = temp;

            swapped = true;
         }
      }
      // jika tidak ada nomor yang ditukar artinya
      //   Array diurutkan sekarang, break loop.
      if(!swapped) {
         break;
      }
   }
}

void main() {
   printf("Input Array: ");
   display();
   printf("\n");
	
   bubbleSort();
   printf("\nOutput Array: ");
   display();
}
