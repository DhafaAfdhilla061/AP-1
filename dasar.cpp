#include <iostream> //header untuk c++
#include <conio.h> //header untuk getch() dan getche()
using namespace std; // untuk fungsi input output

int main() {// deklarasi fungsi utama (tanda { untuk mengawali fungsi
    /*untuk komnetar beberapa baris*/
    string nama;//inisialisasi variabel bertipe kumpulan karakter (string) 
    char kom,jenisKelamin;//inisialisasi variabel bertipe karakter (char) 
    int nim;//inisialisasi variabel bertipe bilangan bulat (int) 
    float ip;// inisialisasi variabel bilangan ril (float) 
    cout<<"Hello word"<<endl;//menampilkan
    cout<<"Masukkan nama anda:";//cin>>nama;//cin tidak dapat membaca karakter spasi
    getline(cin,nama);// menginput data berupa nama ke dalam variabel, menggunakan getline agar data yg diinput meliputi spasi
    cout<<"Masukkan KOM anda :";cin>>kom;//menginput data ke variabel kom

    cout<<"Masukkan NIM anda :";cin>>nim;//menginput data ke variabel nim

    cout<<"Masukkan IP anda :";cin>>ip;//menginput data ke variabel ip

    cout<<"Masukkan Jenis kelamin (L/P) : ";
    jenisKelamin=getche(); //agar karakter langsung tampil jadi ga perlu tekan enter

    cout<<"\nNama Anda : "<<nama<<endl;//menampilkan variabel bama
    cout<<"KOM Anda : "<<kom<<endl;//menampilkan variabel kom
    cout<<"NIM Anda : "<<nim<<endl;//menampilkan variabel nim
    cout<<"IP Anda : "<<ip<<endl;//menampilkan variabel ip
    cout<<"Jenis Kelamin anda : ";
    putchar(jenisKelamin);//untuk menampilkan karakter jenis kelamin
    getch();//karakter yang diketik tidak ditampilkan pada layar, tapi disimpan di memori
}
