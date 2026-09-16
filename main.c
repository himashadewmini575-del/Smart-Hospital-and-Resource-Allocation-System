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
    char IDNumber[MAXPATIENTS][13];
    char emergencyContactNumber[MAXPATIENTS][11];

    int specialtyID[]={1,2,3,4};
    char specialty[][20]={"General Practice","Paediatrics","Cardiology","Neurology"};
    float baseConsultationFee[]={1500,2500,4500,5000};
    int consultationTimeInMinutes[]={15,20,30,30};
    int patientCap[]={30,20,12,10};

    int wardID[]={1,2,3,4};
    char wardName[][20]={"General","Paediatric","Surgical","ICU"};
    float dailyBedRate[]={3000.00,6000.00,12000.00,25000.00};
    int bedCapacity[]={20,10,10,5};

    menu(name,age,checkInTime,&patientCount,contactNumber,address,IDNumber,emergencyContactNumber,specialtyID,specialty,baseConsultationFee,consultationTimeInMinutes,patientCap);
    return 0;
}
