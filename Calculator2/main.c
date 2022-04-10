#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1;
    float n2;
    float r;
    char op;


    do{

        printf("\n::::::::::::::::::::CALCULATOR 2.0::::::::::::::::::::::::::\n");
        printf("OPTIONS TO PRESS\n");
        printf("1 - sum\n");
        printf("2 - subtraction\n");
        printf("3 - multiplication\n");
        printf("4 - division\n");


        printf("\nEnter option you wish: ");
        op = getchar();

        if(op=='1'){
            printf("\n\nEnter first number: \n\t");
            scanf("%f",&n1);
            printf("Enter second number: \n\t");
            scanf("%f",&n2);
            r = n1 + n2;
            printf("\nRESULT: %f\n",r);
        }
        else if(op=='2'){
            printf("\n\nEnter first number: \n\t");
            scanf("%f",&n1);
            printf("Enter second number: \n\t");
            scanf("%f",&n2);
            r = n1 - n2;
            printf("\nRESULT: %f\n",r);
        }
        else if(op=='3'){
            printf("\n\nEnter first number: \n\t");
            scanf("%f",&n1);
            printf("Enter second number: \n\t");
            scanf("%f",&n2);
            r = n1 * n2;
            printf("\nRESULT: %f\n",r);


        }
        else if(op=='4'){
            printf("\n\nEnter first number: \n\t");
            scanf("%f",&n1);
            printf("Enter second number: \n\t");
            scanf("%f",&n2);
            r = n1 / n2;
            printf("\nRESULT: %f\n",r);


        }

    }while(op != '0');

    return 0;
}
