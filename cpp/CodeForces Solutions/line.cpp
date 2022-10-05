// Codeforces Round #817 (Div. 4)  D-Line
#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define read(arr,n) for(long long i=0;i<n;i++) cin>>arr[i];
const long long N=1e5 + 2;
void func1(){
    long long n;cin>>n;
    long long a = 0,b = n-1;
    string s;
    cin>>s;
    vector<long long> v;
    long long c = 0;
    rep(i,0,n){
        if(s[i] == 'L'){
            c+=i;
        }
        else{
            c+=n-1-i;
        }
    }
    while(a<b){
        if(s[a] == 'L'){
            v.push_back(n-1-a-(a));
        }
        if(s[b] == 'R'){
            v.push_back(b-(n-1-b));
        }
        a++;b--;
    }
    v.push_back(-1);
    long long count = 0;
    long long i = 0;
    while(v[i] != -1){
        c += v[i];
        count++;
        cout<<c;
        if(count!=n){
            cout<<" ";
        }
        i++;
    }
    rep(j,0,n-count){
        cout<<c;
        if(j != n-count){
            cout<<" ";
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