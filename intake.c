#include <stdio.h>
#include <stdlib.h>
#include "project.h"
#define MAXPATIENTS 1000

void patientIntake(char name[][20],
                   unsigned short int age[],
                   unsigned long int checkInTime[],
                   unsigned int* patientCount,
                   char contactNumber[][11],
                   char address[][50],
                   char IDNumber[][13],
                   char emergencyContactNumber[][11]){

    int hours=0;   //since 00:00
    int minutes=0;

    printf("\n");

    for(int i=0;i<MAXPATIENTS;i++){

    printf("--PATIENT'S PERSONAL INFORMATION--\n\n");

    printf("Enter Patient's full Name :");
    scanf(" %[^\n]",name[i]);

    printf("Enter Patient's age :");
    scanf("%hu",&age[i]);

    printf("Enter Contact number:");
    scanf("%10s",contactNumber[i]);

    printf("Enter Address :\n");
    scanf(" %[^\n]",address[i]);

    printf("Enter ID number :");
    scanf("%13s",IDNumber[i]);

    printf("\n--EMERGENCY CONTACT details--\n\n");

    printf("enter Contact Number :");
    scanf("%10s",emergencyContactNumber[i]);

    printf("Enter Check-in time (eg:-12:23) :");
    scanf("%2d:%2d",&hours,&minutes);

    while(minutes>=60 || hours>=24){

    printf("**INPUT A VALID TIME**\n");

    printf("Enter Check-in time (eg:-12:23) :");
    scanf("%2d:%2d",&hours,&minutes);
    }

    checkInTime[i]=minutes+hours*60;

    //printf("%lu",checkInTime[i]); // test

    (*patientCount)++;
    break;

    }
}
