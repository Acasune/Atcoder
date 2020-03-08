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
  int N;
  cin>>N;
  vector<int> D(N);
  int ans=0;
  REP(i,0,N)cin>>D[i];
  REP(i,0,N)REP(j,i+1,N)ans+=D[i]*D[j];
  print(ans)
}
