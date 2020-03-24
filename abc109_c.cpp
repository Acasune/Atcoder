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

ll gcd(ll a, ll b){
   if (a%b == 0){
    return(b);
   }
   else{
    return(gcd(b, a%b));
   }
}

int main(){
  ll N,a;cin>>N;
  set <ll> s;
  REP(i,0,N+1){
    cin>>a;
    s.insert(a);
  }
  vector<ll> vec(s.begin(),s.end()),dif(N);
  REP(i,0,vec.size()-1){
    dif[i]=vec[i+1]-vec[i];
  }
  ll ans = dif[0];
  REP(i,1,dif.size()){
    ans=gcd(ans,dif[i]);
  }
  print(ans)

}
