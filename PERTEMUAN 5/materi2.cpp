#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> nama_karyawan = {"Dapa","Ripki","Iyep","Parhan","Arkan","Wili","Frans","Keli"};
    // for(string karyawan : nama_karyawan){
    //     cout<<karyawan<<endl;
    // }

    // Add data to Vector
    nama_karyawan.push_back("Doni");

    // for (int i=0;i<nama_karyawan.size();i++){
    //     cout<<nama_karyawan[i]<<endl;
    // }
    
    // Delete data from vector
    nama_karyawan.pop_back();
    // for (int i=0;i<nama_karyawan.size();i++){
    //     cout<<nama_karyawan[i]<<endl;
    // }
    
    nama_karyawan.erase(nama_karyawan.begin()+3);
    for (int i=0;i<nama_karyawan.size();i++){
        cout<<nama_karyawan[i]<<endl;
    }
}