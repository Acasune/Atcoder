#include<iostream>
#include<set>
#include <stdlib.h> 
using namespace std;

int main(){
  int N;
  cin >> N;
  int D[N];
  for (int n=0; n <N ; n++)cin >> D[n];
  set<int> ans;
  for (int i = 0; i < N; i++)
  {
    ans.insert(D[i]);
  }
  cout<< ans.size() << "\n";
  return 0;
}