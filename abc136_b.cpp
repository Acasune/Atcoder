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
  int N,ans=0;cin>>N;
  string s="";
  REP(i,1,N+1){
    s=to_string(i);
    if(s.size()%2==1)ans++;
  }
  print(ans)
}
