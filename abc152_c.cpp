#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,j,n) for (int i = j; n<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

int main(){
  int N,a,mini,cnt=0;cin>>N;
  vector<int> v(N),mn(N+1);
  mn[0]=INF;
  bool flg;
  cin>>v[0];
  mn[0]=v[0];
  REP(i,1,N){
    cin>>a;
    v[i]=a;
    mn[i]=min(a,mn[i-1]);
  }
  REP(i,0,N){
    if(mn[i]>=v[i])cnt++;
  }
  print(cnt)
}
