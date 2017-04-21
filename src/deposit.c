#include <stdio.h>
#include "deposit.h"

float print_income(int time, int sum){
    if (time > (-1) && time < 31)
        return sum*0.1*(-1);
    else if (time > 30 && time < 121)
        return sum*0.02;
    else if (time > 120 && time < 241)
        return sum*0.06;
    else if (time > 240 && time < 366)
        return sum*0.12;
    else 
        return 0;      
}

