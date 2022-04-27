#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,n2;

    printf("\nEnter a number: ");
    scanf("%i",&n);

    n2 = (n<0) ? 0:n;

    printf("\n\nThe value you entered equals: %i\n",n2);
    return 0;
}
