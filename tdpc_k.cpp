#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define mod 1000000007
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
const int INF = 1e9;
typedef pair<ll,ll> P;

int main(){
  int N;cin>>N;
  ll x,r;
  vector<P> C;
  REP(i,0,N){
    cin>>x>>r;
    C.emplace_back(x-r,x+r);
  }
  sort(C.begin(),C.end());
  reverse(C.begin(),C.end());
  ll dp[N+2];
  fill(dp,dp+N+2,INF);
  dp[0]=-INF;
  REP(n,0,N){
    *lower_bound(dp,dp+N+2,C[n].second)=C[n].second;
  }
  print((lower_bound(dp,dp+N+2,INF)-dp-1))
}