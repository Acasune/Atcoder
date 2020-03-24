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

ll N,M;
string S;

int main(){
  cin>>S;
  N=S.size();
  REP(i,0,N/2){
    if(S.at(i)!=S.at(N-1-i)){
      print("No")
      return 0;
    }
  }
  REP(i,0,(N-1)/2){
    if(S.at(i)!=S.at((N-1)/2-i-1)){
      print("No")
      return 0;
    }
  }
  REP(i,((N+3)/2),N){
    if(S.at(i)!=S.at(N-i-1)){
      print("No")
      return 0;
    }
  }
  print("Yes")

  
}
