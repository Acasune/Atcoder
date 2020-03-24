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
  int N,K,h0,h,ans=INF,sum;cin>>N>>K;
  vector<int> H(N),Diff(N-1);
  REP(i,0,N){cin>>H[i];}
  sort(all(H));
  REP(i,0,N-K+1){
    sum=0;
    REP(j,i,i+K-1){
      sum+=H[j+1]-H[j];
    }
    ans=min(sum,ans);
  }
  print(ans)
}
