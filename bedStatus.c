#include <stdio.h>
#include <stdlib.h>
#include "project.h"
#define MAX_WARDS 4

void bedArray(int bedOccupancy[][20],const int wardID[]){

    printf("**BED MAP**\n\n");
    printf("1-Occupied\n");
    printf("0-Available\n\n");

    printf("  WARD   ");
    for (int j=0;j<20;j++){
            printf("|B%-2d | ",j+1);
        }
         printf("\n");

    for(int i=0;i<MAX_WARDS;i++){
            printf("WARD ID %d",wardID[i]);
        for (int j=0;j<20;j++){
            printf("| %d  | ",bedOccupancy[i][j]);
        }
        printf("\n");
    }
}

void admitToAWard(int bedOccupancy[][20]){

   int i;
   int j;

    printf("Enter Ward ID :");
    scanf("%d",&i);

    while(i<1 || i>MAX_WARDS){
        printf("\n**INVALID WARD ID**\n\n");

    printf("Enter Ward ID :");
    scanf("%d",&i);
    }

    if(i==1){

        printf("Enter Bed Number :");
        scanf("%d",&j);

        while(j<1 || j>20){
            printf("\n**MAXIMUM BEDS -20**\n\n");

              printf("Enter Bed Number :");
              scanf("%d",&j);
        }
    }

    if(i==2){

         printf("Enter Bed Number :");
         scanf("%d",&j);

        while(j<1 || j>10){
            printf("\n**MAXIMUM BEDS -10**\n\n");

            printf("Enter Bed Number :");
            scanf("%d",&j);
        }
    }

    if(i==3){
        printf("Enter Bed Number :");
        scanf("%d",&j);

        while(j<1 || j>10){
            printf("\n**MAXIMUM BEDS -10**\n\n");

            printf("Enter Bed Number :");
            scanf("%d",&j);
        }
    }

    if(i==4){
        printf("Enter Bed Number :");
        scanf("%d",&j);

        while(j<1 || j>5){
            printf("\n**MAXIMUM BEDS -5**\n\n");

            printf("Enter Bed Number :");
            scanf("%d",&j);
        }
    }

    if(bedOccupancy[i-1][j-1]==1){
        printf("\n**BED IS OCCUPIED**\n\n");
        admitToAWard(bedOccupancy);
    }

    else{
        bedOccupancy[i-1][j-1]=1;

        printf("Your bed is: Ward %d Bed %d\n\n",i,j);
    }
    }





