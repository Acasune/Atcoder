#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<=i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;

int N,A,B,C;

int dfs(int cur,int a,int b,int c,vector<int> &L){
  if(cur==N){return min({a,b,c})>0?abs(a-A)+abs(b-B)+abs(c-C)-30:INF;}
  int ret0 = dfs(cur+1,a,b,c,L);
  int ret1 = dfs(cur+1,a+L[cur],b,c,L)+10;
  int ret2 = dfs(cur+1,a,b+L[cur],c,L)+10;
  int ret3 = dfs(cur+1,a,b,c+L[cur],L)+10;
  return min({ret0,ret1,ret2,ret3});
}

int main(){
  cin>>N>>A>>B>>C;
  vector<int> L(N);
  REP(i,0,N)cin>>L[i];
  int ans = dfs(0,0,0,0,L);
  print(ans)
}
