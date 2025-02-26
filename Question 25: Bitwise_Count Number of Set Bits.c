#include <stdio.h>

int main() {
    int n,count;
    scanf("%d", &n);

   count=(n&1) + ((1)&(n>>1)) + ((1) & (n>>2)) + ((1) & (n>>3));
    
    printf("%d",count);
    return 0;
}
