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
          int specialtyID[],
          char specialty[][25],
          float baseConsultationFee[],
          int consultationTimeInMinutes[],
          int patientCap[],
          int wardID[],
          char wardName[][30],
          float dailyBedRate[],
          int bedCapacity[],
          int bedOccupancy[][20]){

    int choice=0;

    printf("***MAIN MENU***\n\n");
    printf("1.New Patient Registration\n");
    printf("2.Doctor Specialties Data\n");
    printf("3.Hospital Wards Data\n");
    printf("4.Bed Status\n");
    printf("5.Bed \n");

    printf("\n");

    printf("Enter Your Choice :");
    scanf("%d",&choice);

    printf("\n");

    switch(choice){
    case 1:
        patientIntake(name,age,checkInTime,patientCount,contactNumber,address,IDNumber,emergencyContactNumber);
        break;

    case 2:
        doctorSpecialtyData(specialtyID,specialty,baseConsultationFee,consultationTimeInMinutes,patientCap);
        break;

    case 3:
        hospitalWardData(wardID,wardName,dailyBedRate,bedCapacity);
        break;

    case 4:
        bedArray(bedOccupancy,wardID);
        break;
    }
}
