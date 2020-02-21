#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i = j; i < (n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";

int main(){
  int D,N;cin>>D>>N;
  int T[D];REP(i,0,D)cin>>T[i];
  int A[N],B[N],C[N];
  REP(i,0,N)cin>>A[i]>>B[i]>>C[i];
  int dp[201][201];
  REP(i,0,201)REP(j,0,201)dp[i][j]=-1;
  REP(n,0,N){
    if(A[n]<=T[0]&&T[0]<=B[n]){
      dp[n][0]=0;
    }
  }

  REP(d,0,D)REP(n,0,N){
    if(dp[n][d]!=-1){
      REP(nn,0,N){
         if(A[nn]<=T[d+1]&&T[d+1]<=B[nn]){
           dp[nn][d+1]=max(dp[nn][d+1],dp[n][d]+abs(C[nn]-C[n]));
         }
      }
    }
  }
  int ans=0;
  REP(n,0,N)ans=max(dp[n][D-1],ans);
  print(ans);
}