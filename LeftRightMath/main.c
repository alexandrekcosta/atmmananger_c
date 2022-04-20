#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    a = (b=(c = 1));

    printf("%i\n",c);
    printf("%i\n",b);
    printf("%i\n",a);

    return 0;
}
