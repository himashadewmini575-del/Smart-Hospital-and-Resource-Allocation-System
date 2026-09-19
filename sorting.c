#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void primaryPriority(int triageLevel[],
                     int patientID[],
                     char name[][20],
                     unsigned int patientCount){

  int selected[MAX_PATIENTS]={0};
  int remainingPatients=patientCount;
  int i=1;

   if(patientCount!=0){

     printf("    Patient ID\tName \n");

    while(remainingPatients !=0){
    int maxPriorityPatient=-1;

    for(int j=0;j< patientCount;j++){

            if(selected[j]==0 &&(maxPriorityPatient==-1 || triageLevel[j]>triageLevel[maxPriorityPatient])){
                    maxPriorityPatient=j;
          }
    }

    printf("%3d    %04d \t%s\n", i,patientID[maxPriorityPatient],name[maxPriorityPatient]);

    selected[maxPriorityPatient]=1;
    remainingPatients--;
    i++;

   }
  }

   else{
    printf("\n***NO PATIENT HAS REGISTERED YET***\n\n");
   }
}

void secondaryPriority(int patientID[],
                       char name[][20],
                       unsigned int patientCount){

   if(patientCount!=0){

    printf("    Patient ID\tName \n");

    for(int j=0;j<patientCount;j++){
    printf("%3d    %04d \t%s\n",j+1,patientID[j],name[j]);
   }
  }
   else{
    printf("\n***NO PATIENT HAS REGISTERED YET***\n\n");
   }
}
