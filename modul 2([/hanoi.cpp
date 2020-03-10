#include <stdio.h>
#include <stdlib.h>
int validasi();
void clear_buffer();

int main(void){
    int langkah;
    void hanoi(int n, char a, char b, char c);
	printf("Masukan jumlah cakram = ");
	langkah = validasi();
    
    printf("Langkah-langkah pemindahan cakram:\n");
    hanoi(langkah,'1','2','3');
    system("pause");
    return 0;
}
       
void hanoi(int n, char x, char y, char z){
	if (n==1)
    printf("Pindahkan cakram paling atas dari tiang %c ke tiang   %c\n",x, z);  
	else   {
    	hanoi(n-1,x,z,y);
        hanoi(1,x,y,z);
        hanoi(n-1,y,x,z);
    }
}

int validasi(){
	int num;
    char chara;
    if (scanf("%d%c",&num,&chara)!= 2  || chara != '\n' || chara == ','|| chara == '.'){
		clear_buffer();
        
        printf("Input anda salah! Silahkan Periksa Kembali : \t\t");
        return validasi();
    } 
    else {
        return num;
    }
}

void clear_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) ;
}
