#include<bits/stdc++.h>

using namespace std;

inline void solve(int n)
{
	int x;
	double acc=0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&x);
		acc += x*x;
	}
	printf("%.3f\n",sqrt(acc));
}

int main()
{
	int n;
	while(scanf("%d",&n)==1)
		solve(n);
	return 0;
}
