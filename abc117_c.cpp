#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<=i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;

int main(){
  int N,M,ans=0;cin>>N>>M;
  vector<int> X(M),diff(M-1);
  REP(i,0,M){cin>>X[i];}
  sort(all(X));
  REP(i,0,M-1){diff[i]=X[i+1]-X[i];}
  sort(all(diff),greater<>());
  REP(i,N-1,M-1){ans+=diff[i];}
  print(ans)
  
}
