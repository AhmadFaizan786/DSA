#include <iostream>

using namespace std;

int main() {
  // Your code here
  int n;
  cin>>n;
  int rev_num =0;

  while(n>0){
    int last_digit = n % 10;
    rev_num = rev_num*10+ last_digit;
    n /= 10;
  }
  cout<<rev_num;

}