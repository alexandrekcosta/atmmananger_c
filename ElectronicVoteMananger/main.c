#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vote;
    int jair = 0;
    int lula = 0;
    int daciolo = 0;
    int fidelix = 0;
    int whitevote = 0;
    int nullvote = 0;

    printf("=====================================================");
    printf("\n:::::::::::ELECTRONIC VOTE MANANGER 1.0:::::::::::\n");
    printf("\nOptions to choose:1 - Jair Bolsonaro,2 - Lula,3 - Daciolo,4 - Fidelix,5 - White vote,6 - Null vote");
    printf("\nEnter your vote: ");
    scanf("%i",&vote);
    printf("\nThanks for your vote!");
    printf("\n=====================================================\n\n");

    while(vote !=0){

         printf("====================================================");
    printf("\n::::::::::::::ELECTRONIC VOTE MANANGER 1.0:::::::::::\n");
    printf("\nOptions to choose:1 - Jair Bolsonaro,2 - Lula,3 - Daciolo,4 - Fidelix,5 - White vote,6 - Null vote");
    printf("\nEnter your vote: ");
    scanf("%i",&vote);
    printf("\nThanks for your vote!");
    printf("\n======================================================\n\n");

    if(vote == 1){

        jair++;

    }
    else if(vote == 2){

        lula++;

    }
    else if(vote == 3){

        daciolo++;

    }
    else if(vote == 4){

        fidelix++;

    }
    else if(vote == 5){

        whitevote++;

    }
    else if(vote == 6){

        nullvote++;

    }

    }

    if(jair>lula && jair>daciolo || jair>fidelix){

        printf("\n\nBolsonaro won elections!\n\n");

    }
    else if(lula>jair && lula>daciolo || lula>fidelix){

        printf("\n\nLula won elections!\n\n");

    }
    else if(daciolo>jair && daciolo>lula || daciolo>fidelix){

        printf("\n\nDaciolo won elections!\n\n");

    }
    else if(fidelix>jair && fidelix>lula || fidelix>daciolo){

        printf("\n\nFidelix won elections!\n\n");

    }

    printf("\n\n=====================STATISTICS============================\n\n");
    printf("Votes for Bolsonaro: %i",jair);
    printf("\nVotes for Lula: %i",lula);
    printf("\nVotes for Daciolo: %i",daciolo);
    printf("\nVotes for Fidelix: %i",fidelix);
    printf("\nWhite votes: %i",whitevote);
    printf("\nNull votes: %i",nullvote);
    printf("\n=================================================================");


    return 0;
}
