#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
#include<algorithm>
#include<stack>
#include<set>

using namespace std;
typedef pair<int, int> P;

int main(){
  int N;cin>>N;
  int X[N],L[N];
  P p_l[N];
  for (int i = 0; i < N; i++) {
    cin>>X[i]>>L[i];
    p_l[i].second=X[i]-L[i];
    p_l[i].first=X[i]+L[i];
  }
  sort(p_l,p_l+N);
  int ans=0;
  int now=-1000000000;
  for(int i=0;i<N;i++){
    if(now<=p_l[i].second){
      now=p_l[i].first;
      ans++;
    }
  }
  cout<<ans<<"\n";

}