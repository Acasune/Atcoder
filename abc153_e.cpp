#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
#define mod 10000000007
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";

int main(){
  int H,N;cin>>H>>N;
  int max_a=0,a_l[N],b_l[N];
  REP(n,0,N){
    cin>>a_l[n]>>b_l[n];
    max_a=max(max_a,a_l[n]);
  }

  int INF=1000000000;
  int dp[H+max_a+1];
    REP(h,0,H+max_a+1){
      dp[h]=INF;
  }

  int ans=INF;
  dp[0]=0;
  REP(h,1,H+max_a+1)REP(n,0,N){
    if(h<a_l[n])continue;
     dp[h]=min(dp[h],dp[h-a_l[n]]+b_l[n]);
     if(h>=H)ans=min(ans,dp[h]);
  }

    // REP(h,0,H+max_a+1){
    //   cout<<dp[h]<<" ";
    // }

  print(ans)
  
}