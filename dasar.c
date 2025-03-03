#include <stdio.h> //header untuk C
#include <conio.h>

int main(){
    char nama[50], nim[20],kom;
    float ip;

    printf("Hello World\n");
    printf("Masukkan Nama :"); //scanf("%s",nama);
    gets(nama); // get string
    printf("Masukkan NIM :"); scanf("%s",nim); //fungsi masukan pada C
    getchar();
    printf("Masukkan KOM :"); scanf("%c",&kom);
    printf("Masukkan IP :"); scanf("%f",&ip);


    printf("Nama anda : ");
    puts(nama); //put string, digunakan untuk string dalam bentuk array char
    printf("NIM anda :%d\n ", nim);
    printf("KOM anda : %c\n",kom); 
    printf("IP anda :%f\n",ip);
}
