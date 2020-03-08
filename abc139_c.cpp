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
  int N,tmp_1,tmp,tmpans=0,ans=0;cin>>N;
  cin>>tmp_1;
  REP(i,0,N-1){
    cin>>tmp;
    if(tmp_1>=tmp){
      tmpans++;
    }
    else{
      ans=max(ans,tmpans);
      tmpans=0;
    }
    tmp_1=tmp;
  }
  ans=max(tmpans,ans);
  print(ans)
  
}
