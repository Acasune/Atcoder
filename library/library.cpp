#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

// 素因数分解
map<ll,ll> prime_factor(ll n){
    map<ll,ll> res;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            ++res[i];
            n/=i;
        }
    }
    if(n!=1) res[n]=1;
    return res;
}

// 冪剰余
ll mod_pow(ll x,ll n,ll m){
    if(n==0) return 1;
    ll res=mod_pow(x*x%m,n/2,m);
    //cout<<n<<"-"<<res<<"-"<<res*x<<"\n";
    if(n&1) {//cout<<x<<"-"<<res*x<<"\n";
      cout<<n<<"-"<<res<<"-"<<res*x<<"\n";
      res=res*x%m;
    }
    //print(n)
    return res;
}

 
class UnionFindTree {
    std::vector<int> tree;
public:
    UnionFindTree(size_t n): tree(n, -1) {}
    size_t find_root(size_t v) {
        if (tree[v] < 0) return v;
        return tree[v] = find_root(tree[v]);
    }
    bool unite(size_t x, size_t y) {
        x = find_root(x);
        y = find_root(y);
        if (x == y) return false;
        if (rank(x) < rank(y)) std::swap(x, y);
        tree[x] += tree[y];
        tree[y] = x;
        return true;
    }
    bool connected(size_t x, size_t y) {
        return find_root(x) == find_root(y);
    }
    size_t rank(size_t v) {
        return -tree[find_root(v)];
    }
};
 


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

struct edge{
  ll to,cost;
};

vector<ll> dijkstra2(ll s, vector<edge> G[]){
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


bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}


ll gcd(ll a, ll b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

ll lcm(ll a, ll b)
{
   return a * b / gcd(a, b);
}
