#include<iostream>
#include<string>

using namespace std;

struct Mahasiswa{// deklarasi struct 
    string nama; // inisialisasi variabel yang termasuk dalam struct
    int umur;
    float ipk;
};

int main(){
    Mahasiswa mhs1; // inisialisasi variabel mhs1 yang bertipe Mahasiswa(struct yang dibuat berperan seperti tipe data) 

    mhs1.nama = "Dhafa";// memberi nilai pada variabel mhs1 bagian nama di dalam struct nya 
    mhs1.umur = 19;
    mhs1.ipk=4.00;

    // cout<<"Nama = "<<mhs1.nama<<endl;
    // cout<<"Umur = "<<mhs1.umur<<endl;
    // cout<<"IPK  = "<<mhs1.ipk <<endl;

    Mahasiswa *ptrMhs = &mhs1; // kombinasi pointer dengan struct
    cout<<"Nama = "<<ptrMhs->nama<<endl;// mengakses struct dengan pointer
    cout<<"Umur = "<<ptrMhs->umur<<endl;
    cout<<"IPK  = "<<ptrMhs->ipk<<endl;

    
}
