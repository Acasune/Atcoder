#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,j,n) for (int i = n; j<=i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;

int main(){
  ll N,M,ans=0,now=0;cin>>N>>M;
  vector<P> vec(N);
  REP(i,0,N){cin>>vec[i].first>>vec[i].second;}
  sort(vec.begin(),vec.end());
  for(int i=0;now<M;i++){
    ans+=vec[i].first*min(M-now,vec[i].second);
    now+=min(M-now,vec[i].second);
  }
  print(ans)


}
