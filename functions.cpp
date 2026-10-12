#include<iostream>
#include<math.h>
using namespace std;
// b to the power a
/*int power(int a, int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
        return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=pow(a,b);
    cout<<ans<<endl;
}*/




// Even Odd
/*bool isEven(int a){
    if (a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cin>>num;
    if (isEven(num)){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}*/


// ncr 
int fact(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int num=fact(n);
    int denom=fact(r)*fact (n-r);
    int ans= num/denom;
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"ans is "<<ncr(n,r)<<endl;
}