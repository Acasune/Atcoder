#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;


// 冪剰余
ll mod_pow(ll x,ll n,ll m){
    if(n==0) return 1;
    ll res=mod_pow(x*x%m,n/2,m);
    if(n&1) {
      res=res*x%m;
    }
    return res;
}

int main(){
  ll N,K;cin>>N>>K;

  ll cnt=1,ans=1;
  for(ll i=0;i<K;i++) cnt=(cnt*(N+K-1-i))%mod;
  for(ll i=2;i<=K;i++) cnt=(cnt*mod_pow(i,mod-2,mod))%mod;
  ans=(ans*cnt)%mod;
  print(ans)

}