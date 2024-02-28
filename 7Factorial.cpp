#include <iostream>

using namespace std;

int main() {
  // Your code here
  int n, fact = 1;
  cin>>n;

  if(n<0){
    cout<<"Enter a postivie number";
  }
  else if(n<=1){
    cout<< n <<" ! = "<<fact;
  }
  else{
    for(int count =n; count>=2; count--){
        fact *= count;
    }
    cout<< n <<"! = "<<fact;
  }

}