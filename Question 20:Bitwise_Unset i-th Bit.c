#include<stdio.h>
int main(){
    int n;
    int i;
    
    scanf("%d",&n);
    scanf("%d",&i);
    
    n= (~(1<<i) & n);
    printf("%d",n);
}
