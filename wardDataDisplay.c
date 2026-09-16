#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void hospitalWardData(int wardID[],
                      char wardName[][30],
                      float dailyBedRate[],
                      int bedCapacity[]){

   printf("\n**HOSPITAL WARDS DATA**\n\n");

   printf("===============================================================================================\n");
   printf("%10s |","Ward ID");
   printf("%35s |","Ward Name");
   printf("%25s |","Daily Bed Rate(LKR/DAY)");
   printf("%10s","Total Bed Capacity");

   printf("\n");

   printf("===============================================================================================\n");

   for(int i=0;i<4;i++){

    printf("%10d |",wardID[i]);
    printf("%30s Ward |",wardName[i]);
    printf("%25.2f |",dailyBedRate[i]);
    printf("%10d",bedCapacity[i]);

    printf("\n");
   }
   printf("===============================================================================================\n");

}
