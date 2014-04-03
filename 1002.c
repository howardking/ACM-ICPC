#include <stdio.h>
#include <string.h>

#define max(x, y) (x) > (y) ? x : y

char num1[1001];
char num2[1001];
char num3[1002];

void str_rev(char *arr)
{
	int length = strlen(arr);
	int i;
	char temp;

	for (i = 0; i < length/2; i++){
		temp = arr[i];
		arr[i] = arr[length-i];
		arr[length-1] = temp;
	}
}

void main()
{
	int i, j, k, n, flag = 0;
	int length1, length2, length3;
	char *temp = NULL;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%s%s", num1, num2);
//		str_rev(num1);
//		str_rev(num2);
		length1 = strlen(num1);
		length2 = strlen(num2);
		length3 = max(length1, length2);
		num3[length3+1] = '\0';
		for (j = length1-1, k = length2-1; j >= 0 && k >= 0; j--, k--){
			num3[length3] = num1[j]-'0' + num2[k] - '0' + flag;
			if (num3[length3]>=10){
				flag = num3[length3] / 10;
				num3[length3] %= 10;
			}else {
				flag = 0;
			}
			num3[length3] += '0';
			length3--;
		}
		while (j >=0 ){
			num3[length3] = num1[j]-'0'+ flag;
			if (num3[length3]>=10){
				flag = num3[length3] / 10;
				num3[length3] %= 10;
			}else {
				flag = 0;
			}
			num3[length3] += '0';			
			length3--;
			j--;
			
		}
		while (k >=0){
			num3[length3] = num2[k] - '0' + flag;
			if (num3[length3]>=10){
				flag = num3[length3] / 10;
				num3[length3] %= 10;
			}else {
				flag = 0;
			}
			num3[length3] += '0';
			length3--;
			k--;
		}

		if (num3[0] == '\0'){
			 temp = &num3[1];
		}else{
			temp = num3;
		}
		printf("Case %d:\n", i + 1);
		if (i+1 == n){
			printf("%s + %s = %s\n", num1, num2, temp);

		}else{
			printf("%s + %s = %s\n\n", num1, num2, temp);
		}
	}
}
