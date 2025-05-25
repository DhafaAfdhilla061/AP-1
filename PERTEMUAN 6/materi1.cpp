#include<iostream>
using namespace std;

void sapa(string nama){// deklarasi fungsi void(kosong) di mana fungsi tidak mengembalikan nilai dengan parameter formal string nama
    cout << "Halo "<<nama<<" ! Selamat belajar c++!"<<endl;
}

int main(){
    string namaPengguna = "Dhafa";
    sapa(namaPengguna);// memanggil fungsi " sapa" dengan parameter aktual namaPengguna
}
