#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<=i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;

ll gcd(ll a, ll b){
  if (a%b == 0){
    return(b);
   }
  else{
    return(gcd(b, a%b));
  }
}

int main(){
  ll N,ans;cin>>N;
  vector<ll> vec(N),L(N),R(N);
  REP(i,0,N){cin>>vec[i];}
  L[0]=vec[0];R[N-1]=vec[N-1];
  REP(i,0,N-1){L[i+1]=gcd(L[i],vec[i+1]);}
  RREP(i,N-1,1){R[i-1]=gcd(R[i],vec[i-1]);}
  ans=max(R[1],L[N-2]);
  REP(i,1,N-1){ans=max(ans,gcd(L[i-1],R[i+1]));}
  print(ans)
}
