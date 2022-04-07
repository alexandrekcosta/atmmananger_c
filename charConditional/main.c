#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter a character: ");
    c = getchar();

    if(c == '1'){
        printf("\n\nYou entered right number.\n");
        printf("\nYou entered >%c<.\n",c);

    }else{

    printf("\n\nYou entered wrong number.\n");
    printf("\nYou entered <%c>.\n",c);

    }
    return 0;
}
