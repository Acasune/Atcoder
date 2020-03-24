#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,j,n) for (int i = n; j<=i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

int main(){
  ll N;cin>>N;
  vector<ll> wt_time(5);
  REP(i,0,5){cin>>wt_time[i];}
  ll time=ceill(1.*N/(*min_element(wt_time.begin(),wt_time.end())))+4;
  print(time)
}
