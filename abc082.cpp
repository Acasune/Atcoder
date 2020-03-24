#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
typedef vector<int,vector<int>> vec;
typedef pair<int,int> P;
typedef long double ld;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;

int main(){
  int N,a;cin>>N;
  map<int,int>mp;
  REP(i,0,N){
    cin>>a;
    mp[a]++;
  }
  int ans=0;
  for(auto m :mp){
    ans+=(m.first>m.second?m.second:m.second-m.first);
  }
  print(ans)
}
