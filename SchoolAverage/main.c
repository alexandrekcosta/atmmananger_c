#include <stdio.h>
#include <stdlib.h>

int main()
{
     float s1,s2,s3,s4,a = 0;
    printf("================SCHOOL AVERAGE 1.0=============================\n");
    printf("Enter first exam score: ");
    scanf("%f",&s1);
    printf("\nEnter second exam score: ");
    scanf("%f",&s2);
    printf("\nEnter third exam score: ");
    scanf("%f",&s3);
    printf("\nEnter fourth exam score: ");
    scanf("%f",&s4);
    a = (s1+s2+s3+s4)/4;
    printf("\nSCORE: %f\n",a);
    if(a>=7){

        printf("\nAPPROVED\n");

    }else{

        printf("\nREPPROVED\n");

    }
    return 0;
}
