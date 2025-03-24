#include<iostream>
using namespace std;

int main(){
    string kode;
    int i,j;
    cout<<"masukkan kode :";
    getline(cin,kode);
    for(i=0;i<kode.length();i++){
        //cout<<kode[i];
        for ( j=0;j<=i;j++){
            cout<<kode[j]; 
             
        }

    }
}