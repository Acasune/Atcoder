#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
  string A;cin>>A;

  int bit=0;
  for (int bit=0;bit<(1<<3);bit++) {
    int sum=0;
    for(int i=0 ;i<3;++i){
      if(bit&(1<<i))sum+=stoi(A.substr(3-i,1));
      else sum-=stoi(A.substr(3-i,1));
    }
    sum+=stoi(A.substr(0,1));
    if(sum==7){
      string ans_str="";
      for(int i=0 ;i<3;++i){
        if(bit&(1<<i))ans_str="+"+A.substr(3-i,1)+ans_str;
        else ans_str="-"+A.substr(3-i,1)+ans_str;
      }
      cout<<A.substr(0,1)+ans_str+"=7"<<"\n";
      return 0;
    }
  }
}
