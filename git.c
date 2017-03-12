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

        
    return 0;
}
