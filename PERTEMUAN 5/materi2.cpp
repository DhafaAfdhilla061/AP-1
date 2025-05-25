#include<iostream>
#include <vector>// header untuk menggunakan fungsi vektor
using namespace std;

int main(){
    vector<string> nama_karyawan = {"Dapa","Ripki","Iyep","Parhan","Arkan","Wili","Frans","Keli"};// inisialisasi vektor dengan tipe string
    // for(string karyawan : nama_karyawan){
    //     cout<<karyawan<<endl;
    // }

    // Add data to Vector
    nama_karyawan.push_back("Doni");// menggunakan fungsi vektor yaitu pushback untuk menambah karakter di indeks paling akhir vektor 

    // for (int i=0;i<nama_karyawan.size();i++){
    //     cout<<nama_karyawan[i]<<endl;
    // }
    
    // Delete data from vector
    nama_karyawan.pop_back();// menggunakan fungsi vektor popback untuk menghapus indeks paling akhir vektor
    // for (int i=0;i<nama_karyawan.size();i++){
    //     cout<<nama_karyawan[i]<<endl;
    // }
    
    nama_karyawan.erase(nama_karyawan.begin()+3);// menghapus karakter di indeks ke-(0+3=3) 
    for (int i=0;i<nama_karyawan.size();i++){
        cout<<nama_karyawan[i]<<endl;
    }
}
