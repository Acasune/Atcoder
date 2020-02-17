#include <bits/stdc++.h>

using namespace std;

int main(){
  int A,B,C;cin>>A>>B>>C;
  set<int> s;
  s.insert(A);
  s.insert(B);
  s.insert(C);
  if(s.size()==2)cout<< "Yes"  << "\n";
  else cout<< "No"  << "\n";
}