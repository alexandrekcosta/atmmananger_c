#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a = 15;
    float b = 10;
    float c = 5;
    float x = 0;

    x = a * b / c;
    printf("a * b / c = %f\n",x);

   x = a / b * c;
    printf("a / b * c = %f\n",x);

   x = a + b * c;
    printf("a + b / c = %f\n",x);

   x = a * b + c;
    printf("a * b + c = %f\n",x);

   x = (a * b) + c;
    printf("(a * b) + c = %f\n",x);

   x = a * (b / c);
    printf("a * (b / c) = %f\n",x);

    return 0;
}
