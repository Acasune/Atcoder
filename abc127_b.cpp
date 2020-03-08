#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
using vec_i=vector<int>;
const int INF = 1e9;

int main(){
  int r,D,x;cin>>r>>D>>x;
  REP(i,2,12){
    print(r*x-D)
    x=r*x-D;
  }
}
