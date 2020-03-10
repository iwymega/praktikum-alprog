#include <stdio.h>
#define maks 100

int kali_matriks(int x, int y, int z, int matriks_1[maks][maks] , int matriks_2[maks][maks]);

int main()
{
      int matriks1[maks][maks], matriks2[maks][maks];
      int bil, i,j, x, y, a,b;
 
      printf("Masukkan ukuran matriks 1 : ");
      scanf("%d %d",&x, &y);      
 
      printf("nnMatriks Pertama : n");
      for (i=0;i<x;i++){
          for (j=0;j<y;j++){
              printf("Matriks [%d][%d] : ",i,j);
              scanf("%d",&matriks1[i][j]);
              getchar();   
          }
      } 
 
      printf("nnMasukkan ukuran matriks 2 : ");
      scanf("%d %d",&a, &b);      
 
      printf("nnMatriks Kedua : n");
      for (i=0;i<a;i++){
          for (j=0;j<b;j++){
              printf("Matriks [%d][%d] : ",i,j);
              scanf("%d",&matriks2[i][j]) ; 
              getchar();              
          }
      }          
      //jumlah_matriks(x,matriks1, matriks2);
      kali_matriks(x,a,b, matriks1, matriks2);
      return 0;
}
 
int kali_matriks(int x, int y, int z, int matriks_1[maks][maks] , int matriks_2[maks][maks])
{
      int i, j, k, matriks_3[maks][maks];
      printf("nnPerkalian Matriks : \n");
      for (i=0;i<x;i++){
          for (j=0;j<z;j++){              
              matriks_3[i][j] = 0;
              for (k=0;k<y;k++)
              {
                   matriks_3[i][j] += matriks_1[i][k] * matriks_2[k][j];
              }
              printf("%d", matriks_3[i][j]);            
              if (j == (z-1)) printf("\n");
              else printf(" ");
          }
      }
}