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
  string s1="",s2="";
  int ans0=0,ans1=0;
  REP(i,0,S.size()){
    if(i%2==0){
      if(S.at(i)!='0'){ans0++;}
      if(S.at(i)!='1'){ans1++;}
    }
    if(i%2==1){
      if(S.at(i)!='1'){ans0++;}
      if(S.at(i)!='0'){ans1++;}
    }
  }
  print(min(ans0,ans1))
  

}
