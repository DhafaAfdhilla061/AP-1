#include <iostream>
#include <string>
#include <array>
using namespace std;
int main(){

    // Array Declaration & Initialization
    /* 2 cara memebuat array*/

    // Cara 1 : array kosong
    // string nama[5];// inisialisasi array dengan kapasitas 5 data yang masih kosong

    // nama[0] = "Alya"; (memasukkan nilai array nama indeks 0 dengan string " alya") 
    // nama[1] = "Parul";
    // nama[2] = "Syukron";
    // nama[3] = "Aurick";
    // nama[4] = "Dzakwan";

    // Cara 2 : array yang langsung diisi
    //string nama[5] = {"Alya","Parul","Syukron","Aurick","Dzakwam"};(deklarasi array kapasitas 5 dengan isi di indeksnya) 
    //string nama[] = {"Alya","Parul","Syukron","Aurick","Dzakwam"}; // kek gini juga bole, langsung mengidentifikasi kapasitas array

    //Ascending Element in Array(menampilkan nilai array dari indeks terkecil sampai terbesar) 
    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    //Menggunakan looping(ascending dengan looping) 
    // for(int i=0;i<5;i++){
    //     cout<<nama[i]<<endl;(menampilkan nilai array 0-4 dengan looping) 
    // }
    // for(int i=4;i>=0;i--){(menampilkan nilai array secara decending) 
    //     cout<<nama[i]<<endl;
    // }

    //array multidimensional
    // int matriks[2][3] = {{1,3,5},{2,4,6}};(array mempunyai baris dan kolom) 
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<< matriks[i][j]<<" ";(menampilkan array baris ke-i dalm kolom ke-j
    //     }
    // cout<<endl;
    // }

    // int matrix[4][6]={{1,3,5,7,8,9},{2,4,6,8,10,12},{1,3,5,7,8,9},{1,3,5,7,8,9}};
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<6;j++){
    //         cout<<matrix[i][j]<<"\t ";
    //     }
    //     cout<<endl;
    // }

    // string (array of characters)
    // string nama = "Naufal";
    // cout<<nama[0]<<endl;(menampilkan indeks ke 0 yaitu " N") 
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;

    // for(int i = 0;i<nama.length();i++){
    //     cout<<nama[i]<<endl;
    // }

    string s1 = "Hello";
    string s2 = " World";
    /* 1. s1=s2*/
    // s1=s2;(mengubah nilai s1 menjadi s2) 
    // cout<<s1<<;

    /* 2. s1=s1+s2 */ // mengubah nilai s1 menjadi s1 da s2 (Hello World) 
    // cout<<s1+s2<<endl;


    /* 3. s1.length() */ 
    // cout<<s1.length()<<endl;(menampilkan banyak karakter di s1) 
    // cout<<(s1+s2).length()<<endl;

    /* 4. s1.substr(n,m)*/
    //cout<<s1.substr(2,4)<<endl;(mengambil nilai karakter dari s1 dari indeks ke-2 sebanyak 2 karakter
    //cout<<(s1+s2).substr(2,4)<<endl;

    // Operator sizeof()
    // int angka=10;
    // cout<<sizeof(angka); (menampilkan ukuran bit dari variabel angka) 

    // int nilai[]={10,20,30,40,50};
    // cout<<sizeof(nilai);

    // string nama="Dhafa";
    // cout<<sizeof(nama);
    // cout<<nama.length();

    // string nama_karyawan[] = {"Dapa","Ripki","Iyep","Parhan","Arkan","Wili","Frans","Keli"};
    // int n = sizeof(nama_karyawan) /sizeof(string);(mencari banyak karakter di array dengan membagi jumlah bit array string dengan jumlah bit string tunggal
    // cout<<n;

    // Array library
    // array<float,5> nilai = {87.2,90,100,95.7,78.5};
    // cout<<"Nilai : ";
    // for(int i=0;i<nilai.size();i++){
    //     cout<<nilai[i]<<" ";
    // }

    // for(float n : nilai){
    //     cout<<n<<" ";
    // }




}
