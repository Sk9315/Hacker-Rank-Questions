#include <stdio.h>

int main() {
 
    int a,b,res,max,sl;
    
    scanf("%d %d",&a,&b);
    
    res=a-b;
    
 max= (~(res>>31)&a | (res>>31)&b);
   
    // sl= max;
   
    printf("%d",max);
      
        
    
}
