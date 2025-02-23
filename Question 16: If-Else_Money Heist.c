#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j,p,q,r,s,x,y;
    
scanf("%d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    
scanf("%d %d",&p,&q);
scanf("%d %d",&r,&s);
scanf("%d %d",&x,&y);
 
if((a>=0 && a<=9) && (b>=0 && b<=9) && (c>=0 && c<=9) && (d>=0 && d<=9) && (e>=0 && e<=9) && (f>=0 && f<=9) && (g>=0 && g<=9) && (h>=0 && h<=9) && (i>=0 && i<=9) && (j>=0 && j<=9)){
        
        if (p==0){
            a= (a+q)%10;
        }
        else if(p==1){
             b= (b+q)%10;
        }
         else if(p==2){
             c= (c+q)%10;
        }
         else if(p==3){
             d= (d+q)%10;
        }
         else if(p==4){
             e= (e+q)%10;
        }
         else if(p==5){
             f= (f+q)%10;
        }
         else if(p==6){
             g= (g+q)%10;
        }
         else if(p==7){
             h= (h+q)%10;
        }
         else if(p==8){
             i= (i+q)%10;
        }
         else if(p==9){
             j= (j+q)%10;
         }        
}
 if((a>=0 && a<=9) && (b>=0 && b<=9) && (c>=0 && c<=9) && (d>=0 && d<=9) && (e>=0 && e<=9) && (f>=0 && f<=9) && (g>=0 && g<=9) && (h>=0 && h<=9) && (i>=0 && i<=9) && (j>=0 && j<=9)){
               
 if (r==0){
            a= (a+s)%10;
        }
        else if(r==1){
             b= (b+s)%10;
        }
         else if(r==2){
             c= (c+s)%10;
        }
         else if(r==3){
             d= (d+s)%10;
        }
         else if(r==4){
             e= (e+s)%10;
        }
         else if(r==5){
             f= (f+s)%10;
        }
         else if(r==6){
             g= (g+s)%10;
        }
         else if(r==7){
             h= (h+s)%10;
        }
         else if(r==8){
             i= (i+s)%10;
        }
         else if(r==9){
             j= (j+s)%10;
        }
 }
    if((a>=0 && a<=9) && (b>=0 && b<=9) && (c>=0 && c<=9) && (d>=0 && d<=9) && (e>=0 && e<=9) && (f>=0 && f<=9) && (g>=0 && g<=9) && (h>=0 && h<=9) && (i>=0 && i<=9) && (j>=0 && j<=9)){
        
if (x==0){
            a= (a+y)%10;
        }
        else if(x==1){
             b= (b+y)%10;
        }
         else if(x==2){
             c= (c+y)%10;
        }
         else if(x==3){
             d= (d+y)%10;
        }
         else if(x==4){
             e= (e+y)%10;
        }
         else if(x==5){
             f= (f+y)%10;
        }
         else if(x==6){
             g= (g+y)%10;
        }
         else if(x==7){
             h= (h+y)%10;
        }
         else if(x==8){
             i= (i+y)%10;
        }
         else if(x==9){
             j= (j+y)%10;
         }
    
}
    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j);
    
}
