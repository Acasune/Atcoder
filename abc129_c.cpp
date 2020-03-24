#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

int main(){
  ll N,M,idx;cin>>N>>M;
  vector<ll> A(N+2,-1),dp(N+2,0);
  REP(i,0,M){
    cin>>idx;
    A[idx]=1;
  }
  dp[0]=1;
  REP(i,0,N+1){
    if(A[i+1]+A[i+2]==2){
      print(0);
      return 0;
    }
    //if(A[i]==1)continue;
    if(A[i+1]==-1){dp[i+1]+=dp[i];dp[i+1]%=mod;}
    if(A[i+2]==-1){dp[i+2]+=dp[i];dp[i+2]%=mod;}
  }
  print(dp[N])
}
