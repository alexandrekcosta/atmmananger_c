#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("\nEnter number you wish multiplicate:\n");
    printf("\n---> ");
    scanf("%i",&n);

    for(int i =1;i<=10;i++){

        printf("\n%i * %i = %i\n",i,n,i * n);

    }
    return 0;
}
