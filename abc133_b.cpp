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
  int N,D;cin>>N>>D;
  vector<vector<int> > X(N,vector<int>(D));
  int dist,cnt=0;
  REP(i,0,N)REP(j,0,D)cin>>X[i][j];
  REP(i,0,N)REP(j,i+1,N){
    dist=0;
    REP(d,0,D){
      dist+=pow((X[i][d]-X[j][d]),2);
    }
    REP(k,0,dist+1){
      if(pow(k,2)==dist)cnt++;
    }
  }
  print(cnt)
}
