#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

ll N;

ll dfs(ll arg){
  if(arg>N){return 0;}
  ll cnt0=0,cnt1=0,cnt2=0,tmp_arg=arg;
  while(tmp_arg){
    if(tmp_arg%10==7)cnt0++;
    if(tmp_arg%10==5)cnt1++;
    if(tmp_arg%10==3)cnt2++;
    tmp_arg/=10;
  }
  ll ret=(min({cnt0,cnt1,cnt2})?1:0);
  ret+=dfs(arg*10+7);
  ret+=dfs(arg*10+5);
  ret+=dfs(arg*10+3);

  return ret;
}

int main(){
  cin>>N;
  print(dfs(0))

}
