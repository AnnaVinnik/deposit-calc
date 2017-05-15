#include <stdio.h>
#include "deposit.h"

int main (){
int time, sum;
float k;
    printf("Enter the numbers of days (<366) : \n");
    scanf("%d", &time);
    
    if (time > (-1) && time < 366) {
        printf("Enter the sum \n");
        scanf("%d", &sum);
        
            if (sum <= 1000)
            return 0;
    }
    else return 0;
       
	k = print_income(time, sum);
        if (k < 0)
            printf ("Your income: %.2f  =) \n", k);
        else if (k > 0)
            printf ("Your income: %.2f  :) \n", k);
        else printf ("Enter sum and date (< 366) \n");
    return 0;
}
