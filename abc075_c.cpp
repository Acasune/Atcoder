#include <bits/stdc++.h>
//----***やべーやつら***----
using namespace std;
#define int long long

//----***型定義***----
using ll = long long;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
typedef long double lb;
// typedef vector<int,vector<int>> vvec;
typedef long double ld;
typedef pair<int,int> P;

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
inline ll gcd(ll a, ll b){ while(b){ ll c = b; b = a % b; a = c; } return a; }
inline ll lcm(ll a, ll b){ if(!a || !b) return 0; return a * b / gcd(a, b); }

//----***定数***----
const int MOD=1e9+7;
#define INF 1e9;
#define EPS 1e-9;

//----***入出力***---
#define print(out) cout<< out  << "\n";
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }
#define here  cout<<"Here"<<endl;


//----***初期時読み込み***----
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(20);};}initial_;

signed main(){
  int N,M,a,b;cin>>N>>M;
  vector<vector<int>> G(N);
  vector<P> p_vec(M);
  REP(i,0,M){
    cin>>a>>b;
    --a;--b;
    G[a].push_back(b);
    G[b].push_back(a);
    p_vec[i].first=a;p_vec[i].second=b;
  }
  int ans=0;
  REP(i,0,M){
    int t_a=p_vec[i].first,t_b=p_vec[i].second;
    // debug(t_a);debug(t_b);
    vector<int> visited(N,0);
    visited[0]=1;
    stack<int> stk;stk.push(0);
    while(stk.size()){
      int from=stk.top();stk.pop();
      each(to,G[from]){
        if(visited[to]||((from==t_a&&to==t_b)||(from==t_b&&to==t_a)))continue;
        visited[to]=1;
        stk.push(to);
      }
    }
    int judge=0;
    REP(i,0,N){
      //debug(visited[i]);
      judge+=visited[i];
    }
    // debug(visited);
    // debug(judge);
    if(judge!=N)ans++;
  }
  print(ans)



}
