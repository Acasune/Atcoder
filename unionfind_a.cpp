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

// 参考 : https://atcoder.jp/contests/atc001/submissions/1172897

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
  int N,Q;cin>>N>>Q;
  int P[Q],A[Q],B[Q];
  REP(q,0,Q)cin>>P[q]>>A[q]>>B[q];

  UnionFindTree uft(N);
  REP(q,0,Q){
    if(!P[q])uft.unite(A[q],B[q]);
    else cout<<(uft.connected(A[q],B[q])?"Yes\n":"No\n");
  }
  return 0;
}