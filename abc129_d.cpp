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
  int H,W;cin>>H>>W;
  vector<string> graph(H);
  REP(i,0,H){
    cin>>graph[i];
  }
  vector<vector<int> > L(H,vector<int>(W,0)),R(H,vector<int>(W)),U(H,vector<int>(W)),D(H,vector<int>(W));
  REP(i,0,H)REP(j,0,W){
    if(graph[i][j]=='#'){L[i][j]=0;}
    else if(j==0){L[i][j]=1;}
    else {L[i][j]=L[i][j-1]+1;}
  }
  REP(i,0,H)RREP(j,W-1,-1){
    if (graph[i][j]=='#') {R[i][j]=0;}
    else if (j==W-1) {R[i][j]=1;}
    else {R[i][j]=R[i][j+1]+1;}
  }
  REP(i,0,H)REP(j,0,W){
    if(graph[i][j]=='#'){U[i][j]=0;}
    else if(i==0){U[i][j]=1;}
    else {U[i][j]=U[i-1][j]+1;}
  }
  RREP(i,H-1,-1)REP(j,0,W){
    if(graph[i][j]=='#'){D[i][j]=0;}
    else if(i==H-1){D[i][j]=1;}
    else {D[i][j]=D[i+1][j]+1;}
  }
  int ans=0;
  REP(i,0,H)REP(j,0,W){
    ans=max(ans,L[i][j]+R[i][j]+U[i][j]+D[i][j]-3);
  }
  print(ans)


}
