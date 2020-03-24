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
  double W,H,x,y;cin>>W>>H>>x>>y;
  bool is_center=((x+x==W)&&(y+y==H));
  cout<<(double(W*H/2))<<" "<<(is_center?1:0)<<"\n";
  return 0;
}
