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
  string s;cin>>s;
  REP(i,0,s.size()){
    if(((i%2==0)&&!(s.at(i)=='R'||s.at(i)=='U'||s.at(i)=='D'))||
    ((i%2==1)&&!(s.at(i)=='L'||s.at(i)=='U'||s.at(i)=='D'))){
      print("No")
      return 0;
    }
  }
  print("Yes")
  return 0;
}
