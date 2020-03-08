#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;

string S,C[200000];
int Q,T[200000],F[200000],t;
int main(){
  cin>>S>>Q;
  REP(i,0,Q){
    cin>>T[i];
    if(T[i]==2){
      cin>>F[i]>>C[i];
    }
  }
  bool rev=false;
  REP(q,0,Q){
    if(T[q]==1){
      rev=!rev;
    }
    if(T[q]==2){
      if(F[q]==1){
        if(rev)S.insert(S.size(),C[q]);
        else S.insert(0,C[q]);
      }
      if(F[q]==2){
        if(rev)S.insert(0,C[q]);
        else S.insert(S.size(),C[q]);
      }
    }
  }
  if(rev){
    reverse(S.begin(),S.end());
  }
  print(S)

}
