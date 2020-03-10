#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;


const float PI = 3.14; // nilai Phi


float LuasPersegiPanjang(float a, float b); // a = sisi datar, b = sisi tegak
float LuasSegitigaSembarang(float a, float b, float c); // a = sisi segitiga, b = sisi segitiga, c = sisi segitiga
float LuasLingkaran(float r); // r = jari-jari
float LuasTrapesium(float a, float b, float t); // a = sisi atas, b = sisi bawah, t = tinggi trapesium
float LuasJajargenjang(float a, float b, float t); // a = alas, b = sisi miring, t = tinggi


float KllPersegiPanjang(float a, float b); // a = sisi datar, b = sisi tegak
float KllSegitigaSembarang(float a, float b, float c); // a = sisi segitiga, b = sisi segitiga, c = sisi segitiga
float KllLingkaran(float r); // r = jari-jari
float KllTrapesium(float a, float b, float t); // a = sisi atas, b = sisi bawah, t = tinggi trapesium
float KllJajargenjang(float a, float b, float t); // a = alas, b = sisi miring, t = tinggi

void menu();

int main(){
       menu();

       return 0;
}

void menu(){
       float x,y,z;
       int menu;
       char again;

       do{
              system("cls");
              cout << "Menghitung Luas dan Keliling" << endl;
              cout << "1. Persegi Panjang" << endl;
              cout << "2. Segitiga Sembarang" << endl;
              cout << "3. Lingkaran" << endl;
              cout << "4. Trapesium" << endl;
              cout << "5. Jajargenjang" << endl;
              cout << "Pilihan > "; cin >> menu;

              switch(menu){
                  case 1:{
                        cout << "Masukkan Panjang  > "; cin >> x;
                        cout << "Masukkan Lebar    > "; cin >> y;
                        cout << "Luas              : " << LuasPersegiPanjang(x,y) << endl;
                        cout << "Keliling          : " << KllPersegiPanjang(x,y) << endl;
                        cout << "Hitung lagi [y/t] > "; cin >> again;
                        break;
                  }

                  case 2:{
                        cout << "Masukkan Sisi A   > "; cin >> x;
                        cout << "Masukkan Sisi B   > "; cin >> y;
                        cout << "Masukkan Sisi C   > "; cin >> z;
                        cout << "Luas              : " << LuasSegitigaSembarang(x,y,z) << endl;
                        cout << "Keliling          : " << KllSegitigaSembarang(x,y,z) << endl;
                        cout << "Hitung lagi [y/t] > "; cin >> again;
                        break;
                  }

                  case 3:{
                        cout << "Masukkan Jari-Jari  > "; cin >> x;
                        cout << "Luas                : " << LuasLingkaran(x) << endl;
                        cout << "Keliling            : " << KllLingkaran(x) << endl;
                        cout << "Hitung lagi [y/t]   > "; cin >> again;
                        break;
                  }

                  case 4:{
                        cout << "Masukkan Sisi Atas  > "; cin >> x;
                        cout << "Masukkan Sisi Bawah > "; cin >> y;
                        cout << "Masukkan Tinggi     > "; cin >> z;
                        cout << "Luas                : " << LuasTrapesium(x,y,z) << endl;
                        cout << "Keliling            : " << KllTrapesium(x,y,z) << endl;
                        cout << "Hitung lagi [y/t]   > "; cin >> again;
                        break;
                  }

                  case 5:{
                        cout << "Masukkan Alas        > "; cin >> x;
                        cout << "Masukkan Sisi Miring > "; cin >> y;
                        cout << "Masukkan Tinggi      > "; cin >> z;
                        cout << "Luas                 : " << LuasJajargenjang(x,y,z) << endl;
                        cout << "Keliling             : " << KllJajargenjang(x,y,z) << endl;
                        cout << "Hitung lagi [y/t]    > "; cin >> again;
                        break;
                  }
              }
       }while(again == 'y' || again == 'Y');
}

// Persegi Panjang
float LuasPersegiPanjang(float a, float b){
       float l; //luas

       l = a*b;
       return l;
}

float KllPersegiPanjang(float a, float b){
       float k; //keliling

       k = 2*(a+b);
       return k;
}


//Segitiga Sembarang
float LuasSegitigaSembarang(float a, float b, float c){
       float l, s;
       /*
       l = luas
       s = 0.5 * keliling
       */

       s = 0.5 * (a+b+c);
       l = sqrt(s*(s-a)*(s-b)*(s-c));
       return l;
}

float KllSegitigaSembarang(float a, float b, float c){
       float k; //keliling

       k = a+b+c;
       return k;
}


//Lingkaran
float LuasLingkaran(float r){
       float l; //luas

       l = PI*r*r;
       return l;
}

float KllLingkaran(float r){
       float k; //keliling

       k = 2*PI*r;
       return k;
}


//Trapesium
float LuasTrapesium(float a, float b, float t){
       float l; //luas

       l = ((a+b)*t)/2;
       return l;
}

float KllTrapesium(float a, float b, float t){
       float k; //keliling
       float x,z;

       /*
                a
           ___________
          /|          \
       z / |t          \
        /__|____________\
         x   
                b

       */

       x = (b - a)/2;
       z = sqrt(x*x + t*t); //mencari nilai sisi miring
       k = a + b + ( 2*z );

       return k;
}


// Jajargenjang
float LuasJajargenjang(float a, float b, float t){
       float l; //luas

       l = a*t;
       return l;
}

float KllJajargenjang(float a,  float b, float t){
       float k; //keliling

       /*
          _____________
         /############/   |
        /############/ b  | t
       /____________/   __|
              a
       
       */

      k = 2*(a+b);
      return k;
}

