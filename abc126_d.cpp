#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;
using Edge=pair<ll,ll>;

void dfs(ll n,ll p, ll c);

ll N;
vector<ll> visited;
vector<vector<Edge>> G;
int main(){
    cin >> N;
    G.assign(N, vector<Edge>());
    for (int i = 0; i < N-1; ++i) {
        int u, v, w; cin >> u >> v >> w;
        u--, v--;
        G[u].push_back(Edge(v, w));
        G[v].push_back(Edge(u, w));
    }
    visited.assign(N, 0);
    dfs(0, -1, 1);

  REP(i,0,N){
    print(visited[i])
  }

}

void dfs(ll n,ll p, ll c){
  visited[n]=c;
  for(auto e:G[n]){
    if(e.first==p)continue;
    if(e.second&1)dfs(e.first,n,1-c);
    else dfs(e.first,n,c);
  }

}