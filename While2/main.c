#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int x = 0;

    printf("Enter a number: ");
    scanf("%i",&n);

    while(x<n){

        printf("\n %i \n",x * 10);
        x = x + 1;


    }
    return 0;
}
