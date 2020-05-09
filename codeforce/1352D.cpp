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
    vector<int> log;
    while(t--){
        int n;
        cin>>n;
        log = vector<int>(n);
        for(auto &i : log)cin>>i;
        int alice =0;
        int bob =0;
        int l = -1;
        int r = n;
        int turn = 0;
        int lastturn =0;
        while(l+1 < r){
            turn ++;
            int sumturn = 0;
            if(turn &1){//alice
                while(sumturn <= lastturn && (l+1 < r)) {
                    sumturn += log[++l];
                    // cout<<sumturn<<' ';
                }
                alice += sumturn;
            }else{//bob
                while(sumturn <= lastturn && (l < r-1)) {
                    sumturn += log[--r];
                    // cout<<sumturn<<' ';
                }
                bob += sumturn;
            }
            lastturn = sumturn;
        }
        cout<<turn<<' '<<alice<<' '<<bob<<'\n';
    }
    return 0;
}