// Educational Codeforces Round 134 (Rated for Div. 2) B-Deadly laser
#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define read(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
const int N=1e5 + 2;
void func1(){
    int n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
    int a = n+m-x-y;
    if(a<=d){
        cout<<-1;
    }
    else{
        if((d>=x-1)&&(d>=y-1)){
            cout<<-1;
        }
        else if((d>=(n-x))&&(d>=(m-y))){
            cout<<-1;
        }
        else if(((x-1 <= d)&&(n-x <= d))||((y-1 <= d)&&(m-y <= d))){
            cout<<-1;
        }
        else{
            cout<<(n+m-2);
        }
    }
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
