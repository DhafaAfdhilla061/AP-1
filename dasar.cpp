#include <iostream> //header untuk c++
#include <conio.h> //header untuk getch() dan getche()
using namespace std;

int main() {
    /*untuk komnetar beberapa baris*/
    string nama;
    char kom,jenisKelamin;
    int nim;
    float ip;
    cout<<"Hello word"<<endl;
    cout<<"Masukkan nama anda:";//cin>>nama;//cin tidak dapat membaca karakter spasi
    getline(cin,nama);
    cout<<"Masukkan KOM anda :";cin>>kom;

    cout<<"Masukkan NIM anda :";cin>>nim;

    cout<<"Masukkan IP anda :";cin>>ip;

    cout<<"Masukkan Jenis kelamin (L/P) : ";
    jenisKelamin=getche(); //agar karakter langsung tampil jadi ga perlu tekan enter

    cout<<"\nNama Anda : "<<nama<<endl;
    cout<<"KOM Anda : "<<kom<<endl;
    cout<<"NIM Anda : "<<nim<<endl;
    cout<<"IP Anda : "<<ip<<endl;
    cout<<"Jenis Kelamin anda : ";
    putchar(jenisKelamin);//untuk menampilkan karakter jenis kelamin
    getch();//karakter yang diketik tidak ditampilkan pada layar, tapi disimpan di memori
}