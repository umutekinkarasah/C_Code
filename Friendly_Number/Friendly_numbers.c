#include <stdio.h>

int friendly(int sayi1, int sayi2){
    int top_Sayi1 = 0;
    int top_Sayi2 = 0 ;

    for(int i = 1 ; i < sayi1 ; i++){
        if(sayi1 % i == 0)
            top_Sayi1 += i;
    }

    for(int i = 1 ; i < sayi2 ; i++ ){
        if(sayi2 % i == 0)
            top_Sayi2 += i;

    }


    if(sayi1 == top_Sayi2 && sayi2 == top_Sayi1)
            printf("They are friendly numbers.");
    else
        printf("They are not friendly numbers.");

}

int main(){
    int a, b;

    printf("sayi gir: ");
    scanf("%d%d",&a, &b);

    friendly(a , b);

}
