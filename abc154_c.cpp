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
  
  set<int> s;
  int N,a;cin>>N;
  REP(i,0,N){
    cin>>a;
    s.insert(a);
  }
  print((s.size()==N?"YES":"NO"))
}
