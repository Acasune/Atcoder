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
  vector<P> l(N);
  REP(i,0,N){
    l[i].second=i+1;
    cin>>l[i].first;
  }
  sort(l.begin(),l.end());
  REP(i,0,N)cout<<l[i].second<<" ";

  cout<<"\n";
  return 0;

}
