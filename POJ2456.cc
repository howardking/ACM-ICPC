#include <iostream>

using namespace std;

int N = 5;
int M = 3;
int X[5] = {1, 2, 8, 4, 9};

void sort(int *addr, int *addrend)
{
	int flag = 0;
	int range = addrend - addr;
	int temp = 0;
	for (int i = 0; i<range; i++){
		flag = 0;
		for (int j = i+1; j<range; j++){
			if (addr[i]>addr[j]){
				temp = addr[i];
				addr[i] = addr[j];
				addr[j] = temp;
				flag = 1;
			}
		}
		if (!flag){
			break;
		}
	}	
}

int C(int d)
{
	int last = 0;
	for (int i=1; i<M; i++){
		int crt = last + 1;
		while (crt<N && X[crt]-X[last]<d){
			crt++;
		}
		if (N==crt){
			return 0;
		}
		last = crt;
	}
	return 1;
}

void solve(void)
{
	sort(X, X+N);
	int lb = 0, ub = 100000;
	int mid = 0;
	
	while (ub-lb>1){
		mid = (ub+lb)/2;
		if (C(mid)){
			lb = mid;
		}else {
			ub = mid;
		}
	}

	cout << lb << endl;

}

int main(void)
{
	solve();
	return 0;
}
