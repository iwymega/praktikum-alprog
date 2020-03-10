#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fibonacci(int n);
void arrayRec(int n);
void arrayIter(int n);
void menu();
void clear_buffer();
double input();
void reset();

int main(){
    menu();
    return 0;
}

void menu(){
    double choice;
    int n,check;
	printf("===============================\n");
	printf("||      PROGRAM FIBBONACI    ||\n");
	printf("||         Kelompok 27       ||\n");
	printf("===============================\n");
    printf("[1]Fibonacci Iteratif\n[2]Fibonacci Rekursif\nMasukkan Pilihan : ");
    choice = input();
    if (choice>2 || choice < 1){
           {
                system("cls");
                printf("Input invalid !\n");
                menu();
            }

    } else {
        printf("Masukkan Panjang Deret : ");
        n = input();
        switch((int)choice){
            case 1:
                arrayIter(n);
                break;
            case 2:
                arrayRec(n);
                break;
        }
    }
}

int fibonacci(int n){
    if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else {
       return fibonacci(n-2) + fibonacci(n-1);
    }
}

void arrayRec(int n){
    int array[n];
    int i;
    printf("%d Deret Bilangan Fibonacci : ",n);
    for (i = 1;i <= n; i++){
        array[i] = fibonacci(i);
        printf("%d ",array[i]);
    }
    reset();
}

void arrayIter(int n){
    int array[n];
    int i;
	for ( i = 1 ; i <= n ; i++){
        if(i == 1){
            array[i] = 1;
        } else if (i == 2){
            array[i] = 1;
        } else {
            array[i] = array[i-1] + array[i-2];
        }
        printf("%d ",array[i]);
    }
    reset();
}

double input(){
    double num;
    char chara;
    int check;
    if (scanf("%lf%c",&num,&chara)!= 2  || chara != '\n' || chara == ','){
        clear_buffer();
        printf("Input invalid! Masukkan angka : ");
        return input();
    } else {
        check = ceil(num);
        if (check == num){
            return num;
        } else {
            printf("Input invalid! Masukkan angka bulat : ");
            return input();
        }
    }
}

void clear_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) ;
}
void reset(){
    int valid_reset;
    char parameter[1];
    printf("\n\nKembali menghitung?[Y/N] ");
    gets(parameter);
    if (!(strcmp(parameter,"Y")) || !(strcmp(parameter,"y"))){
        system("cls");
        menu();
    } else if (!(strcmp(parameter,"N")) || !(strcmp(parameter,"n"))){
        return;
    } else {
        system("cls");
        printf("Invalid Input !\n\a");
        reset();
    }
}


