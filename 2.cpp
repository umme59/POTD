
#include<iostream>
using namespace std;
int gcd(int a , int b){
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    int result=gcd(a,b);
    cout<<"the GCD of number is :"<<result<<endl;
    return 0;
}