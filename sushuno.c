//输出1～n之内的素数的个数
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_N 10000000

int prime[MAX_N];
int is_prime[MAX_N + 1];

void calc(int n)
{
	int p = 0;
	for (int i=0; i<=n; i++)
		is_prime[i] = 1;
	is_prime[0] = is_prime[1] = 0;
	for (int i=2; i<=n; i++){
		if (is_prime[i]){
			prime[p++] = i;
			for (int j=2*i; j<=n; j+=i){
				is_prime[j] = 0;
			}
		}
	}
	printf("%d\n",p);
}

void solve(void)
{
	int n = 0;
	scanf("%d",&n);
	if (n>=2){
		calc(n);
	}
}

int main(void)
{
	solve();
	return 0;
}
