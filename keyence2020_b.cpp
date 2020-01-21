#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int N;cin>>N;
  pair<int,int> itv[N];
  for (int i=0;i<N; i++) {
    int x;cin>>x;
    int l;cin>>l;
    itv[i].first=x+l;
    itv[i].second=x-l;
  }
  sort(itv,itv+N);

  int ans=0, t=-2000000000;
  for (int i = 0; i < N; i++)
  {
    if(t<=itv[i].second){
      ans++;
      t=itv[i].first;
    }
  }
  cout<< ans  << "\n";

}