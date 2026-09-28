#include<iostream>
using namespace std;

int main(){
    //fibonacci series

    /*int n=10;
    int a=0, b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=1;i<=n;i++){
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }*/
    
    //Prime number

    /*int n=9;
    bool isPrime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
        if(isPrime==0){
            cout<<"not prime"<<endl;
        }
        else{
            cout<<"is prime"<<endl;
        }*/


    //leetcode prob 1 diff of prod and sum of digits

    /*int n=4321,prod=1, sum=0;
    while(n!=0){
        int dig=n%10;
        prod=prod*dig;
        sum=sum+dig;
        n=n/10;
    } 
    cout<<prod-sum<<endl;*/
    
    //leetcode prob 2
    
    int count=0,n=11;
    while(n!=0){
        if (n&1)
        {
            count++;
        }
        n=n>>1;
        
    } 
    cout<<count<<endl;
} 