#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

typedef pair<ll, ll> P;

int V,M,T;
struct edge{
  ll to,cost;
};

vector<ll> dijkstra(ll s, vector<edge> G[]){
  vector<ll> d(V);
  REP(i,0,V)d[i]=INF;
  d[s]=0;
  priority_queue<P, vector<P>, greater<P> > q;
  q.push(make_pair(0,s));

  while(!q.empty()){
    P p = q.top();
    q.pop();
    ll v=p.second;
    if(d[v]<p.first)continue;
    REP(i,0,G[v].size()){
      edge e = G[v][i];
      if(d[e.to]>d[v]+e.cost){
        d[e.to]=d[v]+e.cost;
        q.push(P(d[e.to],e.to));
      }
    }
  }
  return d;
}

int main(){
  cin.tie(0);
	ios::sync_with_stdio(false);
  cin>>V>>M>>T;
  ll A[V];
  REP(i,0,V)cin>>A[i];
  vector<edge> G1[V], G2[V];
  REP(i,0,M){
    ll from,to,cost;
    cin>>from>>to>>cost;
    from--;to--;
    edge e = {to, cost};
    G1[from].push_back(e);
    e.to=from;
    G2[to].push_back(e);
  }
  vector<ll> d1 = dijkstra(0, G1);
  vector<ll> d2 = dijkstra(0, G2);
  ll ans = T*A[0];
  REP(i,1,V){
    if(d1[i] != INF and d2[i] != INF) {
      ll tmp = (T - d1[i] - d2[i]) * A[i];
      ans = max(ans, tmp);
    }
  }
  print(ans)
}
