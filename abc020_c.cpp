#include <bits/stdc++.h>
//----***やべーやつら***----
using namespace std;
#define int long long

//----***型定義***----
using ll = long long;
using P = pair<int,int>;

//----***Like a Pythonista***----
#define REP(ii,jj,nn) for (ll ii=jj;ii<(nn);ii++)
#define RREP(ii,nn,jj) for (ll ii = nn; jj<ii;ii--)
#define each(i,...) for (auto&& i:__VA_ARGS__)
#define ALL(vec) (vec).begin(),(vec).end()
#define sum(...) accumulate(ALL(__VA_ARGS__),0LL)
#define dsum(...) accumulate(ALL(__VA_ARGS__),0.0L)
#define vec(type,name,...) vector<type> name(__VA_ARGS__)
template<class T> inline auto max(const T& a){ return *max_element(ALL(a)); }
template<class T> inline auto min(const T& a){ return *min_element(ALL(a)); }
inline ll gcd(ll a,ll b){if(b == 0) return a;return  gcd(b,a%b);}
inline ll lcm(ll a,ll b){ll g = gcd(a,b);return a / g * b;}

//----***定数***----
#define MOD 1000000007
#define INF 100000000000000000
#define EPS 1e-9
const vector<vector<int>> DXY={{-1,0},{1,0},{0,-1},{0,1}};

//----***パーツ***----
#define fr first
#define se second

//----***入出力***---
#define print(out) cout<< out  << "\n";
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0);
#define dbg cerr<<"🥺🥺🥺🥺🥺🥺"<<endl;
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

//----***初期時読み込み***----
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(20);};}initial_;

signed main(){
  int H,W,T;cin>>H>>W>>T;
  int sy,sx,gy,gx;
  vector<string> MAZE(H);
  REP(i,0,H){
    cin>>MAZE[i];
    REP(j,0,W){
      if(MAZE[i][j]=='S'){
        sy=i;sx=j;
      }
      if(MAZE[i][j]=='G'){
        gy=i;gx=j;
      }
    }
  }
  // debug(sy)debug(sx)
  int left=1,right=10000000000,center;
  while(right-left>1){
    center=(right+left)/2;
    // debug(left)debug(right)
    // debug((center))
    vector<vector<int>> visited(H,vector<int>(W,0)),dist(H,vector<int>(W,10000000000));
    dist[sy][sx]=0;
    while(true){
      int v=-1,u=-1;
      REP(j,0,H)REP(i,0,W){
        if((!visited[j][i])&&((v==-1&&u==-1)||(dist[j][i]<dist[v][u]))){
          v=j;u=i;
        }
      }
      if((v==-1)&&(u=-1))break;
      //if(v==sy&&u==sx)dbg
       //print(v<<" "<<u)
      visited[v][u]=1;
      each(dxy,DXY){
        int ny=v+dxy[0],nx=u+dxy[1];
        if(0<=ny&&ny<H&&0<=nx&&nx<W){
          int cost=(MAZE[v][u]=='#'?center:1);
          //debug(cost)
          //if(v==sy&&u==sx)debug(dist[v][u]+cost)
          dist[ny][nx]=min(dist[ny][nx],dist[v][u]+cost);
        }
      }
      if(visited[gy][gx])break;
    }
    // debug(dist)
    if(dist[gy][gx]<=T){
      left=center;
    }
    else{
      right=center;
    }
  }
  // debug(left)debug(right)
  print(left)
}
