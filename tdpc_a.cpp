#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> P;

int main(){
  int N;cin>>N;
  int p_l[N];
  for (int i = 0; i < N; i++) cin>>p_l[i];
  int dp_N=accumulate(p_l,p_l+N,0)+1;
  bool dp[dp_N];
  for (int i = 0; i < dp_N; i++) dp[i]=false;
  dp[0]=true;
  for (int i =0 ; i<N; i++) {
    for (int j = dp_N; 0<=j ; j--) {
      if(j>=p_l[i]&&dp[j-p_l[i]]){
        dp[j]=true;
      }
    }
  }
  int ans=0;
  for (int i = 0; i < dp_N; i++) {
    if(dp[i])ans++;
  }
  cout<< ans << "\n";

}