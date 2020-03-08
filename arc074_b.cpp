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
  ll N;cin>>N;
  vector<ll> a(3*N);
  REP(i,0,3*N)cin>>a[i];

  ll ans=-2e18;
  priority_queue<ll,vector<ll>,greater<ll>> pq;
  ll tot=0;
  vector<ll> prefix(3*N);
  REP(i,0,N){
    tot+=a[i];
    pq.push(a[i]);
    prefix[i]=tot;
  }

  REP(i,N,2*N){
    tot+=a[i];
    pq.push(a[i]);
    tot-=pq.top();
    pq.pop();
    prefix[i]=tot;
  }

  while(pq.size())pq.pop();
  tot=0;

  vector<ll> suffix(3*N);
  for(int i=3*N-1;2*N<=i;i--){
    tot-=a[i];
    pq.push(-a[i]);
    suffix[i]=tot;
  }

  for(int i=2*N-1;N<=i;i--){
    tot-=a[i];
    pq.push(-a[i]);
    tot-=pq.top();
    pq.pop();
    suffix[i]=tot;
  }
  REP(i,N-1,2*N){
    ans=max(ans,prefix[i]+suffix[i+1]);
  }
  print(ans);

}