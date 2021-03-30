#include<stdio.h>

int main()
{
    char nama[30];
    char nickname[10];
    int umur;

    printf("Masukkan nama lengkap anda : ");
    scanf(" %[^\n]s", nama);

    printf("Masukkan nama panggilan anda : ");
    scanf("%s", nickname);

    printf("Masukkan umur anda : ");
    scanf("%d", &umur);
    
    printf("\n");
    printf("------------------------\n");
    printf("Nama anda adalah : %s\n", nama);
    printf("Nama panggilan anda : %s\n", nickname);
    printf("Umur anda : %d tahun", umur);

    return 0;
}