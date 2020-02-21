#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
#define MOD 1000000007
#define REP(I,J,N) for (int I=J;I<(N);I++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";

int main(){
  int D;cin>>D;
  string N;cin>>N;
  int n_len=N.length();
  int now;
  ll dp[n_len+1][D][2];
  REP(i,0,n_len+1)REP(d,0,D)REP(j,0,2)dp[i][d][j]=0;
  dp[0][0][0]=1;
  for(int i=1;i<=n_len;i++){
    now=N[i-1]-'0';
    for (int smaller=0; smaller < 2; smaller++){
      for(int j=0; j<D; j++){
        for(int x=0;x<=(smaller?9:now);x++){
          dp[i][(j+x)%D][(smaller||x<now)]+=dp[i-1][j][smaller];
          dp[i][(j+x)%D][(smaller||x<now)]%=MOD;
        }
      }
    }
  }
  print(dp[n_len][0][0] + dp[n_len][0][1] - 1)
}