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
  int N,M,n_ac=0,n_wa=0;cin>>N>>M;
  int a;string b;
  vector<int> v_wa(N+1);
  vector<bool> v_ac(N+1);
  REP(i,0,N){
    v_wa[i]=0;
    v_ac[i]=false;
  }
  while(M--){
    cin>>a>>b;
    if(v_ac[a-1])continue;
    if(b=="AC"){
      n_ac++;
      v_ac[a-1]=true;
      n_wa+=v_wa[a-1];

    }
    else if(b=="WA") v_wa[a-1]++;
  }
  cout<< n_ac  << " ";
  cout<< n_wa << "\n";
}
