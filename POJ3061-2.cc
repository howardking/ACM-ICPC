#include <iostream>

using namespace std;

void solve(void)
{
	int res = n+1;
	for (;;){
		while (t<n && sum<S){
		sum += a[t++];
		}
		if (sum<S){
			break;
		}
		res = min(res, t-s);
		sum -= a[s++];
	}
	if (res>n){
		res = 0;
	}
	printf("%d\n",res);
}

int main(void)
{	
	solve();
	return 0;
}
