#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void menu(char name[][20],unsigned short int age[],unsigned long int checkInTime[],unsigned int* patientCount,char contactNumber[][11],char address[][50],char IDNumber[],char emergencyContactNumber[]){

    int choice=0;

    printf("***MAIN MENU***\n");
    printf("1.New Patient Registration\n");
    printf("2.\n");

    printf("\n");

    printf("Enter Your Choice :");
    scanf("%d",&choice);

    printf("\n");

    switch(choice){
    case 1:
        patientIntake(name,age,checkInTime,patientCount,contactNumber,address,IDNumber,emergencyContactNumber);
        break;
    }
}
