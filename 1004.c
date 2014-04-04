#include <stdio.h>
#include <string.h>

char arr[1000][16];
int  count[1000];

void main()
{
	int N, i, j, max, maxi, curr = 1;
	char temp[16];
	scanf ("%d", &N);
	while(0 != N){
		getchar();
		max = 0;
		maxi = 0;
		for (i = 0; i < N; i++){
			arr[i][0] = '\0';
			count[i] = 0;
			gets( temp);
			for (j = 0; j < i; j++){
				if (!(strcmp(temp, arr[j]))){
					count[j]++;
					break;
				}
			}
			strcpy(arr[j], temp);
		}
		for (j = 0; j < N && arr[j][0] != '\0'; j++){
			if (max < count[j]){
				max = count[j];
				maxi = j;
			}
		}
		printf("%s\n", arr[maxi]);
		scanf ("%d", &N);
	}
}
