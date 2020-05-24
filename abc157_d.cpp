#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
using tuplis = array<ll, 3>;
typedef long double lb;
typedef vector<int,vector<int>> vec;
typedef long double ld;
#define print(out) cout<< out  << "\n";
#define REP(i,j,n) for (ll i=j;i<(n);i++)
#define RREP(i,n,j) for (ll i = n; j<i;i--)
#define each(i,...) for(auto&& i:__VA_ARGS__)
#define ALL(vec) (vec).begin(),(vec).end()
#define sum(...) accumulate(all(__VA_ARGS__),0LL)
#define dsum(...) accumulate(all(__VA_ARGS__),0.0L)
#define vec(type,name,...) vector<type> name(__VA_ARGS__)
const int MOD=1000000007;
const int INF = 1e9;
const ld EPS=1e-9;
template<class T> inline auto max(const T& a){ return *max_element(all(a)); }
template<class T> inline auto min(const T& a){ return *min_element(all(a)); }
inline ll gcd(ll a, ll b){ while(b){ ll c = b; b = a % b; a = c; } return a; }
inline ll lcm(ll a, ll b){ if(!a || !b) return 0; return a * b / gcd(a, b); }

vector<int> visited;
vector<int> num;
int idx;

void dfs(int i,const vector<vector<int>> &G,int &cnt){
  cnt++;
  visited[i]=idx;
  each (j,G[i]){
    if(visited[j]==-1){
      dfs(j,G,cnt);
    }
  }
}

int main(){
  int N,M,K,a,b;cin>>N>>M>>K;
  vector<vector<int>> F(N);
  vector<int> B1(K,0),B2(K,0);

  REP(i,0,M){
    cin>>a>>b;
    a--;b--;
    F[a].push_back(b);
    F[b].push_back(a);
  }
  REP(i,0,K){
    cin>>a>>b;
    a--;b--;
    B1[i]=b;B2[i]=a;
  }

  visited.assign(N,-1);
  idx=0;

  REP(i,0,N){
    if(visited[i]==-1){
      int cnt=0;
      dfs(i,F,cnt);
      num.push_back(cnt);
      idx++;
    }
  }
  vector<int> ans(N);
  REP(i,0,N){ans[i]=num[visited[i]]-(int)F[i].size()-1;}
  REP(i,0,K){
      if (visited[B1[i]] == visited[B2[i]]) {
          ans[B1[i]]--;
          ans[B2[i]]--;
      }
  }

  REP(i,0,(int)ans.size()){
    cout << ans[i];
    cout << " ";
    }
    cout << endl;
    return 0;

}
