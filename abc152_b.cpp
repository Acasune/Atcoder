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
  int a,b;cin>>a>>b;
  string as=to_string(a),bs=to_string(b);
  string ans0="",ans1="";
  REP(i,0,b)ans0+=as;
  REP(i,0,a)ans1+=bs;
  print((ans0<ans1?ans0:ans1))
}
