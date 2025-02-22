#include<stdio.h>
int main(){
    int age,ai,rt;
   
    scanf("%d",&age);
    scanf("%d",&ai);
    scanf("%d",&rt);

if((age<30) || (age>=30 && age<=50 && ai>75000 && rt==3) || (age>50 && rt==3 && ai>75000)){
        
printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        
    }

else if((age>=30 && age<=50 && ai<=75000 && rt==2) || (age>=30 && age<=50 && ai>75000 && (rt==1 || rt==2))) 
{
        
printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    
    
else if((age>50 && rt<=2) || (ai<=30000 && rt<=23)){
    
printf("Low Risk Portfolio: Suitable for conservative investments.");
}
    return 0;
    
}
    
