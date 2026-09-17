#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void bedArray(int bedOccupancy[][20],int wardID[]){

    printf("**BED MAP**\n\n");
    printf("1-Occupied\n");
    printf("0-Available\n\n");

    printf("  WARD   ");
    for (int j=0;j<20;j++){
            printf("|B%-2d | ",j+1);
        }
         printf("\n");

    for(int i=0;i<4;i++){
            printf("WARD ID %d",wardID[i]);
        for (int j=0;j<20;j++){
            printf("| %d  | ",bedOccupancy[i][j]);
        }
        printf("\n");
    }
}
