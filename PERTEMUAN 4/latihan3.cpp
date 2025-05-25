#include<iostream>
using namespace std;

int main(){
    string kode;
    int i,j;
    cout<<"masukkan kode :";
    getline(cin,kode);
    for(i=0;i<kode.length();i++){// deklarasi perulangan for (inisialisasi i, kondisi i, dan perbaruan nilai i) 
        //cout<<kode[i];
        for ( j=0;j<=i;j++){// deklarasi perulangan for di dalam for (inisialisasi J, kondisi j, dan perbaruan nilai J) 
            cout<<kode[j]; 
             
        }

    }
}
