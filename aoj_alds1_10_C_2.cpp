#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
#define mod 11000000007
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";

int main(){
  int N,W;cin>>N>>W;
  int v_l[N],w_l[N];
  REP(n,0,N)cin>>v_l[n]>>w_l[n];

  int dp[W+1][N+1];
  memset(dp,0,sizeof(dp));
  int v_t,w_t;

  REP(n,0,N)REP(w,0,W+1)
  {
    v_t=v_l[n],w_t=w_l[n];
    if(w<w_t){
      dp[w][n+1]=dp[w][n];
    }
    else{
     dp[w][n+1]=max(dp[w][n],dp[w-w_t][n+1]+v_t);
    }
  }
  print(dp[W][N])

}