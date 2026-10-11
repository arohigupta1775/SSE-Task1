#include<iostream>
using namespace std;

int main(){
    char ch='1';
    switch(ch){
        case 1: cout<<"1"<<endl;
                break;
        case '1' : cout<<"'1'"<<endl;
                break;
        default: cout<<"default"<<endl;
    }
}