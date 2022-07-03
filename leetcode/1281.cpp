#include<iostream>
using namespace std;

int subtractProductAndSum(int n){
     
    int sum=0,remainder=0;
    int product = 1;
        
    while(n){
       remainder = n%10;
       sum += remainder;
       product *= remainder;
       n = n/10;
    }

    return product - sum;
}

int main(){
    int n;
    cin>>n;

    cout<<subtractProductAndSum(n);
}