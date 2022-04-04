#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Enter lower-case character: ");
    scanf("%c",&c);

    if(c >= 'a'){

        printf("This is your entered letter in upper-case: %c",toupper(c));

    }

    return 0;
}
