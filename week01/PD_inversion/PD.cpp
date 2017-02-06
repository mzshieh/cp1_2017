#include<bits/stdc++.h>

using namespace std;

long long dnc(int n, vector<int> &seq)
{
	if(n<=1) return 0LL;
	int l=n>>1, r=n-(n>>1);
	vector<int> v,lv(l),rv(r);
	for(int i = 0; i < l; i++)
		lv[i]=seq[i];
	for(int i = 0; i < r; i++)
		rv[i]=seq[l+i];
	long long ret = dnc(l,lv)+dnc(r,rv);
	int j=0, k=0;
	while(j < l || k < r)
	{
		if(k == r || (j<l && lv[j]<=rv[k]))
		{
			v.push_back(lv[j++]);
		}
		else
		{
			ret += l-j;
			v.push_back(rv[k++]);
		}
	}
	for(int i = 0; i < n; i++)
		seq[i]=v[i];
	return ret;
}

void solve()
{
	int n;
	scanf("%d",&n);
	vector<int> seq(n);
	for(int i = 0; i < n; i++)
		scanf("%d",&seq[i]);
	printf("%lld\n",dnc(n,seq));
}

int main()
{
	int ncases;
	for(scanf("%d",&ncases); ncases; ncases--)
		solve();
	return 0;
}
