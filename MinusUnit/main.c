#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;

    printf("%i\n",i);
    printf("%i\n",++i);
    i++;
    printf("%i\n",i);

    int i2 = 5;

    printf("\n%i\n",i2);
    printf("%i\n",--i2);
    --i2;
    printf("%i\n",i2);

    int x = 0;
    x = x+1;
    x +=1;
    ++x;

    printf("\n\n%i\n",x);
    return 0;
}
