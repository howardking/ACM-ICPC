#include <stdio.h>

void main()
{
	int A, B, n;
	int i;
	int x1;
	int x2;
	int x3;
	scanf("%d%d%d", &A, &B, &n);
	while (A | B | n){
		x1 = x2 = 1;
		if (3 == n){
			printf("%d\n", (A*1 + B*1)%7);
			scanf("%d%d%d", &A, &B, &n);
			continue;
		}	
		for (i = 2; i < n; i++){
			x3 = (A * x1 + B * x2) % 7;
			x2 = x1;
			x1 = x3;		
		}
		printf("%d\n", x3);
		scanf("%d%d%d", &A, &B, &n);
	}
}
