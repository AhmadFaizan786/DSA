#include <iostream>

using namespace std;

int main() {
  // Your code here
  int n;
  cin>>n;
  int sum=0;
  while(n>0){
    int last_digit = n % 10;
    sum += last_digit;
    n /= 10;
  }
  cout<<sum;
}