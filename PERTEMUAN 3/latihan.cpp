#include<iostream>
using namespace std;

int main(){
    int nilai;
    cout<<"masukkkan nilai"; cin>>nilai;
    if (nilai%5==0 ){//deklarasi pernyataan kondisi dengan kondisi nilai adalah kelipatan 5
        cout<<"Habis dibagi 5";// pernyataan yang akan dieksekusi apabila nilai kondisi TRUE 
    } else if (nilai%10==0 ){// deklarasi percabangan kondisi dengan kondisi nilai kelipatan 10
        cout<<"Habis dibagi 10";// pernyataan yang akan dieksekusi apabila nilai kondisi TRUE 
    } else {// deklarasi percangan kondisi apabila kondisi di atas bernilai FALSE 
        cout<<"Tidak habis dibagi keduanya"; // pernyataan yang akan dieksekusi
    }
}
