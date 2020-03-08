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
  int n,cnt=0;cin>>n;
  int p_2,p_1,p;cin>>p_2>>p_1;
  REP(i,2,n){
    cin>>p;
    if(((p_2<p_1)&&(p_1<p))||((p<p_1)&&(p_1<p_2)))cnt++;
    p_2=p_1;
    p_1=p;
  }
  print(cnt)
}
