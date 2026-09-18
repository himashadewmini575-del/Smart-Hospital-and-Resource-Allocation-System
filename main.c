#include <stdio.h>
#include <stdlib.h>
#include "project.h"

#define MAX_PATIENTS 1000
#define MAX_WARDS 4
#define MAX_SPECIALTY 4

int main()
{
    printf("Smart Hospital\n");
    printf("          &\n");
    printf("       Resource Allocation System\n");
    printf("\n");

    char name[MAX_PATIENTS][20];
    unsigned short int age[MAX_PATIENTS];
    unsigned long int checkInTime[MAX_PATIENTS]; //in minutes
    unsigned int patientCount=0;
    char contactNumber[MAX_PATIENTS][11];
    char address[MAX_PATIENTS][50];
    char IDNumber[MAX_PATIENTS][13];
    char emergencyContactNumber[MAX_PATIENTS][11];
    int triageLevel[MAX_PATIENTS];
    int addSpecialtyID[MAX_PATIENTS];
    int addWardID[MAX_PATIENTS];

    const int specialtyID[]={1,2,3,4};
    const char specialty[][25]={"General Practice(OPD)","Paediatrics","Cardiology","Neurology"};
    const float baseConsultationFee[]={1500,2500,4500,5000};
    const int consultationTimeInMinutes[]={15,20,30,30};
    const int patientCap[]={30,20,12,10};

    const int wardID[]={1,2,3,4};
    const char wardName[][30]={"General","Paediatric","Surgical","ICU(Intensive Care Unit)"};
    const float dailyBedRate[]={3000.00,6000.00,12000.00,25000.00};
    const int bedCapacity[]={20,10,10,5};

    int bedOccupancy[MAX_WARDS][20]={0};
    int daysAdmitted[MAX_PATIENTS];

    int currentQueueCount[MAX_SPECIALTY]={0};
    int waitTime[MAX_PATIENTS]={0};

    menu(name,
         age,
         checkInTime,
         &patientCount,
         contactNumber,
         address,
         IDNumber,
         emergencyContactNumber,
         specialtyID,
         specialty,
         baseConsultationFee,
         consultationTimeInMinutes,
         patientCap,
         wardID,
         wardName,
         dailyBedRate,
         bedCapacity,
         bedOccupancy,
         triageLevel,
         addSpecialtyID,
         addWardID,
         daysAdmitted,
         currentQueueCount,
         waitTime);
    return 0;
}
