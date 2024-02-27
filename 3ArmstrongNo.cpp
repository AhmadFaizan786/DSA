#include<iostream>
using namespace std;
int main(){

    cout<<"Enter a number."<<endl;
    int n;
    cin>>n;
    int orig_num = n;
    int remainder;
    int res=0;

    while(n>0){
        remainder = n % 10;
        res += remainder*remainder*remainder;
        n /= 10;
    }

    if(orig_num == res){
        cout<<orig_num<<" is an armstrong number";
    }else{
        cout<<orig_num<<" is not an armstrong number";
    }
}
