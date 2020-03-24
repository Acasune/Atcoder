#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e8;
typedef pair<int,int> P;

int main(){
  ll N,K,Q,a;cin>>N>>K>>Q;
  vector<ll> vec(N,0);
  REP(i,0,Q){
    cin>>a;
    vec[--a]++;
  }
  REP(i,0,N){
    print(((K-Q+vec[i])>0 ? "Yes":"No"))
  }
}
