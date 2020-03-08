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

int main(){
  int N,K,L;cin>>N>>K>>L;
  int P[K],Q[K],R[L],S[L];
  REP(k,0,K)cin>>P[k]>>Q[k];
  REP(l,0,L)cin>>R[l]>>S[l];
  
  UnionFindTree rd(N);
  UnionFindTree rrd(N);

  REP(k,0,K)rd.unite(P[k]-1,Q[k]-1);
  REP(l,0,L)rrd.unite(R[l]-1,S[l]-1);

  map<pair<int,int>,int> mp;
  REP(i,0,N)mp[make_pair(rd.find_root(i),rrd.find_root(i))]++;
  REP(i,0,N){
    cout<<mp[make_pair(rd.find_root(i),rrd.find_root(i))];
    if(i==N-1){
      cout<<"\n";
      return 0;
    }
    cout<<" ";
  }

}