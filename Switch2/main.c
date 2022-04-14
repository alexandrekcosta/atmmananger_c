#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    do{
        printf("\nEnter a number: ");
        scanf("%i",&n);
        system("clear");

        switch(n){

            case 0:
                printf("You entered number 0\n");
            break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("\nYou entered a number between 1 and 5\n");
            break;
            case 6:
                printf("\nYou entered number 6\n");
            break;
            case 7:
                printf("\nYou entered number 7\n");
            break;
            case 8:
                printf("\nYou entered number 8\n");
            break;
            case 9:
                printf("\nYou entered number 9\n");
            break;
            default:
                printf("\nYou entered a default number\n");
            break;


        }
    }while(n != 45501);
    return 0;
}
