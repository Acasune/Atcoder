#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
using vec_i=vector<int>;
const int INF = 1e9;

int main(){
  int N,ans=INF,S1,S2;cin>>N;
  vec_i w_l(N);
  REP(i,0,N)cin>>w_l[i];
  REP(t,0,N){
    S1=accumulate(w_l.begin(),w_l.begin()+t,0);
    S2=accumulate(w_l.begin()+t,w_l.end(),0);
    ans=min(ans,abs(S1-S2));
  }
  print(ans)
}
