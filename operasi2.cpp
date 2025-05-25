#include<iostream>
using namespace std;

int main(){
    int a,b;//inisialisasi variabel tipe integer 
    system("cls");//membersihkan layar 


    // Assigntment operator(=)
        a=3;// menyimpan nilai dalam variabel dengan assignment operator (=) 
        b=5;

    // Arithmetical operator(+, -, *, /, %)
        int tambah = a+b;// melakukan proses pertambahan dengan (+) sebagai operator aritmatika tambah 
        int kurang = a-b;// melakukan proses pertambahan dengan (-) sebagai operator aritmatika kurang 
        int kali   = a*b;// melakukan proses pertambahan dengan (*) sebagai operator aritmatika kali
        float bagi = float(a)/float(b);  //type casting = mengubah tipe data dari sebuah variabel( melakukan proses pertambahan dengan (/) sebagai operator aritmatika bagi) 
        int modulo = a%b;// melakukan proses pertambahan dengan (%) sebagai operator aritmatika modulo

        cout<<"Hasil penjumlahan : "<<tambah<<endl;//menampilkan variabel tambah 
        cout<<"Hasil pengurangan : "<<kurang<<endl;//menampilkan variabel kurang 
        cout<<"Hasil perkalian   : "<<kali  <<endl;//menampilkan variabel kali 
        cout<<"Hasil pembagian   : "<<bagi  <<endl;//menampilkan variabel bagi 
        cout<<"Hasil modulo      : "<<modulo<<endl;//menampilkan variabel modulo 

    // Relasional operator
        cout<< (a==b) << endl; //menampilkan hasil dari pernyataan relasional berupa 1 atau 0 (== sama dengan) 
        cout<< (a>b)  << endl; //menampilkan hasil dari pernyataan relasional berupa 1 atau 0 (> lebih besar dari)
        cout<< (a>=b) << endl; //menampilkan hasil dari pernyataan relasional berupa 1 atau 0 (>= lebih besar sama dengan dari) 
        cout<< (a<b)  << endl; //menampilkan hasil dari pernyataan relasional berupa 1 atau 0 (< lebih kecil dari) 
        cout<< (a<=b) << endl; //menampilkan hasil dari pernyataan relasional berupa 1 atau 0 (<= lebih kecil sama dengan dari) 
        cout<< (a!=b) << endl; //menampilkan hasil dari pernyataan relasional berupa 1 atau 0 (!= tidak sama dengan) 

    //Logical operator(&&, ||, !)
        cout<< (true && true)   << endl; //menampilkan hasil dari pernyataan logika berupa 1 atau 0 (&&  adalah AND ) 
        cout<< (true && false)  << endl;
        cout<< (false && true)  << endl;
        cout<< (false && false) << endl;

        cout<< (true || true)   << endl; //menampilkan hasil dari pernyataan logika berupa 1 atau 0 (|| adalah OR) 
        cout<< (true || false)  << endl;
        cout<< (false || true)  << endl;
        cout<< (false || false) << endl;

        cout<< !true << endl;//menampilkan hasil dari pernyataan logika berupa 1 atau 0 (! adalah NOT ) 
        cout<< !false << endl;


    // Bitwise operator(&, |, ~, <<, >>, ^)
        cout<< (5&7)  <<endl; //menampilkan hasil dari operator bitwise (& adalah AND) 
        cout<< (5|7)  <<endl; //menampilkan hasil dari operator bitwise (| adalah OR )  
        cout<< (5^7)  <<endl; //menampilkan hasil dari operator bitwise (^ adalah XOR)  
        cout<< (~7)   <<endl; //menampilkan hasil dari operator bitwise (! adalah NOT) 
        cout<< (7<<2) <<endl; //menampilkan hasil dari operator bitwise (<< adalah SHL) 
        cout<< (7>>2) <<endl; //menampilkan hasil dari operator bitwise (>> adalah SHR) 

    // Shorthand
        a+=7;// artinya a=a+7
        cout<<a<<endl;
        a-=7;
        cout<<a<<endl;
        a*=7;
        cout<<a<<endl;
        a/=7;
        cout<<a<<endl;

    // Increment dan Decrement
        cout<< a << endl;
        cout<< b << endl;

        // Pre-increment
            cout<< ++a << endl;//menampilkan a++(a+1) dan menyimpan a+1
            cout<< ++b << endl;

        // Post-increment
            cout<< a++ << endl;//menampilkan a menyimpan a+1
            cout<< b++ << endl;

        cout<<a<<endl;
        cout<<b<<endl;

        // Pre-decrement
            cout<< --a << endl;//menampilkan a--(a-1) dan menyimpan a-1
            cout<< --b << endl;

        // Post-decrement
            cout<< a-- << endl;// menampilkan a dan menyimpan a-1
            cout<< b-- << endl;

        cout<<a<<endl;
        cout<<b<<endl;






}
