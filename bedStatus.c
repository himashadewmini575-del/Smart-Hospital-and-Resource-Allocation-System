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

void admitToAWard(int bedOccupancy[][20],int addBedNumber[],int addWardID[],int i){

    printf("Enter Ward ID :");
    scanf("%d",&addWardID[i]);

    while(addWardID[i]<1 || addWardID[i]>MAX_WARDS){
        printf("\n**INVALID WARD ID**\n\n");

    printf("Enter Ward ID :");
    scanf("%d",&addWardID[i]);
    }

    if(addWardID[i]==1){

        printf("Enter Bed Number :");
        scanf("%d",&addBedNumber[i]);

        while(addBedNumber[i]<1 || addBedNumber[i]>20){
            printf("\n**MAXIMUM BEDS -20**\n\n");

              printf("Enter Bed Number :");
              scanf("%d",&addBedNumber[i]);
        }
    }

    if(addWardID[i]==2){

         printf("Enter Bed Number :");
         scanf("%d",&addBedNumber[i]);

        while(addBedNumber[i]<1 || addBedNumber[i]>10){
            printf("\n**MAXIMUM BEDS -10**\n\n");

            printf("Enter Bed Number :");
            scanf("%d",&addBedNumber[i]);
        }
    }

    if(addWardID[i]==3){
        printf("Enter Bed Number :");
        scanf("%d",&addBedNumber[i]);

        while(addBedNumber[i]<1 || addBedNumber[i]>10){
            printf("\n**MAXIMUM BEDS -10**\n\n");

            printf("Enter Bed Number :");
            scanf("%d",&addBedNumber[i]);
        }
    }

    if(addWardID[i]==4){
        printf("Enter Bed Number :");
        scanf("%d",&addBedNumber[i]);

        while(addBedNumber[i]<1 || addBedNumber[i]>5){
            printf("\n**MAXIMUM BEDS -5**\n\n");

            printf("Enter Bed Number :");
            scanf("%d",&addBedNumber[i]);
        }
    }

    if(bedOccupancy[addWardID[i]-1][addBedNumber[i]-1]==1){
        printf("\n**BED IS OCCUPIED**\n\n");
        admitToAWard(bedOccupancy,addBedNumber,addWardID,i);
    }

    else{
        bedOccupancy[addWardID[i]-1][addBedNumber[i]-1]=1;

        printf("\n^^Your bed is: Ward %d Bed %d^^\n\n",addWardID[i],addBedNumber[i]);
    }
}
