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
  ll L,R,R2,ans=2018;cin>>L>>R;
  R2=min(L+2019,R);
  for(ll i=L;i<R2+1;i++){
    for(ll j=i+1;j<R2+1;j++){
      ans=min(ans,(i*j)%2019);
    }
  }
  print(ans)

}
