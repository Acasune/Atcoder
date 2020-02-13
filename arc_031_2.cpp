#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
#include<algorithm>
#include<stack>
#include<set>

using namespace std;

int seen[10][10];
string graph[10];
int n_islands=0;
int DXY[4][2]={{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int y, int x);

int main(){
  for (int i = 0; i < 10; i++) cin>>graph[i];
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      seen[j][i]=0;
    }
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if(seen[j][i]==0&&graph[j][i]=='o'){
        n_islands++;
        dfs(j,i);
      }
    }
  }
  if(n_islands==1){
    cout<< "YES" << "\n";
    return 0;
  }
  if(n_islands>4){
    cout<< "NO" << "\n";
    return 0;
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if(graph[j][i]=='x'){
        set<int> all;
        for(auto dxy:DXY){
          int ny=j+dxy[0],nx=i+dxy[1];
          if(0<=ny&&ny<10&&0<=nx&&nx<10){
            if(graph[ny][nx]=='o')all.insert(seen[ny][nx]);
          }
        }
        if(all.size()==n_islands){
          cout<< "YES" << "\n";
          return 0;
        }
      }
    }
  }
  cout<< "NO" << "\n";
}

void dfs(int y, int x){
  if(0<=y&&y<10&&0<=x&&x<10){
    if(graph[y][x]=='o'&&seen[y][x]==0){
      seen[y][x]=n_islands;
      dfs(y-1,x);
      dfs(y+1,x);
      dfs(y,x-1);
      dfs(y,x+1);
    }
  }
  return;
}
