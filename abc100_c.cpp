#include <bits/stdc++.h>
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
  int INF=1000000007;
  int N,a,ans=0,tmp;cin>>N;
  REP(i,0,N){
    cin>>a;
    tmp=0;
    while(a){
      if(a%2==0){tmp++;}
      else {break;}
      a/=2;
    }
    ans+=tmp;
  }
  print(ans)
}
