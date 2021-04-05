#include<stdio.h>
#define jenis_kelamin 'L'

int main(){

    int number = 12;

    printf("%d\n", number++); //postfix increment
    printf("%d\n", number);   
    printf("%d\n", --number); //prefix decrement
    printf("%d\n", ++number); //prefix increment
    printf("%d\n", number--); //postfix decrement
    printf("%d", number);


    //implicit casting
    // char var1 = 'D', var2 = 'u', var3;
    // printf("%d\n", var1);
    // printf("%d\n", var2);
    // printf("%d", var3 = var2 - 32 );

    //explicit casting
    //    int x = 95, y = 8;
    //    float z =(float) x / (float) y;

    //    printf("hasil x / y = %.3f\n", z);

    //konstanta
        // const double PHI = 3.14;
        // const int sudut = 90;
        // //define jenis kelamin ada di header
        // printf("isi konstanta jenis kelamin adalah : %c\n", jenis_kelamin);
        // printf("isi konstanta PHI adalah : %g\n", PHI);
        // printf("isi konstanta sudut adalah : %d derajat", sudut);

    return 0;
}