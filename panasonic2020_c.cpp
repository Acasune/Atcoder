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
  ll a,b,c;cin>>a>>b>>c;
  double r_a=sqrt(a),r_b=sqrt(b),r_c=sqrt(c);
  bool flg=(r_c>r_a+r_b);
  print((flg?"Yes":"No"))
}
//1000000000
