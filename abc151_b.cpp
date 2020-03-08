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
  int N,K,M,tmp,total;
  cin>>N>>K>>M;
  REP(i,0,N-1){
    cin>>tmp;
    total+=tmp;
  }
  int aim=N*M;
  print(((aim-total<=K)?max(0,aim-total):-1))
}
