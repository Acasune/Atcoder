#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
#include<algorithm>
#include<stack>
#include<set>

using namespace std;

int N,M,ans;
bool seen[102];
bool tree_flg;
int edge[101][101];

void dfs(int i,int i_1);

int main(){
  cin>>N>>M;
  ans=0;
  int tmp_i,tmp_j;
  for (int i = 0; i < 101; i++) {
    seen[i]=false;
    for (int j=0; j < 101; j++) {
      edge[i][j]=0;
    }
  }
  for (int i = 0; i < M; i++) {
    cin>>tmp_i>>tmp_j;
    edge[tmp_i-1][tmp_j-1]=edge[tmp_j-1][tmp_i-1]=1;
  }
  for (int k = 0; k < N; k++) {
    if(!seen[k]){
      tree_flg=true;
      dfs(k,-1);
      if(tree_flg){
        ans++;
      }
    }
  }
  cout<< ans  << "\n";
}

void dfs(int i,int i_1){
  if(seen[i]){
    tree_flg=false;
    return;
  }
  if(0<=i&&i<N&&!seen[i]){
    seen[i]=true;
    for (int j = 0; j < N; j++) {
      if(edge[i][j]==1&&j!=i_1)dfs(j,i);
    }
  }
}