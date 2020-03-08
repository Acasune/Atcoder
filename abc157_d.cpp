#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;

int main(){
  int N,M;cin>>N>>M;
  int S[M];
  string C[M];
  REP(i,0,M)cin>>S[i]>>C[i];

  string s="";
  REP(i,0,N)s+="0";

  string tmp[N+1];
  REP(i,0,N+1)tmp[i]="-2";

  REP(i,0,M){
    if((tmp[S[i]-1]!=C[i])&&(tmp[S[i]-1]!="-2")){
      print("-1");
      return 0;
    }
    s[S[i]-1]=C[i][0];
    tmp[S[i]-1]=C[i][0];
  }

  if(s.size()>1&&s[0]=='0')print("-1")
  else print(s)
}
