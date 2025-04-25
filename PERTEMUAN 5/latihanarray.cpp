#include<iostream>


using namespace std;

int main(){
    int i,j;
    int matrix1[2][2];
    int matrix2[2][2];
    int hasil[2][2];

    cout<<"Matriks 1 :"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"Masukkan elemen baris "<<i+1<<" kolom "<<j+1<<" : "; cin>>matrix1[i][j];
        }

    }
    cout<<"Matriks 2 :"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<"Masukkan elemen baris "<<i+1<<" kolom "<<j+1<<" : "; cin>>matrix2[i][j];
        }

    }

    cout<<"Hasil penjumlahan :"<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            hasil[i][j]=matrix1[i][j]+matrix2[i][j];
            cout<<hasil[i][j]<<" ";
        }
        cout<<endl;
    }
}