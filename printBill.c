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
               int bedOccupancy[][20],
               int surchargeRate,
               int addSpecialtyID[],
               int addWardID[],
               const float baseConsultationFee[],
               int addBedNumber[]){

    int selectedID;
    int i;

    printf("Enter Patient ID PAT-");
    scanf("%d",&selectedID);

    for(i=0;i<patientCount;i++){
            if(patientID[i]==selectedID){

    int admissionStatus=0;

                    printf("Is Patient already admitted to a ward? (1=Yes,0=No) :");

                    while(scanf("%d",&admissionStatus)!=1 || (admissionStatus !=0 && admissionStatus !=1)){
                            printf("\n**INVALID INPUT**\n\n");

                            while(getchar()!='\n');

        printf("Is Patient already admitted to a ward? (1=Yes,0=No) :");
    }

    if(admissionStatus==1){

        printf("Enter number of days admitted :");

        while(scanf("%d",&daysAdmitted[i]) !=1 || daysAdmitted[i]<1){
            printf("\n**INPUT A VALID NUMBER OF DAYS**\n\n");

            printf("Enter number of days admitted :");
        }
    }

    else if(admissionStatus==0){
        daysAdmitted[i]=0;
    }

   float surcharge= surchargeCalc(baseConsultationFee,i,triageLevel,addSpecialtyID);

   surchargeRate=surcharges(triageLevel,i);

   if(surchargeRate!=-1){

    printf("=========================================================\n");
    printf("           SMART HOSPITAL ADMISSION & BILL               \n");
    printf("---------------------------------------------------------\n");
    printf("\n");
    printf("Patient ID              : PAT-%04d\n",patientID[i]);
    printf("Patient Name            : %-s\n",name[i]);
    printf("Age                     : %hu Years\n",age[i]);
    printf("Specialty               : %s\n",specialty[addSpecialtyID[i]-1]);
    printf("Assigned Ward           : %-s (Bed#%d)\n",wardName[addWardID[i]-1],addBedNumber[i]);
    printf("Urgency Level           : Level %d\n",triageLevel[i]);

    printf("---------------------------------------------------------\n");

    printf("Base Consultation Fee   : LKR \n");
    printf("Emergency Surcharges    : LKR %.2f (%d%%)\n",surcharge,surchargeRate);
    printf("Ward Stay Cost(%d Days) : LKR \n",daysAdmitted[i]);

    printf("---------------------------------------------------------\n");

    printf("Gross Total Bill        : LKR \n");
    printf("Age Subsidy Discount    : LKR \n");

    printf("---------------------------------------------------------\n");

    printf("Final Payable Amount    : LKR  \n");
    printf("Estimated Waiting Time  : %.2f mins \n",waitTime[i]);
    }
   }
 }
}
