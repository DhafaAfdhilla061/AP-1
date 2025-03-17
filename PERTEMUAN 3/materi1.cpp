#include<iostream>
using namespace std;

int main(){
    int nilai,hari;
    system("cls");
        cout<<"Masukkan Nilai : "; cin>>nilai;
        cout<<"Masukkan Hari  : "; cin>>hari;

    // IF STATEMENT
        if (nilai<=65){
            cout<<"Anda kurang pintar"<<endl;
        }  

    //IF-ELSE STATEMENT
        if (nilai<=65){
            cout<<"Anda kurang pintar"<<endl;
        } else {
            cout<<"Anda pintar"<<endl;
        }

    //IF-ELSE-IF STATEMENT
        if (nilai<=65){
            cout<<"Anda kurang pintar"<<endl;
        } else if (nilai==100) {
            cout<<"GGWP !"<<endl;
        } else {
            cout<<"Anda pintar"<<endl;
        }

    //NESTED IF
        if (nilai<=65){
            cout<<"Anda tidak lulus"<<endl;
        }else{
            if(nilai==100){
                cout<<"Anda lulus dan anda GGWP !"<<endl;
            } else{
                cout<<"Anda lulus"<<endl;
            }
        }

   //SWITCH CASE
        switch(hari){
            case 1  : cout<<"Senin "<<endl; break;
            case 2  : cout<<"Selasa"<<endl; break;
            case 3  : cout<<"Rabu  "<<endl; break;
            case 4  : cout<<"Kamis "<<endl; break;
            case 5  : cout<<"Jum'at"<<endl; break;
            case 6  : cout<<"Sabtu "<<endl; break;
            case 7  : cout<<"Minggu"<<endl; break;
            default : cout<<"Hari tidak valid"<<endl;
        }

        switch(nilai){
            case 85 ... 100 : cout<<"A "<<endl; break;
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
    string checknum = (nilai%2 ==0) ? "Genap":"Ganjil";
    cout<<nilai<<" adalah bilangan : "<<checknum<<endl;

   
 }