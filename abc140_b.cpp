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
  int N,a,b,c;cin>>N;
  vector<int> A(N),B(N),C(N);
  REP(i,0,N){
    cin>>a;
    a--;
    A[i]=a;
  }
  REP(i,0,N){
    cin>>b;
    B[i]=b;
  }
  REP(i,0,N-1){
    cin>>c;
    C[i]=c;
  }
  int pre=-10,ans=0;
  REP(i,0,N){
    ans+=B[A[i]];
    if((pre+1)==A[i])ans+=C[pre];
    pre=A[i];
  }
  print(ans)
}
