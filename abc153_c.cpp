#include<iostream>
#include <algorithm>

using namespace std;

int main(){
  int N;cin>>N;
  int K;cin>>K;
  int H[N];
  for (int i = 0; i < N; i++)cin >>H[i];
  sort(H, H+N, greater<>());
  if(K<=N){
  for(int k=0;k<K;k++)H[k]=0;
  long sum=0;
  for(int n=K;n<N;n++)sum+=H[n];
  cout<<sum<<"\n";
  }
  else{
    cout<<0<<"\n";
  }
}