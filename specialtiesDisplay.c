#include <stdio.h>
#include <stdlib.h>
#include "project.h"

#define MAX_SPECIALTY 4

void doctorSpecialtyData(const int specialtyID[],
                         const char specialty[][25],
                         const float baseConsultationFee[],
                         const int consultationTimeInMinutes[],
                         const int patientCap[]){

   printf("\n**DOCTOR SPECIALTY DETAILS**\n\n");
   printf("==============================================================================================================================\n");

    printf("%12s |","Specialty ID");
    printf("%25s |","Specialty Name");
    printf("%30s |","Base Consultation Fee(LKR)");
    printf("%30s |","Consultation Time/Patient");
    printf("%21s","Daily Patient Cap\n");

    printf("==============================================================================================================================\n");

    for(int i=0;i<MAX_SPECIALTY ;i++){

        printf("%12d |",specialtyID[i]);
        printf("%-25s |",specialty[i]);
        printf("%30.2f |",baseConsultationFee[i]);
        printf("%25d mins |",consultationTimeInMinutes[i]);
        printf("%20d",patientCap[i]);
        printf("\n");
    }
    printf("==============================================================================================================================\n");
}
