#include <stdio.h>
#include <conio.h>


int main(){

    int c ;

    while((c = _getch()) != 'e' && c != 'h')
    ;
    printf("%d %c ",(c = _getch()),(c = _getch()));
    putchar(c);


}
