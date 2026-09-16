#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void doctorSpecialtyData(int specialtyID[],
                         char specialty[][20],
                         float baseConsultationFee[],
                         int consultationTimeInMinutes[],
                         int patientCap[]){

   printf("\n**DOCTOR SPECIALTY DATA**\n\n");
   printf("==============================================================================================================================\n");

    printf("%10s |","Specialty ID");
    printf("%25s |","Specialty Name");
    printf("%30s |","Base Consultation Fee(LKR)");
    printf("%30s |","Consultation Time/Patient");
    printf("%21s","Daily Patient Cap\n");

    printf("==============================================================================================================================\n");

    for(int i=0;i<4;i++){

        printf("%12d |",specialtyID[i]);
        printf("%25s |",specialty[i]);
        printf("%30f |",baseConsultationFee[i]);
        printf("%30d |",consultationTimeInMinutes[i]);
        printf("%20d",patientCap[i]);
        printf("\n");
    }
    printf("==============================================================================================================================\n");
}
