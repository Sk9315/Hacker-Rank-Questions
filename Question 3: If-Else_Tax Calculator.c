#include<stdio.h>
int main(){
    float a;
    float t;
    scanf("%f", &a);
    
    if(a >= 0 && a <= 250000){
        (t= 0);
    printf("%.2f", t);
    }
    else if(a>=250000 && a<=500000){
        (t= 0.05*(a-250000));
        printf("%.2f", t);
    }
    else if(a>500000 && a<=1000000){
        (t= 0.05*250000+0.2*(a-500000));
        printf("%.2f", t);
    }
    else if(a>1000000){
        (t = 0.05*250000+0.2*500000+0.3*(a-1000000));
        printf("%.2f", t);
    }
    else{
        printf("INVALID");
    }
   
    
    return 0;   
    
}
