#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
using tuplis = array<ll, 3>;
typedef long long ll;
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

int main(){
  ll N,M;cin>>N>>M;
  print((100*(N-M)+1900*M)*(powl(2,M)))
}
