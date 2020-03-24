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

ll N,M;
string S;

    int calcNumOfCombination(int n, int r){
        int num = 1;
        for(int i = 1; i <= r; i++){
            num = num * (n - i + 1) / i;
        }
        return num;
    }

int main(){
  ll a;
  cin>>N>>M;
  if((N==1)&&(M==1)){
    print(0);
    return 0;
  }
  else if(N==1){
    a=calcNumOfCombination(M,2);
    print(a)
    return 0;
  }
  else if(M==1){
    a=calcNumOfCombination(N,2);
    print(a)
    return 0;
  }
  else {
    a=calcNumOfCombination(N,2)+calcNumOfCombination(M,2);;
    print(a)
  }

}
