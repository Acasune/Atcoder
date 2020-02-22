#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
#define mod 10000000007
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n"

int main(){
  int N;cin>>N;
  int x_l[N];
  double P=0.0;
  REP(x,0,N){
    cin>>x_l[x];
    P+=x_l[x];
  }
  P=round(P/N);
  int ans=0;
  REP(i,0,N){
    ans+=pow((x_l[i]-P),2);
  }
  print(ans);

}