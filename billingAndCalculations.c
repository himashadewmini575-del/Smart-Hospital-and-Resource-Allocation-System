#include <stdio.h>
#include <stdlib.h>
#include "project.h"

#define MAX_SPECIALTY 4

void wardStayBill(const float baseConsultationFee[],int daysAdmitted[],const float dailyBedRate[],int patientID[]){

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
