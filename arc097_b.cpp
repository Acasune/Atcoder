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
        if (rank(x) < rank(y)) std::sw
        ap(x, y);
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

int main(){
  int N,M;cin>>N>>M;
  int P[N];
  REP(n,0,N){
    int tmp;cin>>tmp;
    P[n]=tmp-1;
  }
  int X[M],Y[M];
  REP(m,0,M){
    int x,y;cin>>x>>y;
    X[m]=x-1;Y[m]=y-1;
  }
 UnionFindTree tree(N);
 REP(i,0,M){
   tree.unite(X[i],Y[i]);
 }
 int ans=0;
 REP(i,0,N){
   if(tree.connected(P[i],i)){
     ans++;
   }
  }
  print(ans)
}
