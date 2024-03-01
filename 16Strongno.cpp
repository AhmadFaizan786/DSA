#include <iostream>

using namespace std;

int main() {
  // Your code here
  cout<<"Enter the number:";
  int n;
  cin>>n;
  int orgi_num = n;
  int res = 0;

  while(n>0){
    int last_digit = n % 10;
    int fact=1;
    for(int i=last_digit; i>=1; i--){
        fact *= i;
    }
    res += fact;
    // res += fact;
    n /= 10;
  }
  if(orgi_num == res){
    cout<<orgi_num<<" is a strong number";
  }else{
    cout<<orgi_num<<" is not a strong number";
  }
}
