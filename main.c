#include <stdio.h>
#include <stdlib.h>
#include "project.h"
#define MAXPATIENTS 1000

int main()
{
    printf("Smart Hospital\n");
    printf("          &\n");
    printf("       Resource Allocation System\n");
    printf("\n");

    char name[MAXPATIENTS][20];
    unsigned short int age[MAXPATIENTS];
    unsigned long int checkInTime[MAXPATIENTS]; //in minutes
    unsigned int patientCount=0;
    char contactNumber[MAXPATIENTS][11];
    char address[MAXPATIENTS][50];
    char IDNumber[MAXPATIENTS];
    char emergencyContactNumber[MAXPATIENTS];

    menu(name,age,checkInTime,&patientCount,contactNumber,address,IDNumber,emergencyContactNumber);
    return 0;
}
