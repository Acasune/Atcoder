#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;

int main(){
  ll N,K;cin>>N>>K;
  P a_l[100000];
  REP(i,0,N)cin>>a_l[i].first>>a_l[i].second;
  priority_queue<P,vector<P>,greater<P>> que;
  REP(i,0,N)que.push(a_l[i]);

  ll ans=0;
  REP(k,0,K){
    P shortest=que.top();
    ans+=shortest.first;
    que.pop();
    shortest.first+=shortest.second;
    que.push(shortest);
  }
  print(ans)
}