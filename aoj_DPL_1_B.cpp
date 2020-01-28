#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;
int dp[101][10001];
int v_l[101], w_l[101];

int main(){
  int N;cin>>N;
  int W;cin>>W;
  for (int i=1; i<= N;i++) {
    cin>>v_l[i];cin>>w_l[i];
  }

  memset(dp,-1,sizeof(dp));
  for (int i = 0; i < N; i++)dp[i][0]=0;
  for (int w = 0; w < W; w++)dp[0][w]=0;
  for (int i = 1; i <=N ; i++){
    for (int w = 1; w <=W ; w++){
      if(dp[i][w]>=0) return dp[i][w];
      if(w-w_l[i]>=0) dp[i][w]=max(dp[i-1][w],dp[i-1][w-w_l[i]]+v_l[i]);
      else dp[i][w]=dp[i-1][w];
    }
  }
  cout <<dp[N][W]<<"\n"; 
}
