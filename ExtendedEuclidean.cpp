#include<iostream>
using namespace std;

int gcdivisor(int a,int b,int &x,int &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int d=gcdivisor(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}

int main(){
    int x,y,a,b,c,g;
    cout<<"Enter the values:"<<endl;
    cin>>a>>b>>c;
    g=gcdivisor(a,b,x,y);
    if(c%g){
        cout<<false;
        return 0;
    }
    x=x*c;
    y=y*c;
    if(a<0) x=-x;
    if(b<c) y=-y;
    cout<<x<<" "<<y;
    return g;
}