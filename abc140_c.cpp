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
  int N;cin>>N;
  vector<int> B(N,0);
  REP(i,0,N-1)cin>>B[i];
  int ans=B[0];
  REP(i,0,N-1)ans+=min(B[i],B[i+1]);
  print((ans+B[N-2]))

}
