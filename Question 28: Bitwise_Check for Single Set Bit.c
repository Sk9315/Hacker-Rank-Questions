#include <stdio.h>

int main() {
   int n;
    scanf("%d",&n);
    
    
    if(((n)&~(-n))==0 && n>0){
       
        printf("1");
        
    }
    else{
        printf("-1");
    }
}
