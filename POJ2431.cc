#include <iostream>
#include <queue>
using namespace std;

int L = 25, P = 10, N = 4;
int A[5] = {10, 14, 20, 21}, B[5] = {10, 5, 2, 4};

void solve(void)
{
	A[N] = L;
	B[N] = 0;
	N ++;

	priority_queue<int> que;

	int ans =0, pos = 0, tank = P;
	for (int i=0; i<N; i++){
		int d = A[i] - pos;

		while (tank-d<0){
			if(que.empty()){
				cout << -1 << endl;
				return;
			}
		tank += que.top();
		que.pop();
		ans++;
		}
	tank -= d;
	pos = A[i];
	que.push(B[i]);
	}
	cout << ans << endl;
}

int main(void)
{
	solve();
	return 0;
}
