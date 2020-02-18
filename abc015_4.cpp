#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i = j; i < (n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";

int main(){
  int W,N,K;cin>>W>>N>>K;
  int a_l[N],b_l[N];
  REP(n,0,N)cin>>a_l[n]>>b_l[n];
  int dp[W+1][K+1];
  REP(w,0,W+1)REP(k,0,K+1)dp[w][k]=-1;
  int ans=0;
  REP(n,0,N){
    RREP(k,K-1){
      RREP(w,W-a_l[n])
      if(dp[w][k]!=-1){
        dp[w+a_l[n]][k+1]=max(dp[w+a_l[n]][k+1],dp[w][k]+b_l[n]);
        ans=max(ans,dp[w+a_l[n]][k+1]);
      }
    }
    if (a_l[n] <= W) {
      dp[a_l[n]][1] = max(dp[a_l[n]][1],b_l[n]);
      ans=max(ans,dp[a_l[n]][1]);
    }
  }
    REP(k,0,K+1){
      REP(w,1,W+1){
        cout<<dp[w][k]<<" ";
      }
      cout<<"\n";
    }
  print(ans)
}