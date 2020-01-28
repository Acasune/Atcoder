#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
  int N;cin>>N;
  int W;cin>>W;
  int v_l[N], w_l[N];
  for (int i  = 0; i < N; i++) cin >> v_l[i] >> w_l[i];
  int dp[N+1][W+1];
  memset(dp,0,sizeof(dp));
  for (int n=0;n < N; n++) {
    for (int w=0; w <= W; w++) {
      //cout<<w_l[n]<<w<<endl;
      if(w<w_l[n]){
       dp[n+1][w]=dp[n][w];
      }
      else{
        dp[n+1][w]=max(dp[n][w],dp[n+1][w-w_l[n]]+v_l[n]);
      }
    }
  }
  cout<< dp[N][W]  << "\n";
}