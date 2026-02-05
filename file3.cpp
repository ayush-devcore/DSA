#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter value of a and b:";
    cin>>a>>b;
    a = a+b - (b=a);       //Swapping a number using single variable.
    cout<<a<<endl<<b;
    return 0;
}