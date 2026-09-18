#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void menu(char name[][20],
          unsigned short int age[],
          unsigned long int checkInTime[],
          unsigned int* patientCount,
          char contactNumber[][11],
          char address[][50],
          char IDNumber[][13],
          char emergencyContactNumber[][11],
          const int specialtyID[],
          const char specialty[][25],
          const float baseConsultationFee[],
          const int consultationTimeInMinutes[],
          const int patientCap[],
          const int wardID[],
          const char wardName[][30],
          const float dailyBedRate[],
          const int bedCapacity[],
          int bedOccupancy[][20],
          int triageLevel[],
          int addSpecialtyID[],
          int addWardID[],
          int daysAdmitted[],
          int currentQueueCount[],
          int waitTime[]){

    int choice=0;

    while(1){

    printf("***MAIN MENU***\n\n");
    printf("1.New Patient Registration\n");
    printf("2.Doctor Specialties Data\n");
    printf("3.Hospital Wards Data\n");
    printf("4.Bed Status\n");
    printf("5.Admit to a Ward\n");
    printf("6.Bill Calculation\n");

    printf("\n");

    printf("Enter Your Choice :");
    scanf("%d",&choice);

    printf("\n");

    switch(choice){
    case 1:
        patientIntake(name,
                      age,
                      checkInTime,
                      patientCount,
                      contactNumber,
                      address,
                      IDNumber,
                      emergencyContactNumber,
                      triageLevel,
                      addSpecialtyID,
                      addWardID,
                      daysAdmitted,
                      currentQueueCount,
                      waitTime,
                      consultationTimeInMinutes);
        continue;

    case 2:
        doctorSpecialtyData(specialtyID,specialty,baseConsultationFee,consultationTimeInMinutes,patientCap);
        continue;

    case 3:
        hospitalWardData(wardID,wardName,dailyBedRate,bedCapacity);
        continue;

    case 4:
        bedArray(bedOccupancy,wardID);
        continue;

    case 5:
        admitToAWard(bedOccupancy);
        continue;

    case 6:
        printBill(addSpecialtyID,*patientCount,currentQueueCount,specialtyID,consultationTimeInMinutes,waitTime);
        continue;
    }
  }
}
