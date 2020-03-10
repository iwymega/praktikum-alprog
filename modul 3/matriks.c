#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void inputmatriks();
void penjumlahan();
void transpose();
void perkalian();
void header();
double input();
void reset();
 
int pil;
int a[10][10];
int b[10][10];
int c[10][10];
int i,j,h,baris,baris2,kolom,kolom2,sum;
 
int main(){
      printf("=====================================\n");
      printf("||    PROGRAM OPERASI MATRIKS      ||\n");
      printf("||         Kelompok 27             ||\n");
      printf("=====================================\n");
      printf ("[1]. Perkalian\n");
      printf ("[2]. Penjumlahan\n");
      printf ("[3]. Transpose\n");
      printf ("[4]. Keluar\n");
      printf("pilihan:");
      pil = input();
 
            if (pil==1 || pil==2 || pil==3){
                  inputmatriks();
            }
            else if (pil==4){
                  return 0;
            }
            else {
                  printf ("Pilihan salah!");
                  getch();
                  system("cls");
                  main();
            }
      }
 
double input(){
    double num;
    char chara;
    if (scanf("%lf%c",&num,&chara)!= 2 || num<=0  || chara != '\n' || chara == ','){
        fflush(stdin);
        printf("Input invalid! Masukkan angka yang benar : ");
        return input();
    } else {
        return num;
    }
}
 
void reset(){
    int valid_reset;
    char parameter[1];
    printf("Kembali mencari?[Y/N] ");
    gets(parameter);
    if (!(strcmp(parameter,"Y")) || !(strcmp(parameter,"y"))){
        system("cls");
        main();
    } else if (!(strcmp(parameter,"N")) || !(strcmp(parameter,"n"))){
        return;
    } else {
        system("cls");
        printf("Invalid Input !\n\a");
        reset();
    }
}
 
void inputmatriks(){
      system("cls");
      if (pil==1 || pil==2){
            if (pil==1)
                  printf ("PERKALIAN MATRIKS\n\n");
            else
                  printf ("PENJUMLAHAN MATRIKS\n\n");
         printf("masukkan baris matriks A : ");
         baris=input();
         printf("masukkan kolom matriks A : ");
         kolom=input();
         printf("masukkan baris matriks B : ");
         baris2=input();
         printf("masukkan kolom matriks B : ");
         kolom2=input();
      }
      if (pil==1 && kolom != baris2 || pil==1 && kolom2 != baris ){
            printf("invalid baris dan kolom!");
            getch();
            system("cls");
            printf ("Perkalian Matriks\n");
            inputmatriks();
      }
    else if (pil == 2 && baris != baris2 || pil==2 && kolom!= kolom2){
            printf("invalid baris dan kolom!");
            getch();
            system("cls");
            printf ("Pertambahan Matriks\n");
            inputmatriks();
      }
      else if (pil==2||pil==1){
            i=0;j=0;
            system("cls");
            header();
         do{
                do{
                      printf("masukkan nilai matrik A %d,%d\t",i+1,j+1);
                        a[i][j]=input();
                        j++;
                  } while(j<kolom);
                  i++;
            j=0;
            } while (i<baris);
            printf ("\n");
            i=0;j=0;
            do{
                  do{
                        printf("masukkan nilai matrik B %d,%d\t",i+1,j+1);
                        b[i][j]=input();
                        j++;
                  }while(j<kolom2);
                  i++;
                  j=0;
            }while(i<baris2);
   if(pil==2)
            penjumlahan();
      else
            perkalian();
}
   else if (pil==3){
            i=0; j=0;
            printf ("TRANSPOSE MATRIKS\n\n");
            printf("masukkan baris matriks A:");
            baris=input();
            printf("masukkan kolom matriks A:");
            kolom = input();
            system("cls");
            header();
         do{
                do{
                      printf("masukkan nilai matrik A %d,%d\t",i+1,j+1);
                        a[i][j]=input();
                        j++;
                  }while(j<kolom);
                  i++;
            j=0;
            }while (i<baris);
   transpose();
   }
}
 
void perkalian(){
      for(i=0;i<baris;i++){
        for(j=0;j<kolom2;j++){
            for(i=0;i<baris;i++){
                for(j=0;j<kolom2;j++){
                    sum=0;
                    for(h=0;h<kolom;h++){
                        sum=sum+a[i][h]*b[h][j];
                    }
                  c[i][j]=sum;
                }
            }
        }
    }
    system("cls");
      header();
      printf("Matriks A :\n");
      for(i=0; i<baris; i++){
            for(j=0; j<kolom; j++){
                  printf("%d\t ", a[i][j]);
            }
            printf("\n");
      }
      printf("\nMatriks B :\n");
      for(i=0; i<baris2; i++){
            for(j=0; j<kolom2; j++){
                  printf("%d\t ", b[i][j]);
            }
            printf("\n");
      }
    printf("\nHasil Perkalian Matriks:\n");
    for(i=0;i<baris;i++){
        for(j=0;j<kolom2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    reset();
}
 
void penjumlahan(){
      system("cls");
      header();
      printf("Matriks A :\n");
      for(i=0; i<baris; i++){
            for(j=0; j<kolom; j++){
                  printf("%d\t ", a[i][j]);
            }
            printf("\n");
      }
      printf("\nMatriks B :\n");
      for(i=0; i<baris2; i++){
            for(j=0; j<kolom2; j++){
                  printf("%d\t ", b[i][j]);
            }
            printf("\n");
      }
      printf ("\nHasil Penjumlahan Matriks:\n");
      for(i=0;i<baris;i++){
       for(j=0;j<kolom;j++){
           c[i][j]=a[i][j]+b[i][j];
       }
   }
   for(i=0;i<baris;i++){
       for(j=0;j<kolom;j++){
           printf("%d\t",c[i][j]);
       }
      printf("\n");
   }
   reset();
}
 
void transpose(){
      system("cls");
      header();
      printf("Matriks :\n");
      for(i=0; i<baris; i++){
      for(j=0; j<kolom; j++){
      printf("%2d\t ", a[i][j]);
      }
      printf("\n");
      }
      printf ("\nHasil Transpose:\n");
      int hasil[10][10];
      for(i=0;i<kolom;i++){
       for(j=0;j<baris;j++){
           hasil[i][j]=a[j][i];
           printf("%4d\t",hasil[i][j]);
       }
       printf ("\n");
   }
      reset();
}
 
void header(){
      if (pil==1)
            printf ("PERKALIAN MATRIKS ORDO %d x %d DENGAN %d x %d\n\n",baris,kolom,baris2,kolom2);
      else if (pil==2)
            printf ("PERTAMBAHAN MATRIKS ORDO %d x %d DENGAN %d x %d\n\n",baris,kolom,baris2,kolom2);
      else
            printf ("TRANSPOSE MATRIKS ORDO %d x %d\n\n",baris,kolom);
}