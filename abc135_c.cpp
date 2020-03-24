#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e8;
typedef pair<int,int> P;

int main(){
  int N;cin>>N;
  vector<ll> A(N+1),B(N);
  ll tmp,ans=0;
  REP(i,0,N+1)cin>>A[i];
  REP(i,0,N)cin>>B[i];
  REP(i,0,N){
    if(A[i]<B[i]){
      ans+=A[i];
      if(A[i+1]<=B[i]-A[i]){
        ans+=A[i+1];
        A[i+1]=0;
      }
      else{
        A[i+1]-=B[i]-A[i];
        ans+=B[i]-A[i];
      }
    }
    else if(A[i]>=B[i]){
      ans+=B[i];
    }
    // if(i==N){
    //   ans+=min(A[N+1],B[N]-A[N]);
    // }
  }
  print(ans)
  return 0;
}
