#include <stdio.h>

int arr[100000];

void main()
{
	int m;
	int i, j, k, n, N;
	int start, sta, end;
	int max;
	int temp;

	scanf("%d", &m);
	for (i = 0; i < m; i++){
		scanf("%d", &N);
		for (j = 0; j < N; j++){
			scanf("%d", &arr[j]);
		}
		max = -123456789;
		temp = 0;
		start = sta = end = 0;
		for (k = 0; k < N; k++){
			temp += arr[k];
			if (max < temp){
				max = temp;
				end = k+1;
				start = sta + 1;
			}
			if (temp < 0){
				sta = k + 1;
				temp = 0;
			}
		}
		printf("Case %d:\n", i+1);
		if (i+1 == m){
			printf("%d %d %d\n", max, start, end);
		}else{
			printf("%d %d %d\n\n", max, start, end);
		}
	}
}
