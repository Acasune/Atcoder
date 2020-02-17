#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
#include<algorithm>
#include<stack>
#include<set>

using namespace std;

typedef pair<int,int>P;

int DYX[4][2]{{-1,0},{1,0},{0,-1},{0,1}};

int H,W;
int ans=0;
string graph[1000];
int seen[1000][1000];
queue<P> que;

void bfs();

int main(){
  cin>>H>>W;
  for (int h = 0; h < H; h++) {
    cin>>graph[h];
    for (int w = 0; w < W; w++) {
      seen[h][w]=-1;
      if(graph[h][w]=='#'){
        que.push(P(h,w));
        seen[h][w]=0;
      }
    }
  }
  bfs();
  cout<<ans<<"\n";
  return 0;

}
void bfs(){
  while(que.size()){
    P next=que.front();que.pop();
    int y=next.first,x=next.second;
    for(auto dyx :DYX) {
      int ny=y+dyx[0],nx=x+dyx[1];
      if(0<=ny&&ny<H&&0<=nx&&nx<W&&graph[ny][nx]!='#'&&seen[ny][nx]==-1){
        seen[ny][nx]=seen[y][x]+1;
        ans=max(seen[ny][nx],ans);
        que.push(P(ny,nx));
      }
    }
  }
  return;
}