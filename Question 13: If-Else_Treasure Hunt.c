#include<stdio.h>
int main()
{
    int a,b,c,d;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    
    if(a==1 && b==1){
      
           
               printf("Player chooses the Left path.\n");
               printf("Poor choice, Game Over!");
           }
         
  
     else if( a==1 && b==2){
         
         if(c==2){
              printf("Player chooses the Left path.\n");
              printf("Player found a bridge.\n");
              printf("Poor luck, Game Over!");
          }
         
     else if(c==1 && d==1){
                
                
                    printf("Player chooses the Left path.\n");
                    printf("Player found a bridge.\n");
                    printf("Player crosses the bridge safely.\n");
                    printf("All that glitters is not gold, Game Over!\n");
                
                }
            else if(c==1 && d==2){
                   printf("Player chooses the Left path.\n");
                   printf("Player found a bridge.\n");
                   printf("Player crosses the bridge safely.\n");
                   printf("All your efforts were for nothing, Game Over!");
                }
               
            else if(c==1 && d==3){
                   printf("Player chooses the Left path.\n");
                   printf("Player found a bridge.\n");
                   printf("Player crosses the bridge safely.\n");
                   printf("Congratulations!! You won the treasure.");
                }
     }
    
    else if(a==2){
        if(b==582 && c==1){
            printf("Player chooses the Middle path.\n");
            printf("Player solved the puzzle.\n");
            printf("All that glitters is not gold, Game Over!");
            
        }
        else if(b==582 && c==2){
            printf("Player chooses the Middle path.\n");
            printf("Player solved the puzzle.\n");
            printf( "All your efforts were for nothing, Game Over!");
        }
        else if(b==582 && c==3){
            printf("Player chooses the Middle path.\n");
            printf("Player solved the puzzle.\n");
            printf( "Congratulations!! You won the treasure.");
        }
        else{
             printf("Player chooses the Middle path.\n");
             printf("Foolish player, Game Over!");
        }
    }
    
    else if(a==3){
        if(b==30 && c==1){
            printf("Player chooses the Right path.\n");
            printf( "Player solved the puzzle.\n");
            printf( "All that glitters is not gold, Game Over!");
        }
        else if(b==30 && c==2){
            printf("Player chooses the Right path.\n");
            printf( "Player solved the puzzle.\n");
            printf("All your efforts were for nothing, Game Over!");
        }
        else if(b==30 && c==3){
            printf("Player chooses the Right path.\n");
            printf( "Player solved the puzzle.\n");
            printf( "Congratulations!! You won the treasure.");
        }
        else{
            printf("Player chooses the Right path.\n");
            printf("Foolish player, Game Over!");
        }
    }
    
    return 0;
    
}
