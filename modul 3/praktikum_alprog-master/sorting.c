#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define MAX 64000

int arrAcak[MAX];
int arr[MAX];
int partition (int arr[], int low, int high);
int validasi(char* x); // validasi input dari user
int konversi(char* x); // konversi dari string ke integer

void bubbleSort(int size);
void insertionSort(int size);
void swap(int* a, int* b);
void quickSort(int low, int high);
void printArray(int arr[], int size);
void sorting();
void sequential_search(int array[], int size, int n);
void binary_search(int array[], int size, int n);
void searching();
void menu();
void subMenu1();
void subMenu2();


int main(){
       menu();
       
       return 0;
}

void menu(){
       int pilihan;
	char input[10];
       char ulang;
       
       do{
              system("cls");
              printf("\n\n\t\t  MENU");
              printf("\n\n\tSorting dan Searching");
              printf("\n\n\t1. Sorting");
              printf("\n\t2. Searching");
		printf("\n");
		loop:
              printf("\n\tMasukkan pilihan anda : "); scanf("%s", &input);
		if(validasi(input) == 1){ // validasi input berupa bilangan
			pilihan = atoi(input);
		}
		else{
			printf("\tInputan anda mengandung karakter yang tidak valid \n");
			goto loop;
		}

		if(pilihan > 2){ // validasi input tidak melebihi menu
                     printf("\tInputan anda melebihi menu yang tersedia \n");
                     goto loop;
              }
              
              switch(pilihan){
                     case 1:{
                            subMenu1();
                            break;
                     }
                     case 2:{
                            subMenu2();
                            break;
                     }
              }
		end:
              printf("\n\n\tUlangi (y/t)? ");
              scanf("%s", &ulang);
       }while(ulang == 'y' || ulang == 'Y');
}

void subMenu1(){
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
}
void subMenu2(){
	int size;
       int x;
       char input[10];
	int i, n;
	time_t t;

       loop1:
       printf("Masukkan size > "); scanf("%s", &input);
       if(validasi(input) == 1 && konversi(input) <= 64000){
              size = konversi(input);

		/* Intializes random number generator */
		srand((unsigned) time(&t));

		//assign random number to arrAcak[]
		for( i = 0 ; i < size ; i++ ) {
			arrAcak[i] = (rand() % size);
		}

		//assign arrAcak[] to arr[]
		for( i = 0; i < size ; i++){
			arr[i] = arrAcak[i];
		}

		quickSort(0, size-1);
		printf("Bilangan\n\n");
		printArray(arr, size);

              loop2:
              printf("Masukkan bilangan yang akan dicari > "); scanf("%s", &input);
              if(validasi(input) == 1 ){
                     x = konversi(input);
                     searching(size, x);
              }
             
              else{
                     printf("Input anda salah!\n");
                     goto loop2;
              } 
       }
       else if(konversi(input) > 64000){
              printf("Ukuran melebihi 64000 angka\n");
              goto loop1;
       }
       else{
              printf("Input anda salah!\n");
              goto loop1;
       }
}

void sorting(int size){
       int i, n;
       time_t t;
       clock_t start_t, end_t;
       double t_bubble, t_insertion, t_quick;
   
       /* Intializes random number generator */
       srand((unsigned) time(&t));

       //assign random number to arrAcak[]
       for( i = 0 ; i < size ; i++ ) {
              arrAcak[i] = (rand() % size);
       }

       //assign arrAcak[] to arr[]
       for( i = 0; i < size ; i++){
              arr[i] = arrAcak[i];
       }

       printf("Array angka acak\n");
       printArray(arr, size);

       //bubbleSort()
       start_t = clock();

       bubbleSort(size);
       printf("\nBubbleSort\n");
       printArray(arr, size);

       end_t = clock();
       t_bubble = ((double)(end_t - start_t)) / CLOCKS_PER_SEC;

       //assign arrAcak[] to arr[]
       for( i = 0; i < size ; i++){
              arr[i] = arrAcak[i];
       }

       //insertionSort()
       start_t = clock();

       insertionSort(size);
       printf("Insertion Sort\n");
       printArray(arr, size);

       end_t = clock();
       t_insertion = ((double)(end_t - start_t)) / CLOCKS_PER_SEC;

       //assign arrAcak[] to arr[]
       for( i = 0; i < size ; i++){
              arr[i] = arrAcak[i];
       }

       //quickSort()
       start_t = clock();

       quickSort(0, size-1);
       printf("Quick Sort\n");
       printArray(arr, size);

       end_t = clock();
       t_quick = ((double)(end_t - start_t)) / CLOCKS_PER_SEC;
       printf("\nTotal time taken by CPU for Bubble Sort: %.3f second\n\n", t_bubble  );
	printf("\nTotal time taken by CPU for Insertion Sort: %.3f second\n\n", t_insertion  );
	printf("\nTotal time taken by CPU for Quick Sort: %.3f second\n\n", t_quick  );
}

