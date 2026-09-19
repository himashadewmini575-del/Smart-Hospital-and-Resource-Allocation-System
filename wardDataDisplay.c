#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void hospitalWardData(const int wardID[],
                      const char wardName[][30],
                      const float dailyBedRate[],
                      const int bedCapacity[]){

   printf("\n**HOSPITAL WARDS DETAILS**\n\n");

   printf("===============================================================================================\n");
   printf("%10s |","Ward ID");
   printf("%35s |","Ward Name");
   printf("%25s |","Daily Bed Rate(LKR/DAY)");
   printf("%10s","Total Bed Capacity");

   printf("\n");

   printf("===============================================================================================\n");

   for(int i=0;i<MAX_WARDS;i++){

    printf("%10d |",wardID[i]);
    printf("%-30s Ward |",wardName[i]);
    printf("%25.2f |",dailyBedRate[i]);
    printf("%10d",bedCapacity[i]);

    printf("\n");
   }
   printf("===============================================================================================\n");

}
