#include <iostream>

using namespace std;

int main() {
  // Your code here
  int a, b, HCF;
  cout<<"Enter two numbers:";
  cin>>a>>b;

  for(HCF =min(a,b);HCF>=1; HCF--){
    if(a % HCF ==0 && b % HCF ==0){
        cout<<"HCF Of "<< a <<" and "<< b <<" is "<<HCF;
        break;
    }
  }

}