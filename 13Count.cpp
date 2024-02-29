#include <iostream>

using namespace std;

int main() {
  // Your code here
  cout<<"Enter the number of numbers you want to enter: ";
  int n;
  cin>>n;
  int neg_count=0;
  int pos_count=0;
  int zero_count=0;

  for(int i=1; i<=n; i++){
    int numbers;
    cin>>numbers;
    if(numbers < 0){
        neg_count++;
    }
    else if(numbers>0){
        pos_count++;
    }
    else{
        zero_count++;
    }
  }

  cout<<"Count of positive numbers:"<<pos_count<<endl;
  cout<<"Count of negative numbers:"<<neg_count<<endl;
  cout<<"Count of zeros:"<<zero_count<<endl;


}