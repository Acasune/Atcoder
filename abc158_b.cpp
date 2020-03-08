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

ll N,A,B;
int main(){
  cin>>N>>A>>B;
  ll AB=A+B;
  ll ans =(N/AB)*A;
  ll md = N%AB;

  if(md-A>0){
    print((ans+A))
  }
  else print((ans+md));

}
