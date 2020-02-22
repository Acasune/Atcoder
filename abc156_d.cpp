#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
#define mod 10000000007
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n"
#define n N
int N,A,B,k;
long long c[1000000000+1];

void choose() {
  REP(r,0,N+1){
   if(r == 0 || r == N)continue;
   // store C(n,r) in a matrix   
   int c[r+1];
   int i,j;
   for(i=0;i<=n;i++) {
      // C(i,0) = 1 for i = 0...n  
      c[0] = 1;
   }
   for(j=0;j<=r;j++) {
      // if n = 0, C(n,r) = 0 for all 'r'
      c[j] = 0;
   }
   for(i=1;i<=n;i++) {
      for(j=1;j<=r;j++) {
         if (i == j) {
            // C(n,n) = 1
            c[j] = 1;
         }
         else if (j > i) {
            // case when r > n in C(n,r)        
            	c[j] = 0;
         }
         else {
            // apply the standard recursive formula        
            c[j] = c[j-1] + c[j];
         }
      }
   }
  }
}

int main(){
  int N,A,B;cin>>N>>A>>B;
  ll ans=0;
  choose();
  REP(i,0,N+1){
    if(i==A||i==B){
      ans=c[i];
    }
  }

  cout<<ans<<"\n";

}