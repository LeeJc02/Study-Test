#include<iostream>
int Fact(int n){
  if(n==0)
    return 1;
  else
    return n*Fact(n-1);
}
int main(){
  std::cout<<Fact(10)<<std::endl;
  return 0;
}
