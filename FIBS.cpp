#include <iostream>
using namespace std;

int Fib(n){
  if(n==0 || n==1){
    return n;
  }
  return Fib(n-1) + Fib(n-2)
}

int main(){
  cin >> n ;
  cout << Fib(n) << endl;
  return 0;
}
