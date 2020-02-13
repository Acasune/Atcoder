#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>
#include <stack>

using namespace std;
pair<int, int> s,g;
string graph[500];
int visited[500][500];
int DXY[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int H,W;

bool dfs(int y, int x);

int main(){
  cin>>H>>W;
  int visited[500][500];

  for (int i = 0;i<H;i++) cin>>graph[i];
  for (int h  = 0;h< H; h++){
    for (int w= 0; w < W; w++){
      visited[h][w]=0;
      if(graph[h][w]=='s'){s.first=h;s.second=w;}
      else if(graph[h][w]=='g'){g.first=h;g.second=w;}
    }
  }
  if(dfs(s.first,s.second))cout<< "Yes"  << "\n";
  else cout<< "No"  << "\n";
  return 0;
}

bool dfs(int y, int x){
  if(0<=y&&y<H&&0<=x&&x<W&&(graph[y][x]!='#')&&(visited[y][x]==0)){
    visited[y][x]=1;
    if(graph[y][x]=='g') return true;
    return dfs(y+1,x)||dfs(y-1,x)||dfs(y,x+1)||dfs(y,x-1);
  }
  return false;
}