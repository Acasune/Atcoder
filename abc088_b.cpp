#include<iostream>
#include<algorithm>
#include <stdlib.h> 
using namespace std;

int main(){
  int N;
  cin >> N;
  int A[110];
  for (int n=0; n <N ; n++)cin >> A[n];
  sort(A,A+N);
  int pAlice=0, pBob=0;
  for (int i = 0; i<N; i++) {
    if(i%2!=0) {
      pAlice+=A[i];
    }
    else{
      pBob+=A[i];
    }
  }
  cout<< abs(pAlice-pBob) << "\n";
  return 0;
}