void searching(int size, int x){
       clock_t start_t, end_t;
       double t_sequential, t_binary;

       start_t = clock();
       sequential_search(arr, size, x);
       end_t = clock();
       t_sequential = ((double)(end_t - start_t)) / CLOCKS_PER_SEC;

       start_t = clock();
       binary_search(arr, size, x);
       end_t = clock();
       t_binary = ((double)(end_t - start_t)) / CLOCKS_PER_SEC;

       printf("\nTotal time taken by CPU for Bubble Sort: %.3f second\n\n", t_sequential  );
	printf("\nTotal time taken by CPU for Bubble Sort: %.3f second\n\n", t_binary  );
}

void bubbleSort(int size) {
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

void insertionSort(int size) {

       int valueToInsert;
       int holePosition;
       int i;
  
       // loop through all numbers 
       for(i = 1; i < size; i++) { 
	
              // select a value to be inserted. 
              valueToInsert = arr[i];
                     
              // select the hole position where number is to be inserted 
              holePosition = i;
                    
              // check if previous no. is larger than value to be inserted 
              while (holePosition > 0 && arr[holePosition-1] > valueToInsert) {
                     arr[holePosition] = arr[holePosition-1];
                     holePosition--;
              }

              if(holePosition != i) {
                     // insert the number at hole position 
                     arr[holePosition] = valueToInsert;
              }	
       }  
}

// A utility function to swap two elements
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
 
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
   array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high){
       int pivot = arr[high];    // pivot
       int i = (low - 1);  // Index of smaller element
 
       for (int j = low; j <= high- 1; j++){
              // If current element is smaller than or
              // equal to pivot
              if (arr[j] <= pivot){
                     i++;    // increment index of smaller element
                     swap(&arr[i], &arr[j]);
              }
       }
       swap(&arr[i + 1], &arr[high]);
       return (i + 1);
}
 
/* The main function that implements QuickSort
   arr[] --> Array to be sorted,
   low  --> Starting index,
   high  --> Ending index */
void quickSort(int low, int high){
       if (low < high){
              /* pi is partitioning index, arr[p] is now
              at right place */
              int pi = partition(arr, low, high);
 
              // Separately sort elements before
              // partition and after partition
              quickSort(low, pi - 1);
              quickSort(pi + 1, high);
       }
}
 
/* Function to print an array */
void printArray(int arr[], int size){
       int i;
       for (i=0; i < size; i++)
              printf("%d\t", arr[i]);
       printf("\n");
}

void sequential_search(int array[], int size, int n){
    	int i;
    	for (i = 0; i < size; i++){
        	if (array[i] == n){
			printf("%d ditemukan pada posisi %d.\n", n, i+1);
			break;
        	}
    	}
    	if (i == size){
        	printf("Tidak ditemukan! %d tidak ada pada array.\n", n);
	}
}
/*  End of sequential_search()  */
 
/*  Function for binary search  */
void binary_search(int array[], int size, int n){
	int i, first, last, middle;
	first = 0;
	last = size - 1;
	middle = (first+last) / 2;
 
    	while (first <= last){
        	if (array[middle] < n)
            		first = middle + 1;
        	else if (array[middle] == n) {
            		printf("%d ditemukan pada posisi %d.\n", n, middle+1);
           		break;
        	}
        	else
            		last = middle - 1;
 
        	middle = (first + last) / 2;
    	}
    	if ( first > last )
        	printf("Tidak ditemukan! %d tidak ada pada array.\n", n);
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