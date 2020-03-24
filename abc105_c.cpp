#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef long double lb;
typedef vector<int,vector<int>> vec;
typedef pair<int,int> P;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;

int main(){
  ll N,i=1;cin>>N;
  string ans="";
  if(N==0){
    print(0)
    return 0;
  }
  while(N!=0){
    // print(N<<" "<<i)
    if(N%((ll)((powl(2LL,i))))!=0){
      ans='1'+ans;
      N=N-powl((-2LL),i-1);
    }
    else {
      ans='0'+ans;
    }
    i++;
  }

  print(ans)
}
