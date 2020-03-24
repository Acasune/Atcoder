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
  string S;cin>>S;
  ll c0=0,c1=0;
  REP(i,0,S.size()){
    if(S.at(i)=='0'){c0++;}
    else {c1++;}
  }
  print(2*min(c0,c1))
}
