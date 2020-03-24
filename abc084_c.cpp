#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
typedef vector<int,vector<int>> vec;
typedef pair<int,int> P;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;

int main(){
  ll N;cin>>N;
  vector<ll> C(N-1),S(N-1),F(N-1);

  REP(i,0,N-1){cin>>C[i]>>S[i]>>F[i];}
  REP(i,0,N-1){
    ll ans=C[i]+S[i];
    REP(j,i+1,N-1){
      if(ans<=S[j]){
        ans=S[j]+C[j];
      }
      else{
        if((ans-S[j])%F[j]==0){
          ans=ans+C[j];
        }
        else{
        ans=ans+(F[j]-(ans-S[j])%F[j])+C[j];
        }
      }
    }
    print(ans)
  }
  print(0)
}
