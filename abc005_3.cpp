#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> P;

int main(){
  int T,N;cin>>T>>N;
  vector<P> a(N);
  for (int i = 0; i < N; i++) {
    cin>>a[i].second;
    a[i].first=a[i].second+T;
  }
  int M;cin>>M;
  int b_l[M];
  for (int i = 0; i < M; i++) {
    cin>>b_l[i];
  }
  if(N<M){
    cout<< "no"  << "\n";
    return 0;
  }
  sort(a.begin(),a.end());
  int n_tako=0;
  bool is_sold=false;
  for (int m = 0; m < M; m++){
    while(!(a[n_tako].second<=b_l[m]&&b_l[m]<=a[n_tako].first)){
      n_tako++;
      if(n_tako==N){
        is_sold=true;
        break;
      }
    }
    n_tako++;
    if(is_sold)break;
  }
  if(is_sold)cout<< "no"  << "\n";
  else cout<< "yes"  << "\n";
  



}