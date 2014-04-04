#include <stdio.h>

void main()
{
	int a, b, c, i;
	int ab[50];
	ab[1] = 1;
	ab[2] = 1;
	
	while(scanf("%d%d%d", &a, &b, &c)){
		if (!(a | b | c)){
			break;
		}

		for (i = 3; i < 50; i++){
			ab[i] = (a*ab[i-1] + b*ab[i-2]) % 7;
		}
		printf("%d\n", ab[c%49]);
	}
}
