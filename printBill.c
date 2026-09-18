#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void printBill(int patientID[],
               char name[][20],
               const char specialty[][25],
               int patientCount,
               unsigned short int age[],
               const char wardName[][30],
               int triageLevel[],
               int daysAdmitted[],
               float waitTime[],
               int bedOccupancy[][20]){

    int selectedID;
    int i;

    printf("Enter Patient ID PAT-");
    scanf("%d",&selectedID);

    for(i=0;i<patientCount;i++){
            if(patientID[i]==selectedID){

    printf("=========================================================\n");
    printf("           SMART HOSPITAL ADMISSION & BILL               \n");
    printf("---------------------------------------------------------\n");
    printf("\n");
    printf("Patient ID              : PAT-%04d\n",patientID[i]);
    printf("Patient Name            : %-20s\n",name[i]);
    printf("Age                     : %hu Years\n",age[i]);
    printf("Specialty               : %s\n",specialty[i]);
    printf("Assigned Ward           : %-30s (Bed#%d)\n",wardName[i],bedOccupancy[i]);
    printf("Urgency Level           : Level %d\n",triageLevel[i]);

    printf("---------------------------------------------------------\n");

    printf("Base Consultation Fee   : LKR ");
    printf("Emergency Surcharges    : LKR ");
    printf("Ward Stay Cost(%d Days) : LKR ",daysAdmitted);

    printf("---------------------------------------------------------\n");

    printf("Gross Total Bill        : LKR ");
    printf("Age Subsidy Discount    : LKR ");

    printf("---------------------------------------------------------\n");

    printf("Final Payable Amount    : LKR  ");
    printf("Estimated Waiting Time  : %.2f mins ",waitTime[i]);
    }
 }
}
