#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e8;
typedef pair<int,int> P;

int main(){
  ll N;cin>>N;
  ll a,b=-1;
  REP(i,0,N){
    cin>>a;
    if(a<b){
      print("No")
      return 0;
    }
    if(a-1>=b)a--;
    b=a;
  }
  print("Yes")
  return 0;
}
