#include <stdio.h>

int main() {
 
    int a,b,res1,res2;
   
    scanf("%d %d",&a,&b);
 
 
    res1 = a&(1<<31);
  
    res2 = b&(1<<31);
    
     if(res1 != res2){
        
         printf("Yes");
         
     }
    
    else{
        printf("No");
    }
    return 0;
}
