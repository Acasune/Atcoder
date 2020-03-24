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
  int N,M;cin>>N>>M;
  vector<int> S(M), C(M);
  REP(i,0,M){cin>>S[i]>>C[i];--S[i];}
  REP(n1,0,1000){
    string n=to_string(n1);
    bool flg=true;
    if(n.size()!=N){
      continue;
    }
    //print(n<<(n.at(0)))
    REP(m,0,M){
      if(n.at(S[m])!=(char)(C[m]+'0')){
        flg=false;
        break;
      }
    }
    if(flg){
      print(n)
      return 0;
    }
  }
  print("-1")

}
