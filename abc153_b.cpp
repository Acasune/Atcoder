#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
  int H,N;
  cin>>H>>N;
  int A[N];
  for (int i = 0; i < N; i++) {
    cin>>A[i];
  }
  for(int i=0;i<N;i++){
    H-=A[i];
    if(H<=0){
      cout<<"Yes"<<"\n";
      return 0;
    }
  }
  cout <<"No"<<"\n";
}