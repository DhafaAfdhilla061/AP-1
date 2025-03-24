#include<iostream>
using namespace std;

int main(){
    // goto label
    // Hello World, Fasilkom-TI, Ilmu Komputer, IKLC
    // a:
    // cout<<"Hello World"<<endl;
    // goto d;
    // b:
    // cout<<"Fasilkom-TI"<<endl;
    // return 0;
    // c:
    // cout<<"Ilmu Komputer"<<endl;
    // goto b;
    // d:
    // cout<<"IKLC"<<endl;
    // goto c;

    //menampilkan bilangan genap 10->2 dengan goto
    // int i = 10;
    // genap:
    // if (i%2==0){
    //     cout<<i<<endl;
    // }i--;
    // if (i>=2){
    //     goto genap;
    // }

    // Statement while
    // int i =1;
    // while(i<=10){
    //     if (i%2==0){
    //         cout<< i <<" ";
    //     }i++;
    // }

    // Statement Do-While
    // int i = 1;
    // do {
    //     cout<< i << endl;
    //     i--;

    // }while(i<=0);

    // int i=1;
    // int j=1;
    // while (i<=5){
    //     while (j=i){
    //         cout<<"*";
    //         j++;
    //     }cout<<"\n";
    //     i++;
    // }

    //Statement for
    // for (inisialisasi, kondisi, increase)
    // for(int i =1; i<=10;i+=2){
    //     cout<<"Hello World"<<endl;
    // }

    //Nested For
    // Persegi 5x5
    // for(int i=1;i<=5;i++){
    //     for (int j=1;j<=5;j++){
    //         cout<<"*";
    //     }cout<<"\n";
    // }

    // Segitiga Siku-Siku
    for(int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }cout<<"\n";
    }
    for(int i=5;i<=5;i--){
        for (int j=5;j<=i;j--){
            cout<<"* ";
        }cout<<"\n";
    }
}