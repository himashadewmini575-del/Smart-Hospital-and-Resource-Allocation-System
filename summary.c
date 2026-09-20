#include <stdio.h>
#include <stdlib.h>
#include "project.h"

float revenueCalc( float finalPayableAmount[],unsigned int patientCount){

    float revenue=0.0;

    for(int i=0;i<patientCount;i++){
        revenue += finalPayableAmount[i];
    }
    return revenue;
}

float discountCalc(float discount[],unsigned int patientCount){

   float finalDiscount=0.0;

    for(int i=0;i<patientCount;i++){
            finalDiscount -=discount[i];
    }
    return -finalDiscount;
}

void bedOccupancyPercentage(int addWardID[],unsigned int patientCount,float bedPercentage[],int admissionStatus[]){

int bedCount[MAX_WARDS];

    bedCount[0]=0;
    bedCount[1]=0;
    bedCount[2]=0;
    bedCount[3]=0;

    for(int i=0;i<patientCount;i++){

        if(admissionStatus[i]==1 && addWardID[i]>=1 && addWardID[i]<=4){
          bedCount[addWardID[i]-1]++;
        }
    }
  bedPercentage[0]=(float)bedCount[0]/20*100 ;
  bedPercentage[1]=(float)bedCount[1]/10*100 ;
  bedPercentage[2]=(float)bedCount[2]/10*100 ;
  bedPercentage[3]=(float)bedCount[3]/5*100 ;
}

int sortHighestPaying(float finalPayableAmount[],unsigned int patientCount){

     int maxPayment=-1;

    for(int i=0;i<patientCount;i++){

        if(maxPayment==-1 || finalPayableAmount[i]>finalPayableAmount[maxPayment]){
            maxPayment=i;
        }
    }
    return maxPayment;
}

void summaryReport(unsigned int patientCount,
                   float discount[],
                   float finalPayableAmount[],
                   float bedPercentage[],
                   char name[][20]){

    if(patientCount!=0){

     int highestPayment=sortHighestPaying(finalPayableAmount,patientCount);

    float totalRevenue=revenueCalc(finalPayableAmount,patientCount);
    float totalDiscount=discountCalc(discount,patientCount);

    printf("Total Revenue Earned By Hospital             : LKR %10.2f\n",totalRevenue);
    printf("Total Discount Granted                       : LKR %10.2f\n",totalDiscount);
    printf("General Ward Bed Occupancy                   : %.2f%%\n",bedPercentage[0]);
    printf("Paediatric Ward Bed Occupancy                : %.2f%%\n",bedPercentage[1]);
    printf("Surgical Ward Bed Occupancy                  : %.2f%%\n",bedPercentage[2]);
    printf("ICU(Intensive Care Unit) Ward Bed Occupancy  : %.2f%%\n",bedPercentage[3]);
    printf("Highest-Paying Bill                          : LKR %10.2f\n",finalPayableAmount[highestPayment]);
    printf("Highest-Paying Patient                       : %s\n",name[highestPayment]);
}
    else {
       printf("\n***NO PATIENT HAS REGISTERED YET***\n\n");
   }
}
