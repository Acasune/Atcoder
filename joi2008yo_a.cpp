#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int M;
int main(){
  cin>>M;
  int C=1000-M;
  int n_c=0;
  int m_l[6]={500,100,50,10,5,1};
  for (int m :m_l){
    while(C-m>=0){
      n_c++;
      C-=m;
    }
  }
  cout<< n_c  << "\n";
}