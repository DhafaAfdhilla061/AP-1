#include<iostream>
using namespace std;

int main(){
    // goto label (fungsi untuk perlompatan, program akan melompat ke label ) 
    // Hello World, Fasilkom-TI, Ilmu Komputer, IKLC
    // a:
    // cout<<"Hello World"<<endl;
    // goto d;(lompat ke label "d") 
    // b:(lompatan ketiga) 
    // cout<<"Fasilkom-TI"<<endl;
    // return 0;(menyelesaikan program) 
    // c:(lompatan kedua) 
    // cout<<"Ilmu Komputer"<<endl;
    // goto b;(lonlat ke label b) 
    // d:(lompatan pertama) 
    // cout<<"IKLC"<<endl;
    // goto c;(lompat ke label c) 

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
    // while(i<=10){// deklarasi operasi perulangan while dengan kondisi i lebih kecil dari 10
    //     if (i%2==0){
    //         cout<< i <<" ";
    //     }i++;// increment nilai untuk update perulangan 
    // }

    // Statement Do-While
    // int i = 1;
    // do {(deklarasi perulangan do-while) 
    //     cout<< i << endl;
    //     i--;

    // }while(i<=0);(pengecekan kondisi) 

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
    // for(int i =1; i<=10;i+=2){(deklarasi perulangan for) 
    //     cout<<"Hello World"<<endl;
    // }

    //Nested For
    // Persegi 5x5
    // for(int i=1;i<=5;i++){
    //     for (int j=1;j<=5;j++){(deklarasi for di dalam for) 
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
