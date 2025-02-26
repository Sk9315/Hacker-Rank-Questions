#include<stdio.h>
int main(){
    int N,i;
   
    scanf("%d %d",&N,&i);
    
    if((N&(1<<i))!=0){
        
        printf("1");
    }
    
    else{
      
        printf("0");
    }
}
