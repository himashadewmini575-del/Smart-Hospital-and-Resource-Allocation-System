#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void saveData(unsigned int patientCount,
              char name[][50],
              unsigned short int age[],
              unsigned long int checkInTime[],
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
              int patientID[],
              int addBedNumber[],
              int bedOccupancy[][20],
              int admissionStatus[],
              char subsidyEligibility[][25],
              char subsidyDiscountRate[][5],
              char emergencyLevel[][10],
              float finalPayableAmount[],
              float discount[]){

    FILE *file;

    file = fopen("hospital_data.dat", "wb");

    if(file == NULL){
        printf("\n***ERROR: DATA FILE COULD NOT BE OPENED***\n");
        return;
    }

    fwrite(&patientCount, sizeof(unsigned int), 1, file);

    fwrite(name, sizeof(name[0]), MAX_PATIENTS, file);
    fwrite(age, sizeof(age[0]), MAX_PATIENTS, file);
    fwrite(checkInTime, sizeof(checkInTime[0]), MAX_PATIENTS, file);
    fwrite(contactNumber, sizeof(contactNumber[0]), MAX_PATIENTS, file);
    fwrite(address, sizeof(address[0]), MAX_PATIENTS, file);
    fwrite(IDNumber, sizeof(IDNumber[0]), MAX_PATIENTS, file);
    fwrite(emergencyContactNumber, sizeof(emergencyContactNumber[0]), MAX_PATIENTS, file);

    fwrite(triageLevel, sizeof(triageLevel[0]), MAX_PATIENTS, file);
    fwrite(addSpecialtyID, sizeof(addSpecialtyID[0]), MAX_PATIENTS, file);
    fwrite(addWardID, sizeof(addWardID[0]), MAX_PATIENTS, file);
    fwrite(daysAdmitted, sizeof(daysAdmitted[0]), MAX_PATIENTS, file);
    fwrite(currentQueueCount, sizeof(currentQueueCount[0]), MAX_SPECIALTY, file);
    fwrite(waitTime, sizeof(waitTime[0]), MAX_PATIENTS, file);

    fwrite(patientID, sizeof(patientID[0]), MAX_PATIENTS, file);
    fwrite(addBedNumber, sizeof(addBedNumber[0]), MAX_PATIENTS, file);
    fwrite(bedOccupancy, sizeof(bedOccupancy[0]), MAX_WARDS, file);
    fwrite(admissionStatus, sizeof(admissionStatus[0]), MAX_PATIENTS, file);

    fwrite(subsidyEligibility, sizeof(subsidyEligibility[0]), MAX_PATIENTS, file);
    fwrite(subsidyDiscountRate, sizeof(subsidyDiscountRate[0]), MAX_PATIENTS, file);
    fwrite(emergencyLevel, sizeof(emergencyLevel[0]), MAX_PATIENTS, file);

    fwrite(finalPayableAmount, sizeof(finalPayableAmount[0]), MAX_PATIENTS, file);
    fwrite(discount, sizeof(discount[0]), MAX_PATIENTS, file);

    fclose(file);

    printf("\n***DATA SAVED SUCCESSFULLY***\n");
}


void loadData(unsigned int *patientCount,
              char name[][50],
              unsigned short int age[],
              unsigned long int checkInTime[],
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
              int patientID[],
              int addBedNumber[],
              int bedOccupancy[][20],
              int admissionStatus[],
              char subsidyEligibility[][25],
              char subsidyDiscountRate[][5],
              char emergencyLevel[][10],
              float finalPayableAmount[],
              float discount[]){

    FILE *file;

    file = fopen("hospital_data.dat", "rb");

    if(file == NULL){
        printf("\n***NO PREVIOUS DATA FOUND***\n");
        return;
    }

    fread(patientCount, sizeof(unsigned int), 1, file);

    fread(name, sizeof(name[0]), MAX_PATIENTS, file);
    fread(age, sizeof(age[0]), MAX_PATIENTS, file);
    fread(checkInTime, sizeof(checkInTime[0]), MAX_PATIENTS, file);
    fread(contactNumber, sizeof(contactNumber[0]), MAX_PATIENTS, file);
    fread(address, sizeof(address[0]), MAX_PATIENTS, file);
    fread(IDNumber, sizeof(IDNumber[0]), MAX_PATIENTS, file);
    fread(emergencyContactNumber, sizeof(emergencyContactNumber[0]), MAX_PATIENTS, file);

    fread(triageLevel, sizeof(triageLevel[0]), MAX_PATIENTS, file);
    fread(addSpecialtyID, sizeof(addSpecialtyID[0]), MAX_PATIENTS, file);
    fread(addWardID, sizeof(addWardID[0]), MAX_PATIENTS, file);
    fread(daysAdmitted, sizeof(daysAdmitted[0]), MAX_PATIENTS, file);
    fread(currentQueueCount, sizeof(currentQueueCount[0]), MAX_SPECIALTY, file);
    fread(waitTime, sizeof(waitTime[0]), MAX_PATIENTS, file);

    fread(patientID, sizeof(patientID[0]), MAX_PATIENTS, file);
    fread(addBedNumber, sizeof(addBedNumber[0]), MAX_PATIENTS, file);
    fread(bedOccupancy, sizeof(bedOccupancy[0]), MAX_WARDS, file);
    fread(admissionStatus, sizeof(admissionStatus[0]), MAX_PATIENTS, file);

    fread(subsidyEligibility, sizeof(subsidyEligibility[0]), MAX_PATIENTS, file);
    fread(subsidyDiscountRate, sizeof(subsidyDiscountRate[0]), MAX_PATIENTS, file);
    fread(emergencyLevel, sizeof(emergencyLevel[0]), MAX_PATIENTS, file);

    fread(finalPayableAmount, sizeof(finalPayableAmount[0]), MAX_PATIENTS, file);
    fread(discount, sizeof(discount[0]), MAX_PATIENTS, file);

    fclose(file);

    printf("\n***PREVIOUS DATA LOADED SUCCESSFULLY***\n");
}
