#include<iostream>
using namespace std;

void mul(int F[2][2], int M[2][2])
{
    int x =  F[0][0] * M[0][0] + F[0][1] * M[1][0];
    int y =  F[0][0] * M[0][1] + F[0][1] * M[1][1];
    int z =  F[1][0] * M[0][0] + F[1][1] * M[1][0];
    int w =  F[1][0] * M[0][1] + F[1][1] * M[1][1];
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void pow(int p[2][2],int k){
    if(k==1) return;
    int M[2][2]={{1,1},
                {1,0}};
    pow(p,k/2);
    mul(p,p);
    if(k%2!=0) mul(p,M);
}

int main(){
    //int f[0][2]={0,1};
    int p[2][2]={{1,1},
                {1,0}};
    int n;
    cout<<"Which Fibonacci No.?";
    cin>>n;
    if(n==0){ cout<<"0"; return 0;}
    pow(p,n-1);
    cout<<p[0][0];
    return p[0][0];
}