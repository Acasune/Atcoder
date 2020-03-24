#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define all(vec) vec.begin(),vec.end()
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e8;
typedef pair<int,int> P;

int main(){
  int N;cin>>N;
  if(N%2==1){
    print(0)
    return 0;
  }
  vector<int> D(N);
  REP(i,0,N)cin>>D[i];
  sort(all(D));
  int left,right;
  left=D[N/2-1];
  right=D[N/2];
  print(right-left)
}
