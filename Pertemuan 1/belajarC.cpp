#include <stdio.h> // header standar untuk c
#include <conio.h>

int main()
{
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World!! \n"); // printf untuk fungsi output pada c

    printf("Masukkan Nama: ");
    gets(nama); // gets - get string

    printf("Masukkan Nim: ");
    scanf("%d", &nim);

    getchar();

    printf("Masukkan Kom: ");
    gets(kom);

    printf("Masukkan Ip: ");
    scanf("%f", &ip);

    /* ini untuk output*/
    printf("Nama: ");
    puts(nama); // put string untuk string dalam bentuk array

    printf("Kom : ");
    puts (kom);

    printf("Ip : %f\n", ip);

    printf("Press any button to continue...");
    getch();

}