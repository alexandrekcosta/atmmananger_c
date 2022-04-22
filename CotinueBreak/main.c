#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int i = 0;i<=100;i++){

        if(i==20){

            printf("-\n");

            continue;

        }

        if(i==80){

            printf("-\n");

            break;

        }

        printf("%i\n",i);
    }
    return 0;
}
