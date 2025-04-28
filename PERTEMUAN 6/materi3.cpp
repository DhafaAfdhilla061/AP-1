#include<iostream>
using namespace std;

//Fungsi tanpa nilai balikan
void tampilkanPesan(){
    cout<<" === SELAMAT datang di AP 1 ==="<<endl;
}

//Fungsi dengan nilai balikan
int tambah(int a, int b){
    return a+b;
}

//fungsi Overload
int kali(int a,int b){
    return a*b;
}
double kali(double a,double b ){
    return a*b;
}
//Fungsi rekursif
int faktorial(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return n *faktorial(n-1);
    }

}
int main(){
    tampilkanPesan();
    int x=5,y=3;
    int hasilTambah =  tambah(x,y);
    cout<<"Hasil Penjumlahan  : "<<hasilTambah<<endl;
    cout<<tambah(1,2)<<endl;
    //menggunakan fungsioverload
    int hasilKali1=kali(x,y);
    cout<<"Hasil Perkalian  : "<<hasilKali1<<endl;

    double hasilKali2=kali(5.5,2.0);
    cout<<"Hasil Perkalian : "<<hasilKali2<<endl;

    //Menggunakan fungsi rekursif
    int angka = 5;
    cout<<"Faktorial dari "<<angka<<" adalah "<<faktorial(angka);

}