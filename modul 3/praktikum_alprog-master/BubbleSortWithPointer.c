#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define MAX 64000

void bubbleSort1(int arr[], int size);
void bubbleSort2(int *arr, int size);
void displayPo(int *nonArr, int size);
void displayAr(int arr[], int size);
void sorting(int size);
int validasi(char* x); // validasi input dari user
int konversi(char* x); // konversi dari string ke integer

int main() {
       int size;
       int x;
       char input[10];

       loop1:
       printf("Masukkan size > "); scanf("%s", &input);
       if(validasi(input) == 1 && konversi(input) <= 64000){
              size = konversi(input);
              sorting(size);
              
       }
       else if(konversi(input) > 64000){
              printf("Ukuran melebihi 64000 angka\n");
              goto loop1;
       }
       else{
              printf("Input anda salah!\n");
              goto loop1;
       }

       return 0;
}

void sorting(int size){
       int i, n;
       time_t t;
       clock_t start_t, end_t;
       double t_array, t_pointer;
       int *nonArr = malloc(MAX * sizeof(int));
       int arrAcak[MAX];
       int arr[MAX];

       /* Intializes random number generator */
       srand((unsigned) time(&t));

       //assign random number to arrAcak[]
       for(i = 0 ; i < size ; i++ ) {
              arrAcak[i] = (rand() % size);
       }

       for(i = 0; i < size ; i++){
              arr[i] = arrAcak[i];
       }

       for(i = 0; i < size ; i++){
              *(nonArr + i) = arrAcak[i];
       }

       printf("Array angka acak\n");
       displayAr(arrAcak, size);

       //bubbleSort1()
       start_t = clock();

       bubbleSort1(arr, size);
       printf("\nBubbleSort dengan array\n");
       displayAr(arr, size);

       end_t = clock();
       t_array = ((double)(end_t - start_t)) / CLOCKS_PER_SEC;

       //bubbleSort2()
       start_t = clock();

       bubbleSort2(nonArr, size);
       printf("\nBubbleSort dengan pointer\n");
       displayPo(nonArr, size);

       end_t = clock();
       t_pointer = ((double)(end_t - start_t)) / CLOCKS_PER_SEC;

       printf("\nTotal time taken by CPU for Array   : %.3f second\n\n", t_array  );
       printf("\nTotal time taken by CPU for Pointer : %.3f second\n\n", t_pointer  );
       
}

void bubbleSort1(int arr[], int size) {
       int temp;
       int i,j;
	
       bool swapped = false;
   
       // loop through all numbers 
       for(i = 0; i < size-1; i++) { 
              swapped = false;
		
       // loop through numbers falling ahead 
              for(j = 0; j < size-1-i; j++) {

              // check if next number is lesser than current no
              //   swap the numbers. 
              //  (Bubble up the highest number)
			
                     if(arr[j] > arr[j+1]) {
                            temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;

                            swapped = true;
                     }
              }
       // if no number was swapped that means 
       //   array is sorted now, break the loop. 
              if(!swapped) {
                     break;
              }
       }
}

void bubbleSort2(int *arr, int size) {
       int temp;
       int i,j;
	
       bool swapped = false;
   
       // loop through all numbers 
       for(i = 0; i < size-1; i++) { 
              swapped = false;
		
       // loop through numbers falling ahead 
              for(j = 0; j < size-1-i; j++) {

              // check if next number is lesser than current no
              //   swap the numbers. 
              //  (Bubble up the highest number)
			
                     if(*(arr + j) > *(arr + (j + 1))) {
                            temp = (*(arr + j));
                            (*(arr + j)) = (*(arr + (j + 1)));
                            (*(arr + (j + 1))) = temp;
                            swapped = true;
                     }
              }
       // if no number was swapped that means 
       //   array is sorted now, break the loop. 
              if(!swapped) {
                     break;
              }
       }
}

void displayPo(int *nonArr, int size) {
       int i;
	
       // navigate through all items 
       for(i = 0; i < size; i++) {
              printf("%d\t", (*(nonArr + i)));
       }
       printf("\n\n");	
}

void displayAr(int arr[], int size) {
       int i;

       for(i = 0; i < size; i++) {
              printf("%d\t", arr[i]);
       }
       printf("\n\n");
}

int validasi(char* x){
       int len = strlen(x);
       int valid = 1;

       for(int i = 0; i<len; i++){
              if(x[i] == '.'){
                     continue;
              }
              
              if(!isdigit(x[i])){
                     valid = 0;
                     break;
              }
       }

       return valid;
}

int konversi(char* x){
       int y;

       y = atoi(x);

       return y;
}