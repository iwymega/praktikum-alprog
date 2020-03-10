#include <stdio.h>
#include <stdbool.h>

#define INSR 7

int intArray[INSR] = {4,6,3,2,1,9,7};

void printline(int count) {
   int i;
	
   for(i = 0;i < count-1;i++) {
      printf("=");
   }
	
   printf("=\n");
}

void display() {
   int i;
   printf("[");
	
   // navigasi melalui semua item
   for(i = 0;i < INSR;i++) {
      printf("%d ",intArray[i]);
   }
	
   printf("]\n");
}

void insertionSort() {

   int valueToInsert;
   int holePosition;
   int i;
  
   // loop melalui semua angka
   for(i = 1; i < INSR; i++) { 
	
      // pilih nilai yang akan dimasukkan
      valueToInsert = intArray[i];
		
      // pilih posisi lubang di mana nomor yang akan dimasukkan
      holePosition = i;
		
      // periksa apakah sebelumnya tidak. lebih besar dari nilai yang akan dimasukkan
      while (holePosition > 0 && intArray[holePosition-1] > valueToInsert) {
         intArray[holePosition] = intArray[holePosition-1];
         holePosition--;
      }

      if(holePosition != i) {
         // masukkan nomor pada posisi lubang
         intArray[holePosition] = valueToInsert;
      }	
   }  
}

void main() {
   printf("Input Array: ");
   display();
   printline(50);
   insertionSort();
   printf("Output Array: ");
   display();
   printline(50);
}
