#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void printBill(int patientID[],
               char name[][50],
               const char specialty[][25],
               int patientCount,
               unsigned short int age[],
               const char wardName[][30],
               int triageLevel[],
               int daysAdmitted[],
               float waitTime[],
               int addSpecialtyID[],
               int addWardID[],
               const float baseConsultationFee[],
               int addBedNumber[],
               const float dailyBedRate[],
               unsigned long int checkInTime[],
               char subsidyEligibility[][25],
               char subsidyDiscountRate[][5],
               char emergencyLevel[][10],
               int admissionStatus[],
               float discount[],
               float finalPayableAmount[]){

    int selectedID;
    int i;

    printf("Enter Patient ID PAT-");
    scanf("%d",&selectedID);

    for(i=0;i<patientCount;i++){
            if(patientID[i]==selectedID){

    if(admissionStatus[i]==1){

        printf("Enter number of days admitted :");

        while(scanf("%d",&daysAdmitted[i]) !=1 || daysAdmitted[i]<1){
            printf("\n**INPUT A VALID NUMBER OF DAYS**\n\n");

            printf("Enter number of days admitted :");
        }
    }

    else if(admissionStatus[i]==0){
        daysAdmitted[i]=0;
    }

    int hours=checkInTime[i]/60;
    int mins=checkInTime[i]%60;

   float surcharge= surchargeCalc(baseConsultationFee,i,triageLevel,addSpecialtyID);
   float wardStayCost=wardStayBill(daysAdmitted,dailyBedRate,i,addWardID);
   float totalGrossCharge=grossTotalBillCalc(daysAdmitted,dailyBedRate,i,addWardID,baseConsultationFee,triageLevel,addSpecialtyID);
   discount[i]=subsidyDiscount(age,daysAdmitted,dailyBedRate,i,addWardID,baseConsultationFee,triageLevel,addSpecialtyID,subsidyEligibility,subsidyDiscountRate);
   finalPayableAmount[i]=finalPayment(age,daysAdmitted,dailyBedRate,i,addWardID,baseConsultationFee,triageLevel,addSpecialtyID,subsidyEligibility,subsidyDiscountRate);

   int surchargeRate=surcharges(triageLevel,i);

   if(surchargeRate!=-1){

    printf("\n=========================================================\n");
    printf("           SMART HOSPITAL ADMISSION & BILL               \n");
    printf("---------------------------------------------------------\n");
    printf("\n");
    printf("Patient ID               : PAT-%04d\n",patientID[i]);
    printf("Patient Name             : %-s\n",name[i]);
    printf("Age                      : %hu Years (%s)\n",age[i],subsidyEligibility[i]);
    printf("Specialty                : %s\n",specialty[addSpecialtyID[i]-1]);

    if(addWardID[i]==0){
    printf("Assigned Ward            : OPD (No Ward)\n");
    }
    else{
    printf("Assigned Ward            : %-s (Bed#%d)\n",wardName[addWardID[i]-1],addBedNumber[i]);
    }

    printf("Urgency Level            : Level %d (%s)\n",triageLevel[i],emergencyLevel[i]);

    printf("---------------------------------------------------------\n");

    printf("Base Consultation Fee    : LKR %10.2f\n",baseConsultationFee[addSpecialtyID[i]-1]);
    printf("Emergency Surcharges     : LKR %10.2f (%d%%)\n",surcharge,surchargeRate);
    printf("Ward Stay Cost(%3d Days) : LKR %10.2f\n",daysAdmitted[i],wardStayCost);

    printf("---------------------------------------------------------\n");

    printf("Gross Total Bill         : LKR %10.2f\n",totalGrossCharge);
    printf("Age Subsidy Discount     : LKR %+10.2f(%s)\n",discount[i],subsidyDiscountRate[i]);

    printf("---------------------------------------------------------\n");

    printf("Final Payable Amount     : LKR %10.2f\n",finalPayableAmount[i]);
    printf("Estimated Waiting Time   : %.2f mins \n",waitTime[i]);
    printf("Check-in Time            : %02d:%02d\n",hours,mins);
    }
   }
 }
}
