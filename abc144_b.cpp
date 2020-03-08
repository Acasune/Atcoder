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
  int N;cin>>N;
  REP(i,1,10)REP(j,1,10){
    if(i*j==N){
      print("Yes")
      return 0;
    }
  }
  print("No")
  return 0;
}
