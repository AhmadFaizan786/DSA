#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(num<=1){
        cout<<num<<" is not a prime number";
    }

    for(int i=2;i< num;i++){

        if(num%i==0){
        cout<< num <<"  is not a prime number.";
        break;
        }else{
        cout<< num <<" is a prime number.";
        return 0;
        }
    }
    
}