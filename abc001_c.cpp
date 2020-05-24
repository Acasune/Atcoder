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

signed main(){
  int N,M;cin>>N>>M;
  N*=10;
  string Dir;
  if(1125<=N&&N<3375)Dir="NNE";
  else if(N<1125)Dir="N";
  else if(N<5625)Dir="NE";
  else if(N<7875)Dir="ENE";
  else if(N<10125)Dir="E";
  else if(N<12375)Dir="ESE";
  else if(N<14625)Dir="SE";
  else if(N<16875)Dir="SSE";
  else if(N<19125)Dir="S";
  else if(N<21375)Dir="SSW";
  else if(N<23625)Dir="SW";
  else if(N<25875)Dir="WSW";
  else if(N<28125)Dir="W";
  else if(N<30375)Dir="WNW";
  else if(N<32625)Dir="NW";
  else if(N<34875)Dir="NNW";
  else Dir="N";

  double X=M*100;int W;
  if(0<=X&&X<25*60)W=0;
  else if(X<155*60)W=1;
  else if(X<335*60)W=2;
  else if(X<545*60)W=3;
  else if(X<795*60)W=4;
  else if(X<1075*60)W=5;
  else if(X<1385*60)W=6;
  else if(X<1715*60)W=7;
  else if(X<2075*60)W=8;
  else if(X<2445*60)W=9;
  else if(X<2845*60)W=10;
  else if(X<3265*60)W=11;
  else W=12;

  if(W==0)print('C'<<' '<<W)
  else print(Dir<<' '<<W)


}
