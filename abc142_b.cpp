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
  int N, ans=0,tmp,K;
  cin>>N>>K;
  REP(i,0,N){
    cin>>tmp;
    if(tmp>=K)ans++;
  }
  print(ans)
}
