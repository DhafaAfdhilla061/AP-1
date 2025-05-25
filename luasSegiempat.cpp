#include<iostream>//(Header untuk c++) 
using namespace std;//untuk fungsi input output

int main(){ //membuat fungsi utama untuk program (tanda { untuk mengawali fungsi utama 
    float luas,p,l;// menginisialisasi variabel 
    system("cls");// membersihkan layt

    cout<<"'Masukkan panjang : ";//menampilkan 
    cin>>p;//meng-input data ke dalam variabel
    cout<<"'Masukkan lebar : "; cin>>l;

    luas=p*l;//melakukan proses perhitungan luas (* adalah tanda kali) 
    cout<<"Luas adalah : "<<luas<<endl;//menampilkan hasil(luas) 
}//akhir dari fungsi utama
