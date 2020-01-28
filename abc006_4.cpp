#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
  int N;cin>>N;
  int C[N],dp[N];
  int INF=(1<<29);
  for (int i = 0; i < N; i++) {
    cin >> C[i];
    dp[i]=INF;
  }
  dp[0]=C[0];
  for(int i=1;i<N;i++){
    int max_idx=N;
    int min_idx=-1;
    int tmp_idx;
    while(abs(min_idx-max_idx)>1){
      tmp_idx=(min_idx+max_idx)/2;
      if(C[i]<dp[tmp_idx]){
        max_idx=tmp_idx;
      }
      else {
        min_idx=tmp_idx;
      }
    }
   dp[max_idx]=C[i];
  }
  int i_bgst=0;
  for(;i_bgst<N;i_bgst++){
    if(dp[i_bgst]==INF)break;
  }
  cout<<N-i_bgst<<"\n";
}