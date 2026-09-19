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
          float waitTime[],
          int patientID[],
          int addBedNumber[],
          char subsidyEligibility[][25],
          char subsidyDiscountRate[][5],
          char emergencyLevel[][10],
          int admissionStatus[]){

    int choice=0;

    while(1){

    printf("\n***MAIN MENU***\n\n");
    printf("1.Doctor Specialties Details\n");
    printf("2.Hospital Wards Details\n");
    printf("3.Bed Status\n");
    printf("4.New Patient Registration\n");
    printf("5.Print Bill\n");

    printf("\n");

    printf("Enter Your Choice :");
    scanf("%d",&choice);

    printf("\n");

    switch(choice){
    case 1:
        doctorSpecialtyData(specialtyID,specialty,baseConsultationFee,consultationTimeInMinutes,patientCap);
        continue;

    case 2:
        hospitalWardData(wardID,wardName,dailyBedRate,bedCapacity);
        continue;

    case 3:
        bedArray(bedOccupancy,wardID);
        continue;

    case 4:
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
                      consultationTimeInMinutes,
                      patientID,
                      addBedNumber,
                      bedOccupancy,
                      admissionStatus);
        continue;

    case 5:
        printBill(patientID,
                  name,
                  specialty,
                  *patientCount,
                  age,
                  wardName,
                  triageLevel,
                  daysAdmitted,
                  waitTime,
                  addSpecialtyID,
                  addWardID,
                  baseConsultationFee,
                  addBedNumber,
                  dailyBedRate,
                  checkInTime,
                  subsidyEligibility,
                  subsidyDiscountRate,
                  emergencyLevel,
                  admissionStatus);
        continue;
    }
  }
}
