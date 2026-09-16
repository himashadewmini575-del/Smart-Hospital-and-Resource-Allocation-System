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
          char specialty[][20],
          float baseConsultationFee[],
          int consultationTimeInMinutes[],
          int patientCap[]){

    int choice=0;

    printf("***MAIN MENU***\n");
    printf("1.New Patient Registration\n");
    printf("2.Doctor Specialties Data\n");
    printf("3.Hospital Wards Data\n");
    printf("4.Bed Status\n");

    printf("\n");

    printf("Enter Your Choice :");
    scanf("%d",&choice);

    printf("\n");

    switch(choice){
    case 1:
        patientIntake(name,age,checkInTime,patientCount,contactNumber,address,IDNumber,emergencyContactNumber);

    case 2:
        doctorSpecialtyData(specialtyID,specialty,baseConsultationFee,consultationTimeInMinutes,patientCap);
        break;
    }
}
