#include <bits/stdc++.h>
//----***やべーやつら***----
using namespace std;
#define int long long

//----***型定義***----
using ll = long long;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
typedef long double lb;
typedef vector<int,vector<int>> vvec;
typedef long double ld;

//----***Like a Pythonista***----
#define REP(i,j,n) for (ll i=j;i<(n);i++)
#define RREP(i,n,j) for (ll i = n; j<i;i--)
#define each(i,...) for (auto&& i:__VA_ARGS__)
#define ALL(vec) (vec).begin(),(vec).end()
#define sum(...) accumulate(all(__VA_ARGS__),0LL)
#define dsum(...) accumulate(all(__VA_ARGS__),0.0L)
#define vec(type,name,...) vector<type> name(__VA_ARGS__)
template<class T> inline auto max(const T& a){ return *max_element(all(a)); }
template<class T> inline auto min(const T& a){ return *min_element(all(a)); }
inline ll gcd(ll a, ll b){ while(b){ ll c = b; b = a % b; a = c; } return a; }
inline ll lcm(ll a, ll b){ if(!a || !b) return 0; return a * b / gcd(a, b); }

//----***定数***----
const int MOD=1000000007;
#define INF 1e9;
#define EPS 1e-9;

//----***入出力***----
#define print(out) cout<< out  << "\n";
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }
#define HERE  cout<<"Here"<<endl;

//----***初期時読み込み***----
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(20);};}initial_;

signed main(){
  int N,a,b;cin>>N;
  vector<vector<int>> G(N);
  vector<pair<int,int>> I;
  map<pair<int,int>,int> ans;
  REP(i,1,N){
    cin>>a>>b;
    a--;b--;
    G[a].push_back(b);
    G[b].push_back(a);
    I.emplace_back(a,b);
  }

  int K=0;
  vector<int> cs(N,0),used(N,0);
  used[0]=1;
  queue<int> que;
  que.emplace(0);
  while(!que.empty()){
    int v=que.front();que.pop();
    if(K<(int)G[v].size()){K=G[v].size();}
    int cur=1;
    each (u,G[v]){
      if(used[u])continue;
      if(cur==cs[v])cur++;
      cs[u]=ans[make_pair(u,v)]=ans[make_pair(v,u)]=cur++;
      used[u]=1;
      que.emplace(u);
    }
  }
  print(K)
  each(p,I){
    print(ans[p])
  }
}
