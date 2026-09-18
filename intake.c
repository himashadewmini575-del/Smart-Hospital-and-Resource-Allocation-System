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
                   char emergencyContactNumber[][11],
                   int triageLevel[],
                   int addSpecialtyID[],
                   int addWardID[],
                   int daysAdmitted[],
                   int currentQueueCount[],
                   float waitTime[],
                   const int consultationTimeInMinutes[],
                   int patientID[]){

    int hours=0;   //since 00:00
    int minutes=0;

    int admissionStatus=0;

    printf("\n");

    for(int i=*patientCount;i<MAXPATIENTS;i++){

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
    scanf("%12s",IDNumber[i]);

    printf("\n--EMERGENCY CONTACT details--\n\n");

    printf("Enter Contact Number :");
    scanf("%10s",emergencyContactNumber[i]);

    printf("\n");

    printf("Enter Check-in time (eg:-12:23) :");
    scanf("%2d:%2d",&hours,&minutes);

    while(minutes>=60 || hours>=24 || minutes<0 || hours<0){

    printf("**INPUT A VALID TIME**\n");

    printf("Enter Check-in time (eg:-12:23) :");
    scanf("%2d:%2d",&hours,&minutes);
    }

    checkInTime[i]=minutes+hours*60;

    //printf("%lu",checkInTime[i]); // test

    printf("Enter Emergency/Triage Level (1=Normal,2=Urgent,3=Critical) :");
    scanf("%d",&triageLevel[i]);

    while(triageLevel[i]<1 || triageLevel[i]>3){
            printf("\n**INPUT A VALID LEVEL**\n\n");

         printf("Enter Emergency/Triage Level (1=Normal,2=Urgent,3=Critical) :");
         scanf("%d",&triageLevel[i]);
    }

    printf("Enter Specialty ID you want to select :");
    scanf("%d",&addSpecialtyID[i]);

    while(addSpecialtyID[i]<1 || addSpecialtyID[i]>4){
        printf("\n**INPUT A VALID SPECIALTY ID**\n\n");

          printf("Enter Specialty ID you want to select :");
          scanf("%d",&addSpecialtyID[i]);
    }

    //wait time calculation

    waitTime[i]=currentQueueCount[addSpecialtyID[i]-1]*consultationTimeInMinutes[addSpecialtyID[i]-1];

         if(addSpecialtyID[i]==1 && currentQueueCount[0]<30){
            currentQueueCount[0]++;
         }

         else if(addSpecialtyID[i]==2 && currentQueueCount[1]<20){
            currentQueueCount[1]++;
         }

         else if(addSpecialtyID[i]==3 && currentQueueCount[2]<12){
            currentQueueCount[2]++;
         }

         else if(addSpecialtyID[i]==4 && currentQueueCount[3]<10){
            currentQueueCount[3]++;
         }

    //printf("%d",waitTime[i]);

    printf("\n--WARD ADMISSION DETAILS--\n\n");

    printf("Is Patient already admitted to a ward? (1=Yes,0=No) :");
    scanf("%d",&admissionStatus);

     while(admissionStatus !=0 && admissionStatus !=1){
        printf("\n**INVALID INPUT**\n\n");

        printf("Is Patient already admitted to a ward? (1=Yes,0=No) :");
        scanf("%d",&admissionStatus);
    }

    if(admissionStatus==1){
        printf("Enter Ward ID :");
        scanf("%d",&addWardID[i]);

        while(addWardID[i]<1 || addWardID[i]>4){
        printf("\n**INPUT A VALID WARD ID**\n\n");

             printf("Enter Ward ID :");
             scanf("%d",&addWardID[i]);
        }

        printf("Enter number of days admitted :");
        scanf("%d",&daysAdmitted[i]);

        while(daysAdmitted[i]<1){
            printf("\n**INPUT A VALID NUMBER OF DAYS**\n\n");

            printf("Enter number of days admitted :");
            scanf("%d",&daysAdmitted[i]);
        }
    }

    else if(admissionStatus==0){
        daysAdmitted[i]=0;
    }
    patientID[i]=*patientCount;

    printf("Your Patient ID is PAT-%04d\n",patientID[i]);

    (*patientCount)++;
    break;

    }
}
