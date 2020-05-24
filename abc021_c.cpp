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
  int N,a,b,M,x,y;cin>>N>>a>>b>>M;
  a--;b--;
  vector<vector<int>> G(N);
  vector<P> vc(N,make_pair(INF,0));
  REP(i,0,M){
    cin>>x>>y;
    x--;y--;
    G[x].push_back(y);
    G[y].push_back(x);
  }
  queue<int> que;
  vc[a].first=0;vc[a].second=1;
  each(g,G[a]){
    que.push(g);
    vc[g].first=1;vc[g].second=1;

  }
  while(que.size()){
    int q = que.front();que.pop();

    each(next,G[q]){
      // debug(next)
      // debug(vc[next].first)
      if(vc[q].first+1>vc[next].first)continue;
      if(vc[q].first+1==vc[next].first){
        vc[next].second+=vc[q].second;
      }
      else if(vc[q].first+1<vc[next].first){
        vc[next].first=vc[q].first+1;
        vc[next].second=vc[q].second;
        que.push(next);
      }
    }
  }
  print(vc[b].second%MOD)


}
