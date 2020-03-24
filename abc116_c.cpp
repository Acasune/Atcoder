#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<=i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;

int main(){
  int N;cin>>N;
  vector<int> H(N);
  REP(i,0,N){cin>>H[i];}

  int give_water=0,cnt,idx;
  while(true){
    cnt=idx=0;
    while(idx<N){
      cnt+=H[idx];
      if(H[idx]){
        give_water++;
        while(idx<N&&H[idx]){
          H[idx]--;
          idx++;
        }
      }
      idx++;
    }
    if(cnt==0){break;}
  }
  print(give_water)

}
