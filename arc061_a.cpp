#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;
long long ans=0;

int main(){
  string S;cin>> S;
  long long S_len=S.length();
  for (long long bit=0; bit<(1<<(S_len-1)); ++bit){
    long long end=S_len;
    long long i=S_len-1;
    for (;0<=i;i--){
      if(bit&(1<<i)){
        ans+=stoll(S.substr(i+1,end-i-1));
        end=i+1;
      }
    }
   ans+=stoll(S.substr(0,end));
  }
  cout<< ans << "\n";
}
