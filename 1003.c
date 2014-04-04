#include <stdio.h>

int arr[100000];

void main()
{
	int m;
	int i, j, k, n, N;
	int start, end;
	int max = 0;
	int temp = 0;

	scanf("%d", &m);
	for (i = 0; i < m; i++){
		scanf("%d", &N);
		for (j = 0; j < N; j++){
			scanf("%d", &arr[j]);
		}
		max = arr[0];
		start = end = 0;
		for (k = 0; k < N; k++){
			for (n = k; n < N; n++){
				temp += arr[n];
				if (max < temp){
					start = k + 1;
					end = n + 1;
					max = temp;
				}
			}
			temp = 0;
		}
		printf("Case %d:\n", i+1);
		if (i+1 == m){
			printf("%d %d %d\n", max, start, end);
		}else{
			printf("%d %d %d\n\n", max, start, end);
		}
	}
}
