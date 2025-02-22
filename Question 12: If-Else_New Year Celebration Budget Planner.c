#include<stdio.h>
int main(){
    int budget,ng,fcpg,dc,mc,ec,total;
   
    scanf("%d",&budget); 
    scanf("%d",&ng);
    scanf("%d",&fcpg);
    scanf("%d",&dc);
    scanf("%d",&mc);
    scanf("%d",&ec);
 
    if(ng<=5 || ng>50){
      printf("Celebration Denied");
    }
    
    else if(dc>=0.3*budget &&  fcpg*ng>=budget*0.5){
       
       printf("Celebration Denied");
} 
    
    
 else if((ng > 25 && ng<=50) && (dc<0.3*budget ||  fcpg*ng<budget*0.5) && mc>=0 ){
    
    total= fcpg*ng + dc + ec + mc;
          
    if(total<=budget){
        printf("Celebration Approved");
            }
    else{
        printf("Celebration Denied");
    }
}
    
else if((ng<=25) && (dc<0.3*budget ||  fcpg*ng<budget*0.5) ){
       
        total= fcpg*ng + dc + ec;
            
    if(total<=budget){
        
        printf("Celebration Approved");
            }
    else{
         printf("Celebration Denied");
    }
}
    
    else{
         printf("Celebration Denied");
    }

    
    
}
