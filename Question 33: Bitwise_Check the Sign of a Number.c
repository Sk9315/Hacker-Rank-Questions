#include <stdio.h>

int main() {
 
    int n,sl;
    
    scanf("%d",&n);
    
  sl=(n) & (1<<31);
    if(sl!=0){
        printf("Negative");
        
    }
    else{
      printf("Positive");
    }
      
        
    
}
