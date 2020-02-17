#include <bits/stdc++.h>

using namespace std;

int main(){
  long long X,Y;cin>>X>>Y;
  long long i=X;
  int ans=0;

  while(i<=Y){
    ans++;
    i*=2;
  }
  cout<< ans  << "\n";
}