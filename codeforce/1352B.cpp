#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
#include <utility>
using namespace std;
#define FOR(i,s,n) for(int i =s;i<n;i++)
#define FORR(i,s,n) for(int i =s;i>=n;i--)
typedef long long ll;
int main( ){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans =0 ;
        if(n-k >= 0) ans |= (n-k)&1;
        else ans |= 1;
        if(n-2*k >=0 ) ans |= ((n-2*k)&1)<<1;
        else ans |= 2;
        if(ans == 3) cout<<"NO\n";
        else{
            cout<<"YES\n";
            vector<int> log;
            int sum;
            if(ans & (1)){ // odd
                cout<< n-2*k +2<<' ';
                FOR(i,1,k) cout<<2<<' ';
            }else { // even
                cout<<n - k +1<<' ';
                FOR(i,1,k) cout<<1<<' ';
            }
            cout<<"\n";
        }
    }
    return 0;
}
/*
8
10 3
100 4
8 7
97 2
8 8
3 10
5 3
1000000000 9
n - k if result = odd NO
n - 2*k if result = odd NO
*/