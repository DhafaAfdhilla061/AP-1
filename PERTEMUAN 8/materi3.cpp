#include<iostream>
using namespace std;

class ContohAkses{// inisialisasi class
    private:// membuat private variabr yang hanya bisa diakses di class ini
        int privateVar;

    protected: // membuat protected variabel yang hanya bisa diakses di class ini dan class turunan
        int protectedVar;

    public:// membuat class public yang bisa diakses di mana pun
        int publicVar;

        //Constuctor
        ContohAkses(){// membuat constructor untuk menyimpan nilai di variabel
            privateVar   = 1;
            protectedVar = 2;
            publicVar    = 3;
        }

    void tampilkanSemua(){// membuat fungsi untuk menampilkan variabel
        cout<<"Akses dari dalam class : "<<endl;
        cout<<privateVar<<endl;
        cout<<protectedVar<<endl;
        cout<<publicVar<<endl;
    }
};

// kelas turunan
class Turunan : public ContohAkses{// membuat class turunan dari class contohAkses
    public: 
    void aksesProtected(){
        cout<<"Akses publicVar : "<<publicVar<<endl;// mengakses publicvar
        cout<<"Akses protectedVar : "<<protectedVar<<endl; // mengakses protecredvar
        //cout<<"Akses privateVar : "<<privateVar<<endl; (mengakses private var) 
    }
};

int main(){
    ContohAkses obj;
    obj.tampilkanSemua(); // mengakses class contohAkses

    cout<<"Akses dari luar class : "<<endl;
    cout<<obj.publicVar<<endl; // mengakses publicvar
    // cout<<obj.protectedVar<<endl; // mengakses protectedvar
    // cout<<obj.privateVar<<endl; (mengakses private var) 
    Turunan tur;
    tur.aksesProtected(); // mengakses class turunan

}
