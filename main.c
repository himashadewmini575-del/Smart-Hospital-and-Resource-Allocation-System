#include <stdio.h>
#include <stdlib.h>
#include "project.h"

int main()
{
    printf("Smart Hospital\n");
    printf("           &\n");
    printf("       Resource Allocation System\n");
    printf("\n");

    char name[20];
    unsigned short int age=0;
    unsigned long int checkInTime=0;

    menu(name,age,checkInTime);
    return 0;
}
