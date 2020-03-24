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
  ll H,W,h,w;cin>>H>>W;
  ll ans=0;
  if(H==1||W==1){
    print(1)
    return 0;
  }
  if(W%2==1){
    w=W/2+1;
    ans+=w*H;
    ans-=H/2;
  }
  else{ 
    w=W/2;
    ans=H*w;
  }
  print(ans)
}
