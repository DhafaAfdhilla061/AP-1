#include<iostream>
using namespace std;

int main(){
    int nilai;
    cout<<"masukkkan nilai"; cin>>nilai;
    if (nilai%5==0 ){
        cout<<"Habis dibagi 5";
    } else if (nilai%10==0 ){
        cout<<"Habis dibagi 10";
    } else {
        cout<<"Tidak habis dibagi keduanya";
    }
}