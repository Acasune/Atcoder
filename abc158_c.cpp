#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;


int A,B;
int main(){
  cin>>A>>B;
  int x0_l,x0_u,x1_l,x1_u;
  x0_l=25*A;x0_u=25*(A+1);
  x1_l=20*B;x1_u=20*(B+1);
  int ans =INF;
  int mx = max(x0_l,x1_l);
  //print(x0_l<<x1_l<<x1_l<<x1_u)

  if(mx<min(x0_u,x1_u)){
    if(mx%2==1){
      print((mx/2+1));
      return 0;
    }
    else{
      print((mx/2));
      return 0;
    }
  }
  print("-1")
  
}
