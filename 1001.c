#include <stdio.h>

void main()
{
    int n;
    int i;
    int sum;
    while(1 == scanf("%d", &n)){
        sum = 0;
        for (i = 1; i <= n; i++){
             sum += i;
        }       
        printf("%d\n\n", sum);
    }
}
