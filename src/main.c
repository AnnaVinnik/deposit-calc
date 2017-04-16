#include <stdio.h>
#include "deposit.h"

int main (){
int time, sum;
    printf("Enter the numbers of days (<366) : \n");
    scanf("%d", &time);
    
    if (time > (-1) && time < 366) {
        printf("Enter the sum \n");
        scanf("%d", &sum);
        
            if (sum < 0)
            return 0;
    }
    else return 0;
       
	print_income(time, sum);
    return 0;
}
