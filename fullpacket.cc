#include <iostream>
#include <cstdio>
int n = 3;
int W = 7;
int w[3] = {3, 4, 2};
int v[3] = {4, 5, 3};

using namespace std;

int dp[4][8];

int max(int first, int second)
{
	return first > second?first:second;
}

void solve(void)
{
	for(int i=0; i<n; i++){
		for(int j=0; j<=W; j++){
			if(j<w[i]){
				dp[i+1][j] = dp[i][j];
			}else{
				dp[i+1][j] = max(dp[i][j], dp[i+1][j-w[i]]+v[i]);
			}
		}
	}
	cout << dp[n][W] << endl;
}
void print(void)
{
	int i,j;
	cout << "  " ;
	for (i=0; i<=W ;i++){
		cout << "  "  << i << "  " ;
	}
	cout << endl;
	for (i=0; i<=n; i++){
		printf("%-2d",i);
		for (j=0; j<=W; j++){
			cout << "  " << dp[i][j] << "  " ;
		}
		cout << endl;
	}
}

int main(void)
{
	solve();
	print();
	return 0;
}
