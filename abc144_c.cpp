#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const ll INF = 1e16;
using P=pair<ll,ll>;
//vector<vector<ll>> visited(1000000,vector(1000000)<ll>);

int main(){
  ll N,a,b,ans=INF;cin>>N;
  for(ll a=1;a<=sqrt(N);a++){
    if(N%a!=0)continue;
    b=N/a;
    ans=min(ans,(a+b-2));
  }
  print(ans)

  
}
