#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;
int N;string s;
set<string> ans_set;

void dfs(string s){
  if(s.size()==N){ans_set.insert(s);return;}
  char mx_ch='a';
  for(char a:s){
    mx_ch=max(mx_ch,a);
  }
  for(char a='a';a<=mx_ch+1;a++){
    dfs(s+a);
  }
  return;
}

int main(){
  cin>>N;
  dfs("a");
  for(auto e:ans_set){
    print(e)
  }
}
