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
string graph[50];
int seen[50][50];

void bfs();

int main(){
  cin>>H>>W;
  int n_obs=0;
  for (int h = 0; h < H; h++) {
    cin>>graph[h];
    for (int w = 0; w < W; w++) {
      if(graph[h][w]=='#')n_obs++;
      seen[h][w]=-1;
    }
  }
  bfs();
  if(seen[H-1][W-1]==-1){
    cout<<"-1"<<"\n";
    return 0;
  }
  int ans =H*W-n_obs-seen[H-1][W-1];
  cout<<ans-1<<"\n";

}
void bfs(){
  queue<P> que;
  que.push(P(0,0));
  seen[0][0]=0;

  while(que.size()){
    P next=que.front();que.pop();
    int y=next.first,x=next.second;
    if(y==H-1&&x==W-1)return;
    for(auto dyx :DYX) {
      int ny=y+dyx[0],nx=x+dyx[1];
      if(0<=ny&&ny<H&&0<=nx&&nx<W&&graph[ny][nx]!='#'&&seen[ny][nx]==-1){
        seen[ny][nx]=seen[y][x]+1;
        que.push(P(ny,nx));
      }
    }
  }
}