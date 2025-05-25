#include<iostream>
using namespace std;
string namaGlobal = "Ilmu";// variabel global yang bisa digunakan baik di fungsi utama maupun fungsi lain
void namaVariabel(){// deklarasi fungsi kosong tanpa parameter
    string namaLokal = "Komputer";// variabel lokal yang hanya bisa digunakan di fungsi namaVariabel
    cout<<namaLokal<<endl;
    cout<<namaGlobal<<endl;
}
int main(){
    namaVariabel();// memanggil fungsi namaVariabel
    cout<<namaGlobal<<endl;
    //cout<<namaLokal<<endl;
}
