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
  int N,K,k;cin>>N>>K;
  double rev=0.0,tmp;
  REP(i,1,N+1){
    tmp=1.0/N;
    int now=i;
    while(now<K){
      tmp/=2;
      now*=2;
    }
    rev+=tmp;
  }
  cout<<setprecision(12)<<rev<<"\n";

}
