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
  int N;cin>>N;
  vector<int> P(N);
  REP(i,0,N)cin>>P[i];
  vector<int> P_c=P;
  int pre=-1,cnt=0;
  sort(P_c.begin(),P_c.end());
  REP(i,0,N){
    if(P[i]!=P_c[i]){
      cnt++;
      if(pre==-1){
        pre=P[i];
      }
      else if(pre!=P_c[i]){
        print("NO")
        return 0;
      }
    }
  }
  print(((cnt==2)||(cnt==0)?"YES":"NO"))
  return 0;
}
