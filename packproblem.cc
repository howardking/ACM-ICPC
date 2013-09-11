#include <iostream>

int n = 4;
int W = 5;
int w[4] = {3, 1, 2, 2};
int v[4] = {4, 2, 3, 2};

using namespace std;

int max(int first, int second)
{
	return first>second?first:second;
}

int rec(int i, int j)
{
	int res;
	if (i==n){
		res = 0;
	}else if (j<w[i]){
		res = rec(i+1, j);
	}else {
		res = max(rec(i+1, j), rec(i+1,j-w[i])+v[i]);
	}

	return res;
}

void solve(void)
{
	cout << rec(0, W) << endl;
}

int main(void)
{
	solve();
	return 0;
}
