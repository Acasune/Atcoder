#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
typedef vector<int,vector<int>> vec;
typedef pair<int,int> P;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;

int main(){
  ll N;cin>>N;
  vector<int> vec(5,0);
  string s;
  REP(i,0,N){
    cin>>s;
    if(s.at(0)=='M')vec[0]++;
    if(s.at(0)=='A')vec[1]++;
    if(s.at(0)=='R')vec[2]++;
    if(s.at(0)=='C')vec[3]++;
    if(s.at(0)=='H')vec[4]++;
  }
  ll ans=0;

  REP(i,0,5)REP(j,i+1,5)REP(k,j+1,5){
    ans+=1LL*vec[i]*vec[j]*vec[k];
  }

  print(ans)

}
