#include <iostream>

using namespace std;

int main() {
  // Your code here
  int a,b;
  cin>>a>>b;
  int res =1;

  for(int i=1; i<=b; i++){
    res *= a;
  }

  cout<<res;
}