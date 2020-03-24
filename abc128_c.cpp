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
  int N,M,ans=0,s;cin>>N>>M;
  vector<int> K(M),P(M);
  vector<vector<int>> vec(M,vector<int>(N));
  REP(i,0,M){
    cin>>K[i];
    REP(k,0,K[i]){cin>>s;s--;vec[i][k]=s;}
  }
  REP(i,0,M)cin>>P[i];
  for (int bit = 0; bit < (1<<N); ++bit) {
    bool flg=true;
    for (int m = 0; m < M; ++m) {
      int tmp=0;
      REP(k,0,K[m]){
        if (bit & (1<<vec[m][k])) { 
          tmp++;
        }
      }
      if(tmp%2!=P[m]){
        flg=false;
        break;
      }
    }
    if(flg){ans++;}
  }
  print(ans)
}
