#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i = 0;
    char c;

    do{
        i +=1;
        printf("\nEnter a character,you are entering it for #%i time,enter 0 to jump out loop: ",i);
        c = getchar();

    }while(c != '0');

    return 0;
}
