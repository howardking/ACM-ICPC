//计算［a,b）之间的素数的个数
#include <stdio.h>
#include <stdlib.h>
#define MAX_L 1000000;
#define MAX_SORT_B 1000;

typedef long long ll;

int is_prime[MAX_L];
int is_prime_small[MAX_SORT_B];

void segment_sieve(ll a, ll b)
{
	for (int i=0; (ll)i*i<b; i++){
		is_prime_small[i] = 1;
	}
	for (int i=0; i<b-a; i++){
		is_prime[i] = 1;
	}
	
	for (int i=2; (ll)i*i<b; i++){
		if (is_prime_small[i]){
			for (int j=2*i; (ll)j*j<b; j+=i){
				is_prime_small[j] = 0;
			}
			for (ll j=max(2LL, (a+i-1)/i)*i; j<b; j+=i){
				is_prime[j-a] = 0;
			}
		}
	}
}

void solve(void)
{
	ll a,b;
	scanf("%ld%ld",&a,&b);
	segment_sieve(a,b); 
}

int main(void)
{
	solve();
	return 0;
}
