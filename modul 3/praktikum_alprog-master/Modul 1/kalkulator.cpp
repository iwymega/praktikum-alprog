#include <iostream>
#include <stdlib.h>
using namespace std;

float tambah(float a, float b);
float kurang(float a, float b);
float kali(float a, float b);
float bagi(float a, float b);
int mod(float a, float b);
void menu();


int main(){
    menu();
    return 0;
}

void menu(){
    float x,y;
    int menu;
    char again;

    do{
        system("cls");
        cout << "Kalkulator ne bro. Pilih menu malu : " << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Sisa hasil bagi" << endl;
        cout << "Pilihan > "; cin >> menu;
        cout << "Masukkan bilangan yang akan di operasikan" << endl;
        cin >> x >> y;
        switch(menu){
            case 1:{
                cout << tambah(x,y) << endl;
                cout << "Hitung lagi [y/t] > "; cin >> again;
                break;
            }

            case 2:{
                cout << kurang(x,y) << endl;
                cout << "Hitung lagi [y/t] > "; cin >> again;
                break;
            }

            case 3:{
                cout << kali(x,y) << endl;
                cout << "Hitung lagi [y/t] > "; cin >> again;
                break;
            }

            case 4:{
                cout << bagi(x,y) << endl;
                cout << "Hitung lagi [y/t] > "; cin >> again;
                break;
            }

            case 5:{
                cout << mod(x,y) << endl;
                cout << "Hitung lagi [y/t] > "; cin >> again;
                break;
            }
        }
    }while(again == 'y' || again == 'Y');
}

float tambah(float a, float b){
    float c;

    c=a+b;
    return c;
}

float kurang(float a, float b){
    float c;

    c=a-b;
    return c;
}

float kali(float a, float b){
    float c;

    c=a*b;
    return c;
}

float bagi(float a, float b){
    float c;

    c=a/b;
    return c;
}

int mod(float a, float b){
    int c,x,y;
    x=(int)a; //typecasting
    y=(int)b;

    c=x%y;
    return c;
}