#include<stdio.h>
int main(){
    float units,bill,till;
    
    scanf("%f",&units);
    
    if(units>=0 && units<=100){
      bill = units*5;   
      till=bill-bill/10;
     printf("The electricity bill is: %0.2f.",till);
             
    }
    
    else if(units>100 && units<=300){
        bill= 500 + (units-100)*7;
            if(bill<=1200){
             till=bill-bill/10;  
printf("The electricity bill is: %0.2f.",till);
            }
        else{
printf("The electricity bill is: %0.2f.",bill);
        }
    }
    
    else if(units>300){
        bill= 500 + 1400 + (units-300)*10;
printf("The electricity bill is: %0.2f.",bill);
    }
    
    else{
        printf("Invalid Input!");
    }
    return 0;
}
