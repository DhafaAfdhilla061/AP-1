#include<iostream>
using namespace std;

int main(){
    int nilai,hari;
    system("cls");
        cout<<"Masukkan Nilai : "; cin>>nilai;
        cout<<"Masukkan Hari  : "; cin>>hari;

    // IF STATEMENT
        if (nilai<=65){// deklarasi pernyataan kondisi dengan kondisi nilai lebih kecil sama dengan dari 65
            cout<<"Anda kurang pintar"<<endl;// pernyataan yang akan dieksekusi jika kondisi bernilai TRUE 
        }  

    //IF-ELSE STATEMENT
        if (nilai<=65){
            cout<<"Anda kurang pintar"<<endl;
        } else {// deklarasi percabangan kondisi apabila pernyataan diatas bernilai FALSE 
            cout<<"Anda pintar"<<endl;//pernyataan yang akan di eksekusi
        }

    //IF-ELSE-IF STATEMENT
        if (nilai<=65){
            cout<<"Anda kurang pintar"<<endl;
        } else if (nilai==100) {// deklarasi percabangan kondisi dengan kondisi nilai sama dengan 100 
            cout<<"GGWP !"<<endl;//pernyataan yang akan dieksekusi apabila kondisi bernilai TRUE 
        } else {
            cout<<"Anda pintar"<<endl;
        }

    //NESTED IF
        if (nilai<=65){
            cout<<"Anda tidak lulus"<<endl;
        }else{
            if(nilai==100){// deklarasi pernyataan kondisi di dalam pernyataan kondisi lain 
                cout<<"Anda lulus dan anda GGWP !"<<endl;
            } else{
                cout<<"Anda lulus"<<endl;
            }
        }

   //SWITCH CASE
        switch(hari){// deklarasi switch dengan kasus dari variabel hari 
            case 1  : cout<<"Senin "<<endl; break;// kasus pertama jika hari == 1 maka akan menampilkan senin
            case 2  : cout<<"Selasa"<<endl; break;// kasus pertama jika hari == 2 maka akan menampilkan senin
            case 3  : cout<<"Rabu  "<<endl; break;// kasus pertama jika hari == 3 maka akan menampilkan senin
            case 4  : cout<<"Kamis "<<endl; break;// kasus pertama jika hari == 4 maka akan menampilkan senin
            case 5  : cout<<"Jum'at"<<endl; break;// kasus pertama jika hari == 5 maka akan menampilkan senin
            case 6  : cout<<"Sabtu "<<endl; break;// kasus pertama jika hari == 6 maka akan menampilkan senin
            case 7  : cout<<"Minggu"<<endl; break;// kasus pertama jika hari == 7 maka akan menampilkan senin
            default : cout<<"Hari tidak valid"<<endl;// percabanga jika hari tidak memenuhi kasus manapun
        }

        switch(nilai){
            case 85 ... 100 : cout<<"A "<<endl; break;// switch case tetapi dengan rentang nilai yaitu 85-100
            case 80 ... 84  : cout<<"B+"<<endl; break;
            case 75 ... 79  : cout<<"B "<<endl; break;
            case 70 ... 74  : cout<<"C+"<<endl; break;
            case 65 ... 69  : cout<<"C "<<endl; break;
            case 60 ... 64  : cout<<"D "<<endl; break;
            default         : cout<<"E "<<endl;
        }


   //TERNARY OPERATOR
        // if (nilai%2==0){
        //     cout<<"Nilai genap"<<endl;
        // } else{
        //     cout<<"Nilai ganjil"<<endl;
        // }
        //Diubah menjadi : 
    string checknum = (nilai%2 ==0) ? "Genap":"Ganjil";// pernyataan pertama adalah kondisi yang harus dicek lalu tanda (?) adalah ternary operator dan " Genap" adalah nilai variabel apabila kondisi TRUE, "Ganjil" jika kondisi FALSE 
    cout<<nilai<<" adalah bilangan : "<<checknum<<endl;

   
 }
