#include <stdio.h> //header untuk C
#include <conio.h> //header untuk fungsi getche dan getch

int main(){//deklarasi fungsi utama dalam program (tanda { untuk mengawali fungsi) 
    char nama[50], nim[20],kom;// inisialisasi variabel tipe karakter (char) 
    float ip;// inisialisasi variabel tipe bil ril (float) 

    printf("Hello World\n");//menampilkan 
    printf("Masukkan Nama :"); //scanf("%s",nama);
    gets(nama); // get string
    printf("Masukkan NIM :"); scanf("%s",nim); //fungsi masukan pada C
    getchar();
    printf("Masukkan KOM :"); scanf("%c",&kom);//input dalam ke variabel kom
    printf("Masukkan IP :"); scanf("%f",&ip);//input data ke variabel ip 


    printf("Nama anda : ");
    puts(nama); //put string, digunakan untuk string dalam bentuk array char
    printf("NIM anda :%d\n ", nim);//menampilkan variabel nim 
    printf("KOM anda : %c\n",kom); //menampilkan variabel kom
    printf("IP anda :%f\n",ip);//menampilkan variabel ip
}//(tanda } untuk mengakhiri fungsi utama) 
