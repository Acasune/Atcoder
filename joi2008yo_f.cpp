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
typedef pair<ll,ll> P;
int N,K;
int A[5000],B[5000],C[5000],D[5000],G[100],cost[100][100];
bool used[100];
int a,b,c,d,v;

void dijkstra(int s);

int main(){
  cin>>N>>K;
  REP(i,0,N)REP(j,0,N)cost[i][j]=INF;
  REP(i,0,K){
    cin>>a>>b>>c;
    b--;c--;
    A[i]=a;B[i]=b;C[i]=c;
    if(a==1)cin>>D[i];
  }
  REP(i,0,K){
    if(A[i]==1){
      cost[B[i]][C[i]]=cost[C[i]][B[i]]=min(D[i],cost[B[i]][C[i]]);
    }
    if(A[i]==0){
      dijkstra(B[i]);
      if(G[C[i]]==INF){print("-1");}
      else {print(G[C[i]])}
    }
  }
}


void dijkstra(int s){
  fill(G,G+100,INF);
  fill(used,used+100,false);
  G[s]=0;
  while (true){
    v=-1;
    REP(u,0,N){
      if(!used[u]&&(v==-1||G[u]<G[v]))v=u;
    }
    if(v==-1)break;
    used[v]=true;
    REP(u,0,N){
      G[u]=min(G[u],G[v]+cost[v][u]);
    }
  }
}