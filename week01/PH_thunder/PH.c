#include<stdio.h>
#include<math.h>

int dp[1<<21];
int w[21][21];

int n, N;

int sol(int bitset)
{
	int ans=0x3FFFFFFF;
	int i,j,k,I,J,K;
	if(dp[bitset]>0)return dp[bitset];
	if(bitset==N-1)return 0;
	/* selecting the first member */
	for(i=0,I=1;I<N && 0==(I&~bitset);i++,I<<=1);
	for(j=i+1,J=(I<<1);J<N; J<<=1,j++){
		if(0==(J&~bitset))continue;
		for(k=j+1,K=(J<<1); K<N; K<<=1,k++)
		{
			int temp;
			if(0==(K&~bitset))continue;
			temp=w[i][j]+w[i][k]+w[j][k]+sol(bitset|I|J|K);
			if(temp<ans){
				ans=temp;
			}
		}
	}
	return dp[bitset]=ans;
}

void solve()
{
	int i,j,a;
	scanf("%d",&n);
	N=(1<<n);
	for(i=0;i<N;i++) dp[i]=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&w[i][j]);
	printf("%d\n",sol(0));
}

int main(void)
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
		solve();
	return 0;
}
