#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
using vec_i=vector<int>;
const int INF = 1e9;

int main(){
  string S;cin>>S;
  int pre=stoi(S.substr(0,2)),suf=stoi(S.substr(2,4));
  bool mmpre=false,mmsuf=false;
  if(0<pre&&pre<=12)mmpre=true;
  if(0<suf&&suf<=12)mmsuf=true;
  if(mmpre&&mmsuf)print("AMBIGUOUS")
  if(mmpre&&!mmsuf)print("MMYY")
  if(!mmpre&&mmsuf)print("YYMM")
  if(!mmpre&&!mmsuf)print("NA")

}
