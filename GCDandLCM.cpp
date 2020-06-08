#include<iostream>
#include<iostream>
using namespace std;

int gcdivisor(long long int a,long long int b){
    if(b==0) return a;
    return gcdivisor(b,a%b);
}

int main(){
    long long int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        long long int gcd=gcdivisor(a,b);
        long long int lcm=(a/gcd)*b;
        cout<<gcd<<" "<<lcm<<endl;

    }
    return 0;
}