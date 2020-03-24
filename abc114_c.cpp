#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<=i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;

int ans=0;
ll N;
set<ll> sft_set{3,5,7};

ll dfs(ll n){
  if(n>N){return 0;}
  int cnt0=0,cnt1=0,cnt2=0;
  ll tmp_n=n;
  while(tmp_n>0){
    if(tmp_n%10==3)cnt0++;
    if(tmp_n%10==5)cnt1++;
    if(tmp_n%10==7)cnt2++;
    tmp_n=tmp_n/10;
  }
  ll ret=(min({cnt0,cnt1,cnt2})>0?1:0);
  for(ll j:sft_set){
    ret+=dfs(n*10+j);
  }
  return ret;
}

int main(){
  cin>>N;
  ll ans = dfs(0);
  print(ans);

}
