#include<iostream>
using namespace std;

int main(){
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }
    */
   /*int n;
   int sum=0;
    cin>>n;
    int i=1;
    while(i<=n){
        sum=sum+i;
        cout<<sum<<" ";
        i=i+1;
} */
/*int n;
   int sum=0;
    cin>>n;
    int i=2;
    while(i<n){
        sum=sum+i;
        cout<<sum<<" ";
        i=i+2;
} */

    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if (n%i==0)
        {
            cout<<"not prime"<<i<<endl;
        }
        else{
            cout<<"prime"<<i<<endl;
        }
        i=i+1;   
    } 
   
     
}