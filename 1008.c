#include <stdio.h>

int arr[101];

void main()
{
    int n, sum, i;
    while((scanf("%d", &n)!=-1)&&n){
         sum = 0;
         for (i = 1; i <= n; i++){
             scanf("%d", &arr[i]);
         }
          for (i = 0; i < n; i++){
              if (arr[i] < arr[i+1]){
                  sum += (arr[i+1] - arr[i])*6 + 5;
              }else{
                  sum += (arr[i] - arr[i+1])*4 + 5;
              }
         }
         printf("%d\n", sum);
    }
}
