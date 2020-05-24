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

int N,X,Y;
vector<int> ans(2000,0),used1(2000,0),used2(2000,0);

void bfs(vector<vector<int>> G,int idx){
  // debug(idx);
  int cnt=0;
  used2[idx]=1;
  ans[cnt]++;
  queue<int> que;
  que.push(idx);
  while(que.size()){
    int v=que.front();que.pop();
    cnt++;
    REP(i,0,G[v].size()){
      int e=G[v][i];
      if(used2[e])continue;
      used2[e]=1;
      ans[cnt]++;
      que.push(e);
    }
  }
  return ;
}

signed main(){
  cin>>N>>X>>Y;
  X--;Y--;
  vector<vector<int>> G(N);
  REP(i,0,N-1){
    G[i].push_back(i+1);
    G[i+1].push_back(i);
  }
  G[X].push_back(Y);
  G[Y].push_back(X);

  REP(i,0,N-1){
    used1[i]=1;
    REP(j,0,N){used2[j]=0;}
    int cnt=-1;
    used2[i]=1;
    queue<pair<int,int>> que;
    que.push(pair<int,int>(i,-1));
    while(que.size()){
      pair<int,int> v=que.front();que.pop();
      bool flg=false;
      each(e,G[v.first]){
        if((!used2[e]))flg=true;
      }
      if(!flg){
        continue;}
      v.second++;
      each(e,G[v.first]){
        if((used2[e]))continue;
        used2[e]=1;
        //debug(e);
        //{print(i<<" "<<v<<" "<<e);}
        if(!used1[e]){
          //{print(i<<" "<<v<<" "<<e<<" "<<cnt);}
          ans[v.second]++;
        }
        que.push(pair<int,int>(e,v.second));
      }
    }
  }
  REP(i,0,N-1){
    print(ans[i])
  }

}
