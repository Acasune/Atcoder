#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double lb;
#define mod 1000000007
#define rep(i,j,n) for (int i=j;i<(n);i++)
#define rrep(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";

int main(){
  int Q;cin>>Q;
  string X[Q],Y[Q];
  REP(q,0,Q)cin>>X[q]>>Y[q];
  int dp[1010][1010];
  REP(q,0,Q){
    int x_l=X[q].length(),y_l=Y[q].length();
    REP(i,0,1001)REP(j,0,1001)dp[i][j]=0;
    REP(x,0,x_l)REP(y,0,y_l){
      if(X[q][x]==Y[q][y]){
        dp[x+1][y+1]=max({dp[x][y]+1,dp[x+1][y],dp[x][y+1]});
      }
      else{
        dp[x+1][y+1]=max(dp[x+1][y],dp[x][y+1]);
      }
    }
    print(dp[x_l][y_l]);
  }
}