#include <stdio.h>
#include <stdlib.h>
#include "project.h"
#include <string.h>

#define MAX_SPECIALTY 4

float wardStayBill(int daysAdmitted[],const float dailyBedRate[],int i,int addWardID[]){

     float totalWardCost;

     totalWardCost=daysAdmitted[i]*dailyBedRate[addWardID[i]-1];

        return totalWardCost;
}

float surchargeCalc(const float baseConsultationFee[],
                    int i,
                    int triageLevel[],
                    int addSpecialtyID[]){

    float surcharge;
    int surchargeRate=surcharges(triageLevel,i);

    if(surchargeRate==-1){
        printf("**INVALID TRIAGE LEVEL**");

       return 0;
    }

    surcharge=baseConsultationFee[addSpecialtyID[i]-1]*surchargeRate/100;

    return surcharge;
}

float grossTotalBillCalc(int daysAdmitted[],
                         const float dailyBedRate[],
                         int i,
                         int addWardID[],
                         const float baseConsultationFee[],
                         int triageLevel[],
                         int addSpecialtyID[]){

        float emergencySurcharge=surchargeCalc(baseConsultationFee,i,triageLevel,addSpecialtyID);
        float totalWardCost=wardStayBill(daysAdmitted,dailyBedRate,i,addWardID);

    float grossTotal=baseConsultationFee[i]+emergencySurcharge+totalWardCost;

    return grossTotal;
}

float subsidyDiscount(unsigned short int age[],
                      int daysAdmitted[],
                      const float dailyBedRate[],
                      int i,
                      int addWardID[],
                      const float baseConsultationFee[],
                      int triageLevel[],
                      int addSpecialtyID[],
                      char subsidyEligibility[][25]){

    float grossTotal=grossTotalBillCalc(daysAdmitted,dailyBedRate,i,addWardID,baseConsultationFee,triageLevel,addSpecialtyID);


    if(age[i]<5 || age[i]>65){
            strcpy(subsidyEligibility[i],"15% Subsidy Eligible");
        return -grossTotal*0.15;
    }
    else{
            strcpy(subsidyEligibility[i],"Non-Subsidy Eligible");
        return -0.0;
    }
}
