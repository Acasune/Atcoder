#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

map<ll,ll> prime_factor(ll n){
    map<ll,ll> res;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            ++res[i];
            n/=i;
        }
    }
    if(n!=1) res[n]=1;
    return res;
}

ll mod_pow(ll x,ll n,ll m){
    if(n==0) return 1;
    ll res=mod_pow(x*x%m,n/2,m);
    if(n&1) {
      res=res*x%m;
    }
    return res;
}

int main(){
  ll N,M;cin>>N>>M;
  N=abs(N);
  map<ll,ll> mp=prime_factor(N);
  ll ans=1;

  for(auto p:mp){
    if(p.second==1){
      ans=(ans*M)%mod;
    }
    else{
      ll s=p.second;
      ll cnt=1;
      for(ll i=0;i<s;i++) cnt=(cnt*(M+s-1-i))%mod;
      for(ll i=2;i<=s;i++) cnt=(cnt*mod_pow(i,mod-2,mod))%mod;
      ans=(ans*cnt)%mod;
    }
  }
  ll p=1;
  REP(i,1,M){
    p=2*p%mod;
  }

  cout<<(ans*p)%mod<<"\n";

}