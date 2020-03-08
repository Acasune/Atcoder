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
  int N,X;cin>>N>>X;
  int cnt=1,l,d_1=0,d;
  REP(i,0,N){
    cin>>l;
    d=d_1+l;
    if(d<=X)cnt++;
    d_1=d;
  }
  print(cnt)
}
