#include <stdio.h>
#include <math.h>

int main() {
    int N;
   
    scanf("%d",&N);
    
    if(N%2==0 && N%3==0 && N%5!=0){
        printf("A");
    }
    
   else if(N>20 && (N==22 || N==21 || N==33 || N==35 || N==55 || N==77)){
        printf("B");
    }
    
    else if(N>9 && N<100 && (N%3==0 || N%7==0) && N%21!=0){
        printf("C");
    }
    else if( N==sqrt(N)*sqrt(N) && N<200 && N>0) {
        printf("D");
    }
    else{
        printf("E");
    }
    return 0;
    

   
}
