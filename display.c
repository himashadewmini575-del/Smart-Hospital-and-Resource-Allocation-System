#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void menu(char name[],unsigned short int age,unsigned long int checkInTime){

    int choice=0;

    printf("***MAIN MENU***\n");
    printf("1.New Patient Registration\n");
    printf("2.\n");

    printf("Enter Your Choice :");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        patientIntake(name,age,checkInTime);
        break;
    }
}
