#include <iostream>
#include <cstdio>

using namespace std;

int n = 3;
int K = 17;
int a[3] = {3, 5, 8};
int m[3] = {3, 2, 2};
bool dp[4][18];

void print()
{
	cout << "  ";
	for (int i=0; i<=K; i++){
//		cout.width(5) << i;
		printf("%3d",i);
	}
	cout << endl;
	for (int i=0; i<=n; i++){
		printf("%2d",i);
		for (int j=0; j<=K; j++){
			if (dp[i][j]){
				printf("%3d",1);
			}else {
				printf("%3d",0);
				
			}		

		}
		cout << endl;
	}
}
void solve(void)
{
	dp[0][0] = true;
	for (int i=0; i<n; i++){
		for (int j=0; j<=K; j++){
			for (int k=0; (k<=m[i])&&(k*a[i]<=j); k++){
				dp[i+1][j] |= dp[i][j-k*a[i]];
			}
		}
	}
	if (dp[n][K]){
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}

	print();
}

int main(void)
{
	solve();
	return 0;
}
