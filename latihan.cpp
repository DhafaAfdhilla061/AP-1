#include<iostream>// header untuk c++
using namespace std;// untuk fungsi input output c++

main(){// deklarasi fungsi utama program (({) untuk mengawali fungsi utama) 
    float v,lp,r;// menginisialisasi variabel

    cout<<"Masukkan jari-jari"; //menampilkan 
    cin>>r;// meng-input data ke dalam variabel 

    v=float(4)/3*3.14*r*r*r; //melakukan proses perhitungan volume ( (*)  adalah kali dan (/) adalah bagi) 
    lp=4*3.14*r*r; // melakukan proses perhitungan luas permukaan

    cout<<"Volume : "<<v<<endl;// menampilkan hasil(volume) 
    cout<<"Luas permukaan  : "<<lp<<endl;//menampilkan hasil (luas permukaan) 
}((}) //untuk mengakhiri fungsi utama
