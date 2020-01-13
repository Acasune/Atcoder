#include<iostream>
#include<stdio.h>
using namespace std;

int digit(int x){
  int test = 0;
  while(0<x){
    test+=x%10;
    x/=10;
  }
  return test;
}
int main(){
  int N, A, B;
  cin >> N >> A >> B;
  int ans=0;
  for (int i =1 ; i <=N ; i++) {
    if(A<=digit(i) and digit(i)<=B) {
      ans+=i;
    }
  }
  cout<< ans << "\n";
  return 0;
}