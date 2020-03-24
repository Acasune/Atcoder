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
  ll A,B,X;cin>>A>>B>>X;
  ll n_min=0,n_max=1e9+1;
  ll keta,tmp_max,tmp,middle,a;
  do{
    tmp_max=n_max;keta=0;
    tmp=middle=(n_max+n_min)/2;
    while(tmp){
      keta++;
      tmp/=10;
    }
    //print(n_min<<" "<<middle<<" "<<n_max)
    if((a==A*middle+B*keta)&&X<a){print(n_max);return 0;}
    if((a==A*middle+B*keta)&&a<=X){print(n_min);return 0;}
    if(X==(A*middle+B*keta)){print(middle);return 0;}
    if(X>(A*middle+B*keta))n_min=middle;
    if(X<(A*middle+B*keta))n_max=middle;
    a=A*middle+B*keta;
  }while(n_min<n_max);

}
