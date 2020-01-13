#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int N;
  int A[200];
  int count=0;
  cin >> N;
  for (int i=0;i<N;i++){
    cin >> A[i];
  }
  bool flg=true;
  while(flg){
     for (int i=0;i<N;i++){
      if(A[i]%2!=0){flg=false;}
      else{A[i]/=2;}
    }
    count++;
  }
  cout << count-1 << endl;
  return 0;
}