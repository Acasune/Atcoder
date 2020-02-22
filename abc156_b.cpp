#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
#define mod 10000000007
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n"

int main(){
  ll N,K;cin>>N>>K;
  int ans=0;
  while(pow(K,ans)<=N){
    ans++;
  }
  print((ans));
}