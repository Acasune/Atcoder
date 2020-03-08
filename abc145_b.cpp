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
  int N;string S;
  cin>>N>>S;
  if(N%2==1){
    print("No")
    return 0;
  }
  string pre=S.substr(0,S.size()/2),suf=S.substr(S.size()/2,S.size()/2);
  //print(pre<<suf)
  print((pre==suf?"Yes":"No"))
}
