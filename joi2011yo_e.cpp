#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>

using namespace std;

typedef pair<int,int> P;

int H,W,N;
string graph[1000];
P seen[10];
int DYX[4][2]{{-1,0},{1,0},{0,-1},{0,1}};
int ans=0;
void bfs(int j,int i,int n);


int main(){
  cin>>H>>W>>N;
  for (int h=0 ; h < H; h++)cin>>graph[h];
  for (int h = 0;  h < H; h++){
    for (int w = 0; w < W; w++){
      if(graph[h][w]=='S'){
        seen[0].first=h;
        seen[0].second=w;
        break;
      }
    }
  }

  for (int n = 1; n <= N; n++) {
    bfs(seen[n-1].first,seen[n-1].second,n);
  }
  cout<< ans  << "\n";
}

void bfs(int j,int i,int n){
  string s_n=to_string(n);
  int visited[H][W];
  for (int h = 0; h < H; h++){
    for (int w = 0; w < W; w++){
      visited[h][w]=0;
    }
  }
  visited[j][i]=1;

  queue<P> que;
  que.push(P(j,i));
  while(que.size()){
    P next=que.front();que.pop();
    int y=next.first,x=next.second;
    if(graph[y][x]==s_n.at(0)){
      seen[n].first=y;
      seen[n].second=x;
      ans+=visited[y][x]-1;
      return;
    }
    for (auto dyx:DYX){
      int ny=y+dyx[0],nx=x+dyx[1];
      if(0<=ny&&ny<H&&0<=nx&nx<W&&(graph[ny][nx]!='X')&&(visited[ny][nx]==0)){
        que.push(P(ny,nx));
        visited[ny][nx]=visited[y][x]+1;
      }
    }
  }
}
