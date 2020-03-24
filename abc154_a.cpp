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
  int a,b;
  string s,t,u;cin>>s>>t>>a>>b>>u;
  if(s==u)cout<< (a-1)<<" "<<b  << "\n";
  else cout<< (a)<<" "<<(b-1)  << "\n"; 
}
