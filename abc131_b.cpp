#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;


int main() {
    int N,L;
    cin>>N>>L;
    int B=L+N-1;
    int A;
    if((L+N-1)<=0){
        A=B;
    }
    else if(L>=0){
        A=L;
    }
    else{
        A=0;
    }
    int ans=(B+L)*(B-L+1)/2-A;
    cout<<ans<<"\n";
    return 0;
}
