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
  int N,x,y,ans=0;cin>>N;
  vector<int> A(N);
  vector<vector<int> > X(N,vector<int>(N-1)),Y(N,vector<int>(N-1));
  REP(i,0,N){
    cin>>A[i];
    REP(j,0,A[i]){
      cin>>x>>y;x--;X[i][j]=x;Y[i][j]=y;
    }
  }

  bool flg;
  int cnt,t_tmp;

  for (int bit = 0; bit < (1<<N); ++bit) {
    cnt=0;flg=true;
    for (int i = 0; i < N; ++i) {
      if(bit & (1<<i)) {
        cnt++;
        REP(j,0,A[i]){
          if(Y[i][j]!=((bit & (1<<X[i][j]))?1:0)){
            flg=false;
            break;
          }
        }
      }
      if(!flg)break;
    }
    if(flg)ans=max(ans,cnt);
  }
  print(ans)
}
