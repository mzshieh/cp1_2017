#include<bits/stdc++.h>
using namespace std;
const int MAXN = 10000 + 10;
long long t[MAXN];
int main(){
    for(int i=3;i<MAXN;i++){
        t[i]=1LL*i*(i-1)*(i-2)/6;
    }
    int T;
    long long n,m,ans;
    scanf("%d",&T);
    while(T--){
        scanf("%lld%lld",&n,&m);
        long long ans = t[n*m]-n*t[m]-m*t[n];
        long long cnt = 0;
        for(int x1 = 1; x1 <= n; x1++){
            for(int y1 = 1; y1 <= m; y1++){
                for(int x2 = x1 + 1; x2 <= n;x2++){
                    for(int y2 = y1 + 1; y2 <= m; y2++){
                        int dx = x2 - x1, dy = y2 - y1;
                        int g = __gcd(dx,dy);
                        dx /= g, dy /= g;
                        int px = n-x2, py = m - y2;
                        cnt += min(px / dx, py / dy);
                    }
                }
            }
        }
        printf("%d\n",ans - 2 * cnt);

    }
    return 0;
}
