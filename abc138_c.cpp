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
  vector<double> v(N,0);
  REP(i,0,N)cin>>v[i];
  REP(i,0,N-1){
    sort(v.begin(),v.end());
    v[0]=(v[0]+v[1])/2;
    v[1]=1001;
  }
  print(setprecision(8)<<v[0])

}
