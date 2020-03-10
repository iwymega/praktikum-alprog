#include <stdio.h>
#include <stdbool.h>

#define MAX 10

int list[MAX] = {1,8,4,6,0,3,5,2,7,9};

void display() {
   int i;
   printf("[");
	
   // navigate through all items 
   for(i = 0; i < MAX; i++) {
      printf("%d ",list[i]);
   }
	
   printf("]\n");
}

void bubbleSort() {
   int temp;
   int i,j;
	
   bool swapped = false;
   
   // loop through all numbers 
   for(i = 0; i < MAX-1; i++) { 
      swapped = false;
		
      // loop through numbers falling ahead 
      for(j = 0; j < MAX-1-i; j++) {

         // check if next number is lesser than current no
         //   swap the numbers. 
         //  (Bubble up the highest number)
			
         if(list[j] > list[j+1]) {
            temp = list[j];
            list[j] = list[j+1];
            list[j+1] = temp;

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

void main() {
   printf("Input Array: ");
   display();
   printf("\n");
	
   bubbleSort();
   printf("\nOutput Array: ");
   display();
}