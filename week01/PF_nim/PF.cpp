#include<bits/stdc++.h>
#define S 32000
using namespace std;
int prm[S],pcnt;
int count(int x){
	int res=0;
	for(int i=0;i<pcnt&&prm[i]*prm[i]<=x;i++){
		if(x%prm[i]) continue;
		while(x%prm[i]==0){
			x/=prm[i];
			res++;
		}
	}
	if(x>1) res++;
	return res;
}
int main(){
	int n,x,eve,T,ans;
	for(int i=3;i<S;i+=2){
		bool isp=true;
		for(int j=3;j*j<=i;j++){
			if(i%j==0){
				isp=false;
				break;
			}
		}
		if(isp) prm[pcnt++]=i;
	}
	scanf("%d",&T);
	while(T--){
		ans=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			eve=1-(x&1);
			while(!(x&1)) x>>=1;
			ans^=count(x)+eve;
		}
		if(ans) puts("Alice");
		else puts("Bob");
	}
	return 0;
}
