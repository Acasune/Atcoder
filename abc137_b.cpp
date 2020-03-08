#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

int main(){
  int K,X;cin>>K>>X;
  int l,u;
  l=max(-1000000,X-K+1);
  u=min(1000000,X+K-1);
  REP(i,l,u+1){
    cout<<i<<" ";
  }
  cout<<"\n";


}
