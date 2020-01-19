#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<string> field;
vector<vector<int> > seen;
const int dyx[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
typedef pair<int,int> P;
int R,C,sy,sx,gy,gx;

int bfs();

int main(){
  
  cin>>R>>C>>sy>>sx>>gy>>gx;
  sy--;sx--;gy--;gx--;
  field.resize(R);
  for (int r = 0; r < R; r++) cin >>field[r];
  seen.resize(R);
  for (int r =  0; r < R; r++){
    seen[r].resize(C);
    for (int c = 0; c < C; c++) {
      seen[r][c]=-1;
    }
  }
  int ans = bfs()+1;
  cout<<ans<<endl;
}

int bfs(){
  queue<P> que;
  que.push(P(sy,sx));
  field[sy][sx]=0;
  while(que.size()){
    P p= que.front();que.pop();
    if(p.first==gy&&p.second==gx) break;
    int ny,nx;
    for (auto& d : dyx){
      ny=p.first+d[0];
      nx=p.second+d[1];
      if (0<=ny&&ny<=R&&0<=nx&&nx<=C&&seen[ny][nx]==-1&&field[ny][nx]!='#'){
        seen[ny][nx]=seen[p.first][p.second]+1;
        que.push(P(ny,nx));
      }
    }
  }
  return seen[gy][gx];
}
