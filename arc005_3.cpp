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
string graph[500];
int seen[500][500];
queue<P> que;
P S,G;

void bfs();

int main(){
  cin>>H>>W;
  for (int h = 0; h < H; h++) {
    cin>>graph[h];
    for (int w = 0; w < W; w++) {
      seen[h][w]=100;
      if(graph[h][w]=='s'){
        S.first=h;
        S.second=w;
        seen[h][w]=0;
      }
      if(graph[h][w]=='g'){
        G.first=h;
        G.second=w;
      }
    }
  }
  bfs();
  if(seen[G.first][G.second]<=2)cout<<"YES"<<"\n";
  else cout<<"NO"<<"\n";
  return 0;

}
void bfs(){
  que.push(S);
  while(que.size()){
    P next=que.front();que.pop();
    int y=next.first,x=next.second;
    //cout<<"aa"<<y<<x<<"\n";
    for(auto dyx :DYX) {
      int ny=y+dyx[0],nx=x+dyx[1];
      if(0<=ny&&ny<H&&0<=nx&&nx<W){
        if(graph[ny][nx]=='#'&&seen[y][x]+1<seen[ny][nx]){
          seen[ny][nx]=seen[y][x]+1;
          que.push(P(ny,nx));
        }
        if(graph[ny][nx]!='#'&&seen[y][x]<seen[ny][nx]){
          seen[ny][nx]=seen[y][x];
          que.push(P(ny,nx));
        }
      }
    }
  }
  return;
}