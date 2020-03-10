#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void menu();
void binaryToDecimal();
void decimalToBinary();
void clear_buffer();
void reset();
double input();

int main(){
    menu();
    return 0;

}

void menu(){

    int choice;
	printf("===============================\n");
	printf("||      PROGRAM KONVERSI     ||\n");
	printf("||         Kelompok 27       ||\n");
	printf("===============================\n");
    printf("[1]Biner ke Desimal\n[2]Desimal ke Biner\nPilihan :");
    choice = input();
    if (choice>2 || choice < 1){
        system("cls");
        printf("Input invalid !\n");
        menu();
    } else {
        switch(choice){
            case 1:
                binaryToDecimal();
                break;
            case 2 :
                decimalToBinary();
                break;
        }
    }
    reset();
}

void binaryToDecimal(){
    char *p = malloc( sizeof(char) * (4) );
    int len = 0;
	int i=1;
    int sum = 0;
    clear_buffer();
    printf("Masukkan bilangan biner : ");
    do{
        scanf("%c",&p[len]);
        len++;
    } while(p[len-1] != '\n');
    p[len-1] = '\0';
    int count = len-2;
    for ( i = 0 ; i < len-1 ; i ++ ){
        if (p[i] == '1' || p[i] == '0' ){
            continue;
        } else {
            printf("Bilangan tidak valid!");
            return;
        }
    }
    for (i = 0 ; i < len ; i ++ ){
        if (p[i] == '1'){
            sum = sum + pow(2,count);
        }
        count--;
    }
    printf("Nilai Desimal : %d",sum);
}

void decimalToBinary(){
    double angka;
    int sum = 0;
	int i=1;
    int count = 0;
    int *array;
    array = malloc(sizeof(int)*10);
    printf("Masukkan Angka Desimal : ");
    angka = input();
    printf("Nilai Biner : ");
    if (angka == 0 || angka == 1){
        printf("%d",angka);
    } else {
        int sumDiv = (int)angka;
        int sumMod = (int)angka;
        while(sumDiv != 0){
            sumMod = sumDiv % 2;
            sumDiv = sumDiv / 2;
            array[count] = sumMod;
            count ++;
        }
        int bagi = 0;
        for (i = count-1; i >= 0; i--){
            printf("%d",array[i]);
            bagi++;
            if (bagi%4 == 0){
                printf(" ");
            }
        }
        free(array);
    }
}

void clear_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) ;//end of file
}

void reset(){
    int valid_reset;
    char parameter[1];
    printf("\n\n\t\t     Kembali ke menu awal?[Y/N] ");
    gets(parameter);
    if (!(strcmp(parameter,"Y")) || !(strcmp(parameter,"y"))){
        system("cls");
        menu();
    } else if (!(strcmp(parameter,"N")) || !(strcmp(parameter,"n"))){
        return;
    } else {
        system("cls");
        printf("\t\t            Invalid Input !\n\a");
        reset();
    }
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

