#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int d = 0;

    printf("\nEnter a letter between A and G: ");
    scanf("%c",&c);

    d = (c == 'A') ? 67:
        (c == 'B') ? 68:
        (c == 'C') ? 69:
        (c == 'D') ? 70:
        (c == 'E') ? 71:
        (c == 'F') ? 72:
        (c == 'G') ? 73: -1;

    printf("\nThe digit of number that you entered equals: %i\n",d);

    return 0;
}
