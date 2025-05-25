#include<iostream>
using namespace std;

//Fungsi tanpa nilai balikan
void tampilkanPesan(){// deklarasi fungsi kosong tanpa balikan nilai 
    cout<<" === SELAMAT datang di AP 1 ==="<<endl;
}

//Fungsi dengan nilai balikan
int tambah(int a, int b){// deklarasi fungsi tambah dengan balikan nilai a+b ( a dan b sebagai parameter formal) 
    return a+b;
}

//fungsi Overload
int kali(int a,int b){// deklarasi fungsi dengan nilai balikan a x b ( a dan b parameter formal) 
    return a*b;
}
double kali(double a,double b ){// deklarasi fungsi dengan nilai balikan a x b ( a dan b parameter formal) namun dengan tipe double
    return a*b;
    return a*b;
}
//Fungsi rekursif
int faktorial(int n){// fungsi yang memanggil dirinya sendiri 
    if(n==0||n==1){
        return 1;
    }else{
        return n *faktorial(n-1);
    }

}
int main(){
    tampilkanPesan();// memanggil fungsi kosong tampilkanPesan
    int x=5,y=3;
    int hasilTambah =  tambah(x,y);// memanggil fungsi tambah dengan para meter aktual x dan y dan disimpan di variabel hasilTambah
    cout<<"Hasil Penjumlahan  : "<<hasilTambah<<endl;
    cout<<tambah(1,2)<<endl;
    //menggunakan fungsioverload
    int hasilKali1=kali(x,y);
    cout<<"Hasil Perkalian  : "<<hasilKali1<<endl;

    double hasilKali2=kali(5.5,2.0);// fungsi overload, fungsj dengan nama sama namun dengan parameter yang berbeda
    cout<<"Hasil Perkalian : "<<hasilKali2<<endl;

    //Menggunakan fungsi rekursif
    int angka = 5;
    cout<<"Faktorial dari "<<angka<<" adalah "<<faktorial(angka);// memanggil fungsi faktorial yang merupakan fungsi rekursif

}
