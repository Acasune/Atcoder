#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define all(vec) vec.begin(),vec.end()
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e8;
typedef pair<int,int> P;

ll gcd(ll a, ll b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

ll lcm(ll a, ll b)
{
   return a * b / gcd(a, b);
}

int main(){
  ll A,B,C,D;cin>>A>>B>>C>>D;
  A--;
  ll CD=lcm(C,D);
  ll ans;
  ans=B-A;
  ans+=A/C-B/C+A/D-B/D+B/CD-A/CD;
  print(ans)
}
