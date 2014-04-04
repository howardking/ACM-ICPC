#include<stdio.h> 
#include<string.h> 
int main() 
{ 
	int n,i,t,max,j,b[1000]; 
	char a[1000][16]; 
	while(scanf("%d",&n)!=EOF&&n) 
	{ 
		getchar(); 
		max=0; 
		for(i=0;i<n;i++) 
		{ 
			gets(a[i]); 
			b[i]=1; 
		} 
		for(i=0;i<n;i++) 
		{ 
			for(j=0;j<n;j++) 
			{ 
				if(strcmp(a[i],a[j])==0) 
				b[i]++; 
			} 
		} 
		for(i=0;i<n;i++) 
		{ 
			if(max<b[i]) 
			{ 
				max=b[i]; 
				t=i; 
			} 
		} 
		printf("%s\n",a[t]); 
	} 

} 

