#include <stdio.h>
#include <stdlib.h>
#include "project.h"

int surcharges(int triageLevel[],int i){

    switch(triageLevel[i]){

        case 1:
            return 0;

        case 2:
            return 20;

        case 3:
            return 50;

        default:
            return -1;
    }
}
