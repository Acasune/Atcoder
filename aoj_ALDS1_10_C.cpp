#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
  int N;cin>>N;
  string X[N], Y[N];
  for (int i=0;i < N; i++) {
    cin>>X[i];cin>>Y[i];
  }
  for (int i=0;i < N; i++) {
    string x_t=X[i];int x_len=x_t.length();
    string y_t=Y[i];int y_len=y_t.length();
    int dp[x_len+1][y_len+1];
    memset(dp,0,sizeof(dp));
    for (int x = 0; x <= x_len; x++)dp[x][0]=0;
    for (int y = 0; y <= y_len ; y++)dp[0][y]=0;
    for (int x=1;x<=x_len;x++){
      for (int y=1;y<=y_len;y++){
        if(x_t[x-1]==y_t[y-1]){
          dp[x][y]=dp[x-1][y-1]+1;
        }else{
          dp[x][y]=max(dp[x][y-1],dp[x-1][y]);
        }
      }
    }
    cout<< dp[x_len][y_len] << "\n";
  }

}