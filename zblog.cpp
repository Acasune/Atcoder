#include <iostream>


int main(){
  auto test = [](int a){return a+3;};
  std::cout<<"引数: "<<1<<" 返り値: "<<test(1)<<std::endl;
  std::cout<<"引数: "<<2<<" 返り値: "<<test(2)<<std::endl;
  std::cout<<"引数: "<<10<<" 返り値: "<<test(10)<<std::endl;
  std::cout<<"引数: "<<100<<" 返り値: "<<test(100)<<std::endl;

}
