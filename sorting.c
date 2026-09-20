#include <stdio.h>
#include <stdlib.h>
#include "project.h"

void primaryPriority(int triageLevel[],
                     int patientID[],
                     char name[][50],
                     unsigned int patientCount,
                     char emergencyLevel[][10]){

 printf("\nTotal patients Registered :%u\n\n",patientCount);

  int selected[MAX_PATIENTS]={0};
  int remainingPatients=patientCount;
  int i=1;

   if(patientCount!=0){

     printf("    |%10s |%-50s |%-15s\n","Patient ID","Name","Urgency Level");

    while(remainingPatients !=0){
    int maxPriorityPatient=-1;

    for(int j=0;j< patientCount;j++){

            if(selected[j]==0 &&(maxPriorityPatient==-1 || triageLevel[j]>triageLevel[maxPriorityPatient])){
                    maxPriorityPatient=j;
          }
    }

    printf("%3d |   %04d \t|%-50s |%-10s\n", i,patientID[maxPriorityPatient],name[maxPriorityPatient],emergencyLevel[maxPriorityPatient]);

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
                       char name[][50],
                       unsigned int patientCount){

    printf("\nTotal patients Registered :%u\n\n",patientCount);

   if(patientCount!=0){

    printf("    |Patient ID\t|Name \n");

    for(int j=0;j<patientCount;j++){
    printf("%3d |   %04d \t|%s\n",j+1,patientID[j],name[j]);
   }
  }
   else{
    printf("\n***NO PATIENT HAS REGISTERED YET***\n\n");
   }
}
