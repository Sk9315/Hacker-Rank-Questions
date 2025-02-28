#include <stdio.h>

int main() {
int n;
    scanf("%d",&n);
    
    if(((n)&~(n<<1))==1){
       
        printf("Yes");
    }
 else{
    printf("No");
}
    return 0;
}
