#include<iostream>
using namespace std;

int main(){
    int a,b;
    system("cls");


    // Assigntment operator(=)
        a=3;
        b=5;

    // Arithmetical operator(+, -, *, /, %)
        int tambah = a+b;
        int kurang = a-b;
        int kali   = a*b;
        float bagi = float(a)/float(b);  //type casting = mengubah tipe data dari sebuah variabel
        int modulo = a%b;

        cout<<"Hasil penjumlahan : "<<tambah<<endl;
        cout<<"Hasil pengurangan : "<<kurang<<endl;
        cout<<"Hasil perkalian   : "<<kali  <<endl;
        cout<<"Hasil pembagian   : "<<bagi  <<endl;
        cout<<"Hasil modulo      : "<<modulo<<endl;

    // Relasional operator
        cout<< (a==b) << endl;
        cout<< (a>b)  << endl;
        cout<< (a>=b) << endl;
        cout<< (a<b)  << endl;
        cout<< (a<=b) << endl;
        cout<< (a!=b) << endl;

    //Logical operator(&&, ||, !)
        cout<< (true && true)   << endl;
        cout<< (true && false)  << endl;
        cout<< (false && true)  << endl;
        cout<< (false && false) << endl;

        cout<< (true || true)   << endl;
        cout<< (true || false)  << endl;
        cout<< (false || true)  << endl;
        cout<< (false || false) << endl;

        cout<< !true << endl;
        cout<< !false << endl;


    // Bitwise operator(&, |, ~, <<, >>, ^)
        cout<< (5&7)  <<endl;
        cout<< (5|7)  <<endl;
        cout<< (5^7)  <<endl;
        cout<< (~7)   <<endl;
        cout<< (7<<2) <<endl;
        cout<< (7>>2) <<endl;

    // Shorthand
        a+=7;
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
            cout<< ++a << endl;
            cout<< ++b << endl;

        // Post-increment
            cout<< a++ << endl;
            cout<< b++ << endl;

        cout<<a<<endl;
        cout<<b<<endl;

        // Pre-decrement
            cout<< --a << endl;
            cout<< --b << endl;

        // Post-decrement
            cout<< a-- << endl;
            cout<< b-- << endl;

        cout<<a<<endl;
        cout<<b<<endl;






}