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
struct edge{
  int to,cost;
};

int N,M,f,t,c;
const int mul=28;
vector<vector<edge>> G(10000*mul);
vector<int> candidate;
void dijkstra(){
  vector<int> d(mul*N,INF);
  d[0]=0;
  priority_queue<P, vector<P>, greater<P> > q;

  q.push({0,0});

  while(!q.empty()){
    P p = q.top();q.pop();
    int v=p.second,cost=p.first;
    if(d[v]<cost)continue;
    const int id=v/mul,im=v%mul;
    if(id==(N-1)){
      if(im%4==0||im%7==0){
         candidate.push_back(cost);
      }
      else {continue;}
    }
    for(auto e:G[v]){
      if(d[e.to]>d[v]+e.cost){
        d[e.to]=d[v]+e.cost;
         q.push({d[e.to],e.to});
      }
    }
  }
}

int main(){
  cin>>N>>M;
  REP(i,0,M){
    cin>>f>>t>>c;
    REP(j,0,mul){
      G[(f*mul)+j].push_back({(mul*t)+(j+c)%mul,c});
      G[(t*mul)+j].push_back({(mul*f)+(j+c)%mul,c});
    }
  }
  dijkstra();
   cout << *min_element(candidate.begin(), candidate.end()) << "\n";
}
