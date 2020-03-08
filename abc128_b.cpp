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
typedef tuple<int,string,int> t;

int main(){
  int N,b,c;cin>>N;
  string a;
  vector<t> p_l;
  REP(i,0,N){
    cin>>a>>b;
    p_l.emplace_back(i,a,b);

  }
  sort(p_l.begin(),p_l.end(),[](auto const& a,auto const& b){
    if(get<1>(a)!=get<1>(b)) return get<1>(a)<get<1>(b);
    else return get<2>(a)>=get<2>(b);
  });
  REP(i,0,N)print(get<0>(p_l[i])+1);
}
