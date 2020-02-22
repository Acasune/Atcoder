#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
#define mod 10000000007
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n"

int main(){
  int N,R;cin>>N>>R;
  if(N>=10)print(R);
  else print((R+100*(10-N)));
  return 0;
}
