#include <stdio.h>

int A, B;

int f(int n)
{
	if (n <=2){
		return 1;
	}else{
		return (A*f(n-1) + B*f(n-2))%7;
	}
}

void main()
{
	int n;
	scanf("%d%d%d", &A, &B, &n);
	while(A|B|n){
		printf("%d\n", f(n));
		scanf("%d%d%d", &A, &B, &n);
	}
}
