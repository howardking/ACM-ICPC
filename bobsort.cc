#include <iostream>

using namespace std;

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

int main(void)
{	
	int a[10] = {1, 6, 5, 4, 9, 7, 8, 2, 3, 0};
	sort(a, a+10);
	for (int i=0; i<10; i++){
		cout << a[i] << "  ";
	}
	cout << endl;
	return 0;
}
