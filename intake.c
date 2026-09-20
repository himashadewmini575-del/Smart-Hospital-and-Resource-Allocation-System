#include <stdio.h>
#include <stdlib.h>
#include "project.h"
#include <ctype.h>

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
                   int patientID[],
                   int addBedNumber[],
                   int bedOccupancy[][20],
                   int admissionStatus[],
                   char emergencyLevel[][10]){

    int hours=0;   //since 00:00
    int minutes=0;

    printf("\n");

    for(int i=*patientCount;i<MAX_PATIENTS;i++){

    printf("--PATIENT'S PERSONAL INFORMATION--\n\n");

    printf("Enter Patient's full Name :");
    scanf(" %[^\n]",name[i]);

    printf("Enter Patient's age :");

    while(scanf("%hu",&age[i])!=1 || age[i]>150){
        printf("\n***ENTER A VALID AGE***\n\n");

        while(getchar() !='\n');

        printf("Enter Patient's age :");
    }

    printf("Enter Contact number:");
    scanf("%10s",contactNumber[i]);

    int validContactNumber=1;   //contact Number Valid=1

      for(int j=0; contactNumber[i][j] != '\0'; j++){

        if(!isdigit(contactNumber[i][j])){
            validContactNumber=0;
            break;
        }
      }
       while(!validContactNumber){
        printf("\n***ENTER A VALID CONTACT NUMBER***\n\n");

        printf("Enter Contact number:");
        scanf("%10s",contactNumber[i]);

            validContactNumber=1;

                for(int j=0; contactNumber[i][j] != '\0'; j++){

                    if(!isdigit(contactNumber[i][j])){
                        validContactNumber=0;
                        break;
                    }
                }
       }

    printf("Enter Address :\n");
    scanf(" %[^\n]",address[i]);

    printf("Enter ID number :");
    scanf("%12s",IDNumber[i]);

    printf("\n--EMERGENCY CONTACT details--\n\n");

    printf("Enter Contact Number :");
    scanf("%10s",emergencyContactNumber[i]);

    printf("\n");

    printf("\n--WARD ADMISSION DETAILS--\n\n");

    printf("Enter Check-in time (eg:-12:23) :");
    scanf("%2d:%2d",&hours,&minutes);

    while(minutes>=60 || hours>=24 || minutes<0 || hours<0){

    printf("**INPUT A VALID TIME**\n");

    printf("Enter Check-in time (eg:-12:23) :");
    scanf("%2d:%2d",&hours,&minutes);
    }

    checkInTime[i]=minutes+hours*60;

    //printf("%lu",checkInTime[i]); // test

    printf("Enter Emergency/Triage Level \n\t 1=Normal\n\t 2=Urgent\n\t 3=Critical :");

    while(scanf("%d",&triageLevel[i]) !=1 || triageLevel[i]<1 || triageLevel[i]>3){
            printf("\n**INPUT A VALID LEVEL**\n\n");

            while(getchar() != '\n');

         printf("Enter Emergency/Triage Level \n\t 1=Normal\n\t 2=Urgent\n\t 3=Critical :");
    }

    triageLevelDisplay(triageLevel,emergencyLevel,i);

    printf("Enter Specialty ID you want to select :");

    while(scanf("%d",&addSpecialtyID[i]) !=1 || addSpecialtyID[i]<1 || addSpecialtyID[i]>4 ){
        printf("\n**INPUT A VALID SPECIALTY ID**\n\n");

            while(getchar() != '\n');

          printf("\nEnter Specialty ID you want to select :");
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

         printf("Is Patient getting Admitted (1=Yes, 0=No) :\n");

         while(scanf("%d",&admissionStatus[i]) !=1 ||(admissionStatus[i] !=0 && admissionStatus[i] !=1)){
         printf("\n**INVALID INPUT**\n\n");

         while(getchar()!='\n');

         printf("\nIs Patient already admitted to a ward? (1=Yes,0=No) :\n");
         }

        if(admissionStatus[i]==1){
                admitToAWard(bedOccupancy,addBedNumber,addWardID,i);
        }

        if(admissionStatus[i]==0){
           addWardID[i]=0;
           addBedNumber[i]=0;
           daysAdmitted[i]=0;

           printf("\n^^OUT PATIENT^^\n\n");
        }

    //printf("%d",waitTime[i]);

    patientID[i]=*patientCount;

    printf("\n^^Your Patient ID is PAT-%04d^^\n",patientID[i]);

    (*patientCount)++;
    break;

    }
}
