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
  int R,C,K;cin>>R>>C>>K;
  vector<string> G(R);
  REP(i,0,R)cin>>G[i];
  vector<vector<int>> V(R,vector<int>(C,INF)),H(R,vector<int>(C,INF));
  REP(r,0,R)REP(c,0,C){
    if(G[r][c]=='x'){
      REP(r2,0,R){
        V[r2][c]=min(abs(r-r2),V[r2][c]);
      }
      REP(c2,0,C){
        H[r][c2]=min(abs(c-c2),H[r][c2]);
      }
    }
  }
  int ans=0;
  REP(r,K-1,R-K+1)REP(c,K-1,C-K+1){
    if(G[r][c]=='o'){
      bool flg=true;
      REP(r2,r-K+1,r+K){
        if(H[r2][c]<K-abs(r2-r)){
          flg=false;
        }
      }
      REP(c2,c-K+1,c+K){
        if(V[r][c2]<K-abs(c2-c)){
          flg=false;
        }
      }
      if(flg)ans++;
    }
  }
  print(ans)

}
