#include<iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    cout<<"Masukkan kalimat : ";
    getline(cin, kalimat);

    //alya
    for(i=0;i<kalimat.length();i++){// deklarasi perulangan for (inisialisasi i = 0 sebagai indikator perulangan, kondisi i, dan perbaruan nilai i (i++)
        kalimat[i]= toupper(kalimat[i]);
    }
    cout<<"Kalimat dalam kapital : "<<kalimat<<endl;
    return 0;


}
