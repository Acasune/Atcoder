#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

int main(){
  string S;cin>>S;
  int begin=0,end=S.size()-1,ans=0;
  while(begin<end){
    if(S.at(begin)!=S.at(end))ans++;
    begin++;end--;
  }
  print(ans)
}
