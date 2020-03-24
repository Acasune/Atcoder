#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,j,n) for (int i = n; j<=i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

int main(){
  int N,Q,ans,l,r;cin>>N>>Q;
  string S,s;cin>>S;
  vector<ll> vec(N,0);
  REP(i,0,N-1){
    vec[i+1]=vec[i]+(S.substr(i,2)=="AC"?1:0);
  }
  REP(q,0,Q){
    cin>>l>>r;
    l--;r--;
    print(vec[r]-vec[l]);
  }

}
