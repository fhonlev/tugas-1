#include<stdio.h>

int main(){
    int bebas;
    //perulangan for
    //for(bebas=1 ; bebas <=20 ; ++bebas){
       // printf("perulangan ke-%d\n", bebas);
    //}

    //while
    // while(bebas <=7){
    //     printf("%d\n", bebas);
    //     ++bebas;
    // }

    // do while
    // do{
    //     printf("%d\n",bebas);
    //     ++bebas;
    // }
    // while(bebas<=9);

    //nested loop
    for(int i = 1 ; i <=10 ; i++){
        for(int j = 1 ; j <=10 ; j++){
            printf("%d * %d = %d\n", i, j, j*i);
        }
    }
    return 0;
}