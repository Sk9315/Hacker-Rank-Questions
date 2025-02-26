#include<stdio.h>
int main(){
    
    int n,a,b,c,d,A,B,C,D;
    
    scanf("%d %d %d %d %d %d %d %d %d",&n,&a,&b,&c,&d,&A,&B,&C,&D);
    
   
  if((n==3) && (a+b>c && b+c>a && c+a>b) && d+A+B==180 &&(d+A>B && A+B>d && d+B>A)  &&(a>0 && b>0 && c>0) && (d>0 && A>0 && B>0)) { 
     
      if(a==b && b==c && d==60 && A==60 && B==60) {
          
           printf("Equilateral Triangle");
       }
        
      
        
        else if((a!=b && b!=c && c!=a) && (d!=A && A!=B && d!=B)){
           
            printf("Scalene Triangle");
     
        }
      
      else if(a==c && d==B && b!=c && a!=b && A!=d && B!=A){
          printf("Isosceles Triangle");
      }
      else if(a==b && d==A && b!=c && a!=c && A!=B && B!=d){
          printf("Isosceles Triangle");
      }
      else if(b==c && A==B && b!=a && a!=c && A!=d && B!=d){
          printf("Isosceles Triangle");
      }
        else{
            
            printf("Invalid Figure");
        }
    }
     
  
    
    else if(n==4 && a>0 && b>0 && c>0 && d>0){
        
        if((a==b && b==c && c==d) && (A==90 && B==90 && C==90 && D==90)){
            printf("Square");
        }
        
        else if((a==c && b==d) && (A==90 && B==90 && C==90 && D==90)){
            
            printf("Rectangle");
        }
        
        else if((a==b && b==c && c==d) && (A==C && B==D) &&(A!=90 && B!=90 && C!=90 && D!=90) &&(A+B+C+D==360)){
            
            printf("Rhombus");
        }
        
        else if((a==c && b==d) &&(A==C && B==D) && (A+B+C+D==360)){
            
            printf("Parallelogram");
        }
        
        else{
            printf("Invalid Figure");
        }
    }
    
    else if(n==0){
        printf("Circle");
    }
   
    else {
           printf("Invalid Figure");
    }
    return 0;
}
