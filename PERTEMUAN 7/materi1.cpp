#include<iostream>
using namespace std;

void penjumlahan(int a,int b){
    cout<<a+b<<endl;
}

void penjumlahan_pointer(int *a,int *b){
    *a+=*b;
    cout<<*a<<endl;
}

void doubleValue (int *a){
    *a*=2;
    cout<<*a<<endl;
}

int main(){
    // Deklarasi pointer

    //int number = 35;
    //int *pointer_number = &number;


    // cout<<"Isi variabel number : "<<number<<endl;
    // cout<<"Alamat memori variabel number : "<<&number<<endl;
    // cout<<"Isi dari variabel pointer_number  : "<<pointer_number<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_number : "<<*pointer_number<<endl;
    // cout<<"Alamat memori variabel pointer_number  : "<<&pointer_number<<endl;
    // *pointer_number=25;
    // cout<<"Isi variabel pointer_number setelah diganti : "<<*pointer_number<<endl;

    // Pointer in array

    // int num[]={1,2,3,4,5};
    // int *pointer_num = num;
    // cout<<"Isi variabel num : "<<num[0]<<endl;
    // cout<<"Alamat memori variabel num : "<<&num[3]<<endl;
    // cout<<"Isi dari variabel pointer_num  : "<<pointer_num<<endl;
    // cout<<"Isi variabel yang ditunjuk oleh pointer_num : "<<*pointer_num<<endl;
    // cout<<"Alamat memori variabel pointer_num : "<<&pointer_num<<endl;
    // *pointer_num+=5;
    // cout<<"Isi variabel pointer_number setelah diganti : "<<*pointer_num<<endl;


    // Pointer in parameter

    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1,num2);
    // cout<<num1<<endl;
    // cout<<num2<<endl;
    // penjumlahan_pointer(&num1,&num2);
    // cout<<num1<<endl;
    // cout<<num2<<endl;

    // Pointer in pointer

    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;

    // cout<<"Isi variabel score : "<<score<<endl;
    // cout<<"Alamat memori variabel score : "<<&score<<endl;
    // cout<<"Isi dari variabel pointer_score  : "<<pointer_score<<" dan isi variabel yang ditunjuk oleh pointer_score  :"<<*pointer_score<<" alamat memori pointer_score : "<<&pointer_score<<endl;
    // cout<<"Isi dari variabel ptr_pointer_score  : "<<ptr_pointer_score<<" dan isi variabel yang ditunjuk oleh ptr_pointer_score  :"<<**ptr_pointer_score<<" alamat memori ptr_pointer_score : "<<&ptr_pointer_score<<endl;

    // Dynamic Pointer

    // int *ptr = new int;
    // *ptr = 30;
    // cout<<"Isi variabel ptr = "<<*ptr<<" alamat variabel ptr = "<<&ptr<<endl;
    
    // delete ptr; //deallocation 
    // cout<<"Isi variabel ptr = "<<*ptr<<" alamat variabel ptr = "<<&ptr<<endl;

    //Contoh 

    // int n;
    // cout<<"Masukkan sebuah angka = "; cin>>n;
    // doubleValue(&n);
    // cout<<"Nilai angka setelah dikali 2 = "<<n<<endl;


}