#include <stdio.h>
#include <stdlib.h>

int mb,npq,q[];

void bills(){

    int i;
    int ba;

    for(i = 1;i<npq;i++){

    printf("\nEnter person #%i's pending bills to pay: ",i);
    scanf("%i",&ba);
    q[i];
    }

}

void queue(){

    int qc = mb;
    int fpq = 1;

    while(qc !=0){

        while(q[npq]<=0){

            fpq++;

            if(fpq<=0){

                fpq = 0;


            }


        }


    }

printf("\nPerson #%i goes to counter holding %i pending bills to pay",fpq,q[fpq]);
printf("\nMaximum limit for bills paying equals %i",mb);
q[fpq] = q[fpq] - mb;

    if(q[fpq] <= 0){

        printf("\nThen leaves queue.\n");
        qc--;


    }else{

        printf("\nThen goes to start of queue with %i pending bills remaining to pay.\n");


    }
fpq++;
    if(fpq = npq){

        fpq = 0;

    }

    system("PAUSE");

}

int main()
{

    printf("::::::::::::::::::::::::::::::::::::::::::BANK BILL PAY QUEUE MANANGER 1.0::::::::::::::::::::::::::::::::::::");
    printf("\n\nEnter maximum amount of bills to pay: ");
    scanf("%i",&mb);
    printf("\nEnter number of persons on queue: ");
    scanf("%i",&npq);
    bills();
    queue();
    printf(":::::::::::::::::::::::::::::::::::::::::THE END::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
    getch();
    return 0;
}
