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
    int t;
    cin>>t;
    while((t--)){
        int n,k;
        cin>>n>>k;
        int kk = k;
        int temp = k/n;
        int realadd = temp;
        k -= n*temp;
        while(k + temp >= n){
            k += temp;
            temp = (k)/n;
            k -= n*temp;
            realadd += temp;
        }
        cout<<kk+realadd<<'\n';
    }
    return 0;
}
/*
6
3 7
    n  = 7
    k  = 6
    temp =  2
    realadd = 15
4 12
2 1000000000
7 97
1000000000 1000000000
2 1

*/