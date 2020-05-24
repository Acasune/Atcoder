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
#define dsum(...) accumulate(ALL(__VA_ARGS__),0.0)
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
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(15);};}initial_;

int b11,b12,b13,b21,b22,b23,c11,c12,c21,c22,c31,c32;
vector<int> B(9,0) ,C(9,0),G_(9,0);


int scoreCompute(vector<int> G){
  int takahashi=0,naoko=0;
  REP(i,0,6){
    if(G[i]==G[i+3]){
      takahashi+=B[i];
    }
    else{
      naoko+=B[i];
    }
  }
  REP(i,0,9){
    if(i%3==2)continue;
    if(G[i]==G[i+1]){
      takahashi+=C[i];
    }
    else{
      naoko+=C[i];
    }
  }
  int p=takahashi-naoko;
  return p;
}

int dfs(int deep,vector<int> G){
  // dbg
  if(deep==9){
    // debug(G)
    // debug(deep)
    // debug(scoreCompute(G))
    return scoreCompute(G);
  };
  int tmpScore=(deep%2==0?-INF:INF);
  // debug(tmp_G)
  if(deep%2==0){
    REP(i,0,9){
      vector<int> tmp_G=G;
      if(tmp_G[i]!=0)continue;
      tmp_G[i]=1;
      tmpScore=max(tmpScore,dfs(deep+1,tmp_G));
      // print(deep<<" "<<tmpScore)
    }
  }
  else {
    REP(i,0,9){
      vector<int> tmp_G=G;
      if(tmp_G[i]!=0)continue;
      tmp_G[i]=-1;
      tmpScore=min(tmpScore,dfs(deep+1,tmp_G));
    }
  }
  return tmpScore;
}

signed main(){
  cin>>B[0]>>B[1]>>B[2]>>B[3]>>B[4]>>B[5];
  cin>>C[0]>>C[1]>>C[3]>>C[4]>>C[6]>>C[7];
  int diff=dfs(0,G_);
  int total=B[0]+B[1]+B[2]+B[3]+B[4]+B[5]+C[0]+C[1]+C[3]+C[4]+C[6]+C[7];
  int chokudai=(total+diff)/2,naoko=(total-diff)/2;

  print(chokudai)
  print(naoko)
}
