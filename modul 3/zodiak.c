#include<stdio.h>

 

double validasi();

void clear_buffer();

 

int main(){

      int bulan, tanggal;

      char ulang;

     

      while(1){

            printf("=======================================\n");

            printf("====          WELLCOME TO          ====\n");

            printf("====            Program            ====\n");

            printf("===         Penghitung Zodiak       ===\n");

            printf("=====         Kelompok 27         =====\n");

            printf("=======================================\n\n\n\n\n");

            printf("Masukkan Tanggal Kelahiran Anda :"); tanggal=validasi();

            printf("Masukkan Bulan Kelahiran Anda :"); bulan=validasi();

            printf("\n\n");

            if(tanggal>20 && tanggal<=31 && bulan==3 || tanggal>0 && tanggal<=19 && bulan==4){

                  printf("Zodiak Anda Adalah ARIES\n");

                  printf("Jangkauan Tanggal : 21 Maret - 19 April\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>19 && tanggal<=30 && bulan==4 || tanggal>0 && tanggal<=20 && bulan==5){

                  printf("Zodiak Anda Adalah TAURUS\n");

                  printf("Jangkauan Tanggal : 20 April - 20 Mei\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>20 && tanggal<=31 && bulan==5 || tanggal>0 && tanggal<=20 && bulan==6){

                  printf("Zodiak Anda Adalah GEMINI\n");

                  printf("Jangkauan Tanggal : 21 Mei - 20 Juni\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>20 && tanggal<=30 && bulan==6 || tanggal>0 && tanggal<=22 && bulan==7){

                  printf("Zodiak Anda Adalah CANCER\n");

                  printf("Jangkauan Tanggal : 21 Juni - 22 Juli\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>22 && tanggal<=31 && bulan==7 || tanggal>0 && tanggal<=22 && bulan==8){

                  printf("Zodiak Anda Adalah LEO\n");

                  printf("Jangkauan Tanggal : 23 Juli - 22 Agustus\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>22 && tanggal<=31 && bulan==8 || tanggal>0 && tanggal<=22 && bulan==9){

                  printf("Zodiak Anda Adalah VIRGO\n");

                  printf("Jangkauan Tanggal : 23 Agustus - 22 September\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>22 && tanggal<=30 && bulan==9 || tanggal>0 && tanggal<=22 && bulan==10){

                  printf("Zodiak Anda Adalah LIBRA\n");

                  printf("Jangkauan Tanggal : 23 September - 22 Oktober\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>22 && tanggal<=31 && bulan==10 || tanggal>0 && tanggal<=21 && bulan==11){

                  printf("Zodiak Anda Adalah SCORPIO\n");

                  printf("Jangkauan Tanggal : 23 Oktober - 21 November\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>21 && tanggal<=30 && bulan==11 || tanggal>0 && tanggal<=21 && bulan==12){

                  printf("Zodiak Anda Adalah SAGITARIUS\n");

                  printf("Jangkauan Tanggal : 22 November - 21 Desember\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>21 && tanggal<=31 && bulan==12 || tanggal>0 && tanggal<=19 && bulan==1){

                  printf("Zodiak Anda Adalah CAPRICORN\n");

                  printf("Jangkauan Tanggal : 22 Desember - 19 Januari\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>19 && tanggal<=31 && bulan==1 || tanggal>0 && tanggal<=18 && bulan==2){

                  printf("Zodiak Anda Adalah AQUARIUS\n");

                  printf("Jangkauan Tanggal : 20 Januari - 18 Februari\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else if(tanggal>18 && tanggal<=29 && bulan==2 || tanggal>0 && tanggal<=20 && bulan==3){

                  printf("Zodiak Anda Adalah PISCES\n");

                  printf("Jangkauan Tanggal : 19 Februari - 20 Maret\n");

                  system("pause");

                  printf("Apakah Anda Ingin Mengulang Menghitung ZOdiak? (y/t)");

                  scanf("%c", &ulang);

                  while(1){

                        if(ulang=='y'){

                              system("cls");

                              break;

                        }

                        else if(ulang=='t'){

                              system("cls");

                              printf("Terima Kasih Telah Menggunakan Program Kami");

                              break;

                        }

                        else{

                              printf("Input Yang Anda Masukkan Salah");

                              system("cls");

                        }

                  }

            }

            else{

                  printf("Tanggal dan Bulan Yang Anda Masukkan Salah\n");

                  system("pause");

                  system("cls");

            }

            if(ulang=='t'){

                  break;

            }

      }

return 0;  

}

 

double validasi(){

      int num;

      char chara;

     

      if (scanf("%d%c",&num,&chara)!= 2  || chara != '\n' || chara == ','){

          clear_buffer();

          printf("Input invalid! Masukkan angka : ");

          return validasi();

      }

      else if(num<=0){

            clear_buffer();

          printf("Input invalid! Masukkan angka : ");
}
}
