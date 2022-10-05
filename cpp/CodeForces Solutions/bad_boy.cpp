// Codeforces round #726 (Div 2) B-Bad Boy
#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define read(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
const int N=1e5 + 2;
int mod(int a){
if(a<0)
return -1*a;
return a;
}
void func1(){
    int n,m,i,j;cin>>n>>m>>i>>j;
    int max = -1;  //1,1  1; n,1   2; 1,m   3; n,m   4
    int mxi,mxj;
    if((mod(i-1)+mod(j-1))>max){
        max = (mod(i-1)+mod(j-1));
        mxi = 1;
        mxj = 1;
    }
    if((mod(i-n)+mod(j-1))>max){
        max = (mod(i-n)+mod(j-1));
        mxi = n;
        mxj = 1;
    }
    if((mod(i-1)+mod(j-m))>max){
        max = (mod(i-1)+mod(j-m));
        mxi = 1;
        mxj = m;
    }
    if((mod(i-n)+mod(j-m))>max){
        max = (mod(i-n)+mod(j-m));
        mxi = n;
        mxj = m;
    }
    
    cout<<mxi<<" "<<mxj<<" ";
    max = -1;
    int mi,mj;
    if((mod(mxi-1)+mod(mxj-1))>max){
        max = (mod(mxi-1)+mod(mxj-1));
        mi = 1;
        mj = 1;
    }
    if((mod(mxi-n)+mod(mxj-1))>max){
        max = (mod(mxi-n)+mod(mxj-1));
        mi = n;
        mj = 1;
    }
    if((mod(mxi-1)+mod(mxj-m))>max){
        max = (mod(mxi-1)+mod(mxj-m));
        mi = 1;
        mj = m;
    }
    if((mod(mxi-n)+mod(mxj-m))>max){
        max = (mod(mxi-n)+mod(mxj-m));
        mi = n;
        mj = m;
    }
    cout<<mi<<" "<<mj;
}
int main(){
    int t;
    t=1;
    cin>>t; //for single test case remove it
    while(t--){
        func1();
        if(t!=0)
        cout<<endl;
    }
    return 0;
}