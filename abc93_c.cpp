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
  int N=3;
  vector<int> vec(N);
  REP(i,0,3){
    cin>>vec[i];
  }
  sort(all(vec));
  int ans=0;
  if((vec[0]%2!=vec[1]%2)&&(vec[1]%2!=vec[2]%2)){
    vec[2]++;vec[0]++;
    ans++;
  }
  else if((vec[1]%2!=vec[2]%2)&&(vec[2]%2!=vec[0]%2)){
    vec[0]++;vec[1]++;
    ans++;
  }  
  else if((vec[2]%2!=vec[0]%2)&&(vec[0]%2!=vec[1]%2)){
    vec[1]++;vec[2]++;
    ans++;
  }
  ans+=(vec[2]-vec[0])/2+(vec[2]-vec[1])/2;
  print(ans)
}
