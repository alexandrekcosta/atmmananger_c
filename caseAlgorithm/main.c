#include <stdio.h>
#include <stdlib.h>

int main()
{

int n;

    do{
        printf("\nEnter a number between 0 and 9: ");
        scanf("%i",&n);

        switch(n){

            case 0:
                printf("\nYou entered number zero.");
                system("clear");
            break;

            case 1:
                printf("\nYou entered number one.",n);
                system("clear");
            break;

            case 2:
                printf("\nYou entered number two.",n);
                system("clear");
            break;

            case 3:
                printf("\nYou entered number three.",n);
                system("clear");
            break;

            case 4:
                printf("\nYou entered number four.",n);
                system("clear");
            break;

            case 5:
                printf("\nYou entered number five.",n);
                system("clear");
            break;

            case 6:
                printf("\nYou entered number six.",n);
                system("clear");
            break;

            case 7:
                printf("\nYou entered number seven.",n);
                system("clear");
            break;

            case 8:
                printf("\nYou entered number eight.",n);
                system("clear");
            break;

            case 9:
                printf("\nYou entered number nine.",n);
                system("clear");
            break;

            default:;

        }
    }while(n !=10);

    return 0;
}
