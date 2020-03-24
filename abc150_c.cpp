#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,j,n) for (int i = j; n<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

int main(){
  int N,na,nb,cnt=0;cin>>N;
  vector<int> a(N),b(N),c(N);
  REP(i,0,N)cin>>a[i];
  REP(i,0,N)cin>>b[i];
  iota(c.begin(), c.end(), 1);
  //REP(i,0,N)print(c[i])
  do{
    cnt++;
    if(c==a)na=cnt;
    if (c==b)nb=cnt;
  }while(next_permutation(c.begin(), c.end()));
  print(abs(na-nb))

}
