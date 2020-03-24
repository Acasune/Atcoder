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
  int N,n_max,n_max_2;cin>>N;
  vector<int> A(N),B(N);
  REP(i,0,N){
    cin>>A[i];
    B[i]=A[i];
  }
  sort(B.begin(),B.end(),greater<int>());
  n_max=B[0],n_max_2=B[1];
  REP(i,0,N)print((A[i]==n_max?n_max_2:n_max));
  return 0;
}
