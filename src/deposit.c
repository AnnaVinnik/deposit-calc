#include <stdio.h>
#include "deposit.h"

void print_income(int time, int sum){
if (time > (-1) && time < 31)
        printf("Your income is equal: %.2f  =( \n", sum*0.1*(-1));
    else if (time > 30 && time < 121)
        printf("Your income is equal: %.2f =) \n", sum*0.02);
    else if (time > 120 && time < 241)
        printf("Your income is equal: %.2f =) \n", sum*0.06);
    else if (time > 240 && time < 366)
        printf("Your income is equal: %.2f =) \n", sum*0.12);
    else 
        printf("Enter the numbers of days! =) \n");      
}

