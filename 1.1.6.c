#include <stdio.h>

void main()
{
    int n, i, sum, temp;
    while(scanf("%d", &n) == 1){
        sum = 0;
        for (i = 0; i < n; i++){
            scanf("%d", &temp);
            sum += temp;
        }
        printf("%d\n", sum);
    }
}
