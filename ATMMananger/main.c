#include <stdio.h>
#include <stdlib.h>

int s_pin,e_pin,o,ex;
float b = 0;
float ad = 0;
float aw = 0;

void deposit(float q){

b = b + q;

}

void withdraw(float q){

b = b - q;


}

int main()
{


     /*
      printf("\nPress 0 to exit application");
    scanf("%i",&exit);
     */




    printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\nSet PIN: ");
    scanf("%i",&s_pin);
    system("cls");
    printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\nEnter PIN: ");
    scanf("%i",&e_pin);

    while(e_pin !=s_pin){
        system("cls");
        printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\nInvalid PIN.\n");
        printf("\nEnter PIN: ");
        scanf("%i",&e_pin);

    }

    system("cls");
    printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\nWelcome to your account!\n");
    printf("BALLANCE: %.2f",b);
    printf("\nOptions to press: 1 - deposit,2 - withdraw: ");
    scanf("%i",&o);
    if(o==1){
        system("cls");
        printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\nEnter PIN: ");
        scanf("%i",&e_pin);

        while(s_pin !=e_pin){
            system("cls");
            printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            printf("\nInvalid PIN.\n");
            printf("\nEnter PIN: ");
            scanf("%i",&e_pin);

        }



        system("cls");
        printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("Enter amount to deposit: ");
        scanf("%f",&ad);

        while(ad <= 0){
            system("cls");
            printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            printf("Invalid amount!\n");
            printf("\nEnter amount to deposit: ");
            scanf("%f",&ad);

        }

        system("cls");
        printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\nWelcome to your account!");
        deposit(ad);
        printf("\nBALLANCE: %.2f",b);

    }

     if(o==2){
        system("cls");
        printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\nEnter PIN: ");
        scanf("%i",&e_pin);

        while(e_pin !=s_pin){
            system("cls");
            printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            printf("\nInvalid PIN!");
            printf("\nEnter PIN: ");
            scanf("%i",&e_pin);

        }

        system("cls");
        printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\nEnter amount to withdraw: ");
        scanf("%f",&aw);

        while(aw <=0){

            system("cls");
            printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
            printf("\nInvalid amount!\n");
            printf("\nEnter amount to withdraw: ");
            scanf("%f",&aw);


        }

        system("cls");
        printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
        printf("\nWelcome to your account!\n");
        withdraw(aw);
        printf("\nBALLANCE: %.2f",b);

     }/*else{
     system("cls");
     printf("::::::::::::::::::::::::::::::::::::ATM MANANGER 1.0:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
     printf("\nInvalid option!");


     }*/




    return 0;
}
