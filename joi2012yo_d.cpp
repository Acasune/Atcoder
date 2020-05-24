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

vector<vector<int>>dp(30,vector<int>(50010,0));

signed main(){
  int N,K,a,b;cin>>N>>K;
  vector<int> pasta(N,-1);
  int MODULO=10000;

  REP(i,0,K){
    cin>>a>>b;
    a--;b--;
    pasta[a]=b;
  }

  vector<vector<vector<int>>> dp(N-1,vector<vector<int>>(3,vector<int>(3,0)));

  a=pasta[N-2],b=pasta[N-1];
  REP(j,0,3)REP(k,0,3){
    if((a==-1||a==j)&&(b==-1||b==k)){dp[N-2][j][k]=1;}
    else{dp[N-2][j][k]=0;}
  }


  RREP(i,N-3,-1)REP(j,0,3)REP(k,0,3){
    a=pasta[i]; //b=pasta[i+1];
    if(a!=-1&&a!=j){
      dp[i][j][k]=0;
    }
    else {
      int tmp=0;
      REP(l,0,3){
          if(j==k&&j==l){continue;}
          tmp+=dp[i+1][k][l];
      }
      tmp%=MODULO;
      dp[i][j][k]=tmp;
    }
  }
  int ans=0;
  a=pasta[0];
  if(a!=-1)REP(i,0,3){
    ans+=dp[0][a][i];
    ans%=MODULO;
  }
  else{
    REP(i,0,3)REP(j,0,3){
      ans+=dp[0][i][j];
      ans%=MODULO;
    }
  }

  print(ans)




}
