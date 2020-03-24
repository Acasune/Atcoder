#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e8;

int main(){
  
  int N,cnt=0;string S;cin>>N>>S;
  char s='1';
  REP(i,0,N){
    if(S.at(i)!=s){
      cnt++;
      s=S.at(i);
    }
  }
  print(cnt)
}
