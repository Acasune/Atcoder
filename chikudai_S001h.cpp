#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define mod 1000000007
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
const int INF = 1e9;

int main(){
  int N;cin>>N;
  int a_l[N];
  REP(n,0,N)cin>>a_l[n];
  int dp[N+1];
  fill(dp,dp+N,INF);
  REP(i,0,N){
    *lower_bound(dp,dp+N,a_l[i])=a_l[i];
  }
  print((lower_bound(dp,dp+N,INF)-dp))
}