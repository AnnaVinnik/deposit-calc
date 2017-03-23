#include <stdio.h>

int main (){
int time, sum;
    printf("Enter the numbers of days \n");
    scanf("%d", &time);
    
    if (time > (-1) && time < 366) {
        printf("Enter the sum \n");
        scanf("%d", &sum);
        
            if (sum < 0)
            return 0;
    }
    else return 0;

      
    if (time > (-1) && time < 31)
        printf("Your income is equal: %.2f  =(", sum*0.1*(-1));
    else if (time > 30 && time < 121)
        printf("Your income is equal: %.2f\n =)", sum*0.02);
    else if (time > 120 && time < 241)
        printf("Your income is equal: %.2f\n =))", sum*0.06);
    else if (time > 240 && time < 366)
        printf("Your income is equal: %.2f\n =)))", sum*0.12);
    else 
        printf("Enter the numbers of days! =) \n");      
       
    return 0;
}
