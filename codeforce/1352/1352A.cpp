#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>
#include <utility>
using namespace std;
#define FOR(i,s,n) for(int i =0;i<n;i++)
#define FORR(i,s,n) for(int i =s;i>=n;i--)
typedef long long ll;
int main( ){
    int t,n,k;
    cin>>t;
    vector<int> ans;
    while(t--){
        k =1;
        ans.clear( );
        cin>>n;
        while(n){
            if(n%10){
                ans.push_back((n%10)*k);
            }
            k*=10;
            n/=10;
        }
        cout<<ans.size( )<<'\n';
        for(int i : ans) cout<<i<<' ';
        cout<<'\n';
    }
    return 0;
}
/*
5
5009
7
9876
10000
10

*/