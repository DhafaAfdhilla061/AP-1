#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Alamat {
    string jalan,kota;
    int kodepos;
};

struct Mahasiswa{
    string nama;
    int umur;
    float ipk;
    Alamat alamat;
};

int main(){
    Mahasiswa mhs1;
    // mhs1.nama = "Dhafa";
    // mhs1.umur = 19;
    // mhs1.ipk=4.00;

    // mhs1.alamat.jalan="Jalan Harapan Pasti Timur";
    // mhs1.alamat.kota="Medan";
    // mhs1.alamat.kodepos=20228;

    // cout<<"Alamat = "<<mhs1.alamat.jalan<<" "<<mhs1.alamat.kota<<" "<<mhs1.alamat.kodepos<<endl;
    
    vector<Mahasiswa> mahasiswa;
    int n;
    cout<<"Masukkan banyak mahasiswa : "; cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Mahasiswa "<<i+1<<endl;

        cin.get();
        cout<<"Masukkan nama : ";
        getline(cin,mhs1.nama);
        cout<<"Masukkan umur : ";
        cin>> mhs1.umur;
        cout<<"Masukkan ipk : ";
        cin>> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for(int i=0;i<n;i++){
        cout<<"Mahasiswa : "<<i+1<<endl;
        cout<<"Nama : "<<mahasiswa[i].nama<<endl;
        cout<<"Umur : "<<mahasiswa[i].umur<<endl;
        cout<<"IPK  : "<<mahasiswa[i].ipk<<endl;
    }
}