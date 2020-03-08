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

int main(){
  int A[9];
  REP(i,0,9)cin>>A[i];
  int N;cin>>N;
  int b[N];
  REP(i,0,N)cin>>b[i];
  bool Ab[9];
  REP(i,0,9)Ab[i]=false;
  REP(i,0,9){
    REP(j,0,N){
      if(A[i]==b[j]){
        Ab[i]=true;
      }
    }
  }
  if((Ab[0]&&Ab[1]&&Ab[2])||(Ab[3]&&Ab[4]&&Ab[5])||(Ab[6]&&Ab[7]&&Ab[8])||
  (Ab[0]&&Ab[3]&&Ab[6])||(Ab[1]&&Ab[4]&&Ab[7])||(Ab[2]&&Ab[5]&&Ab[8])||
  (Ab[0]&&Ab[4]&&Ab[8])||(Ab[2]&&Ab[4]&&Ab[6]))print("Yes")
  else print("No")
}