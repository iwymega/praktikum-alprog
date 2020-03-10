#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 


#define BUB 10
#define INSR 7

void shorting();
void searching();
int validmenu ();


//VARIABLE GLOBAL

/*main*/
int main(){
	int menu, menu1, menu2;
	char charpilihan;

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
	
	printf("\n\n\t\tMasukkan disini :						");

	if(scanf("%d%c", &menu, &charpilihan) != 2 || charpilihan != '\n'){
		
		fflush(stdin);
		system ("cls");
		printf("%d",main());
  	}	
  	return 0;
}
/*end menu*/

/*validasi*/
/*int validmenu (){
	int number;
    char word;
    
	if (scanf("%d%c",&number,&word)!= 2  || word != '\n' || word == ','){
        clear();
        return validmenu;
    } else {
    	return number;
	}
}*/
/*end validasi*/

/*procedure*/
void shorting(){
	printf("hello word\n");
}

void searching(){
	printf("hello word\n");
}
/*end procedure*/


