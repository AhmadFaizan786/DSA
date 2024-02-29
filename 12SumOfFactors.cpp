#include <iostream>

using namespace std;

int main() {
  // Your code here
  int n;
  cin>>n;
  int sum =0;

  for(int i=1; i<n;i++){
    if(n%i == 0){
        sum += i;
    }
  }
  cout<<"Sum of all factors of "<<n<<" : "<<sum;
}