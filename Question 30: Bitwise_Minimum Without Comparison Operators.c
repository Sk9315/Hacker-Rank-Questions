#include <stdio.h>

int main() {
 
    int a,b,res;
    scanf("%d %d",&a,&b);
    
   res=a-b;
    
    if((res&(1<<31))==0){
        printf("%d",b);
    }
    else{
        printf("%d",a);
    }
}
