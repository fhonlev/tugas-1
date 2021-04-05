#include<stdio.h>

int main(){
     int total_belanja = 0;
    printf("== Program Pembayaran ==\n");
    printf("Inputkan total belanja: ");
    scanf("%d", &total_belanja);

    //percabangan if if
        if(total_belanja >= 100000){
            printf("Selamat, Anda mendapatkan kupon undian!\n");
        }
        if(total_belanja < 100000){
        printf("Terima kasih sudah berbelanja");
        }

    //percabangan if else if
        // if(total_belanja >= 100000){
        //     printf("Selamat, Anda mendapatkan kupon undian!\n");
        // }
        // else if(total_belanja < 100000){
        // printf("Terima kasih sudah berbelanja");
        // }

    //percabangan if else
        //   if(total_belanja >= 100000){
        //     printf("Selamat, Anda mendapatkan kupon undian!\n");
        // }
        // else{
        // printf("Terima kasih sudah berbelanja");
        //}

        //switch case
        //  int pilih;
        // printf("Menu Utama\n");
        // printf("----------\n");
        // printf("1. Menu  A \n");
        // printf("2. Menu  B \n");
        // printf("3. Menu  C \n");
        // printf("----------\n");
        // printf("Pilihan Anda ? ");
        // scanf("%i", &pilih);
        // switch(pilih) {
        // case 1: printf("Anda memilih Menu A \n");
        //         break;
        // case 2: printf("Anda memilih Menu B \n");
        //         break;
        // case 3: printf("Anda memilih Menu C \n");
        //         break;
        // default: printf("Pilihan anda tidak diterima \n");
        // }

        

        
        return 0;
}
    
        
