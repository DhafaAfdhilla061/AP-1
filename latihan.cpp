#include<iostream>
using namespace std;

main(){
    float v,lp,r;

    cout<<"Masukkan jari-jari"; cin>>r;

    v=float(4)/3*3.14*r*r*r;
    lp=4*3.14*r*r;

    cout<<"Volume : "<<v<<endl;
    cout<<"Luas permukaan  : "<<lp<<endl;
}