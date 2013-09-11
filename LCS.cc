#include <iostream>
#include <cstdio>

using namespace std;

int n = 11, m = 11;
char s[12] = "abcdefghijk";
char t[12] = "bcfhzhjklmn";

int dp[12][12];

int max(int first, int second)
{
	return first>second?first:second;
}

void solve()
{
	for(int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if(s[i]==t[j]){
				dp[i+1][j+1] = dp[i][j] + 1;
			}else {
				dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
			}
		}
	}

	cout << dp[n][m] << endl;
}

void print(void)
{
	int i,j;
	cout << "  " ;
	for (i=0; i<=n ;i++){
		cout << "  "  << i << "  " ;
	}
	cout << endl;
	for (i=0; i<=n; i++){
		printf("%-2d",i);
		for (j=0; j<=m; j++){
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
