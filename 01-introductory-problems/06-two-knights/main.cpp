#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll calcCombinations(ll n) {
    // No of ways 2 knights do not attack each other = Total ways - two knights attack each other
    ll k = n*n;
    ll totalWays = (k*(k-1))/2;

    // 2 knights attack each other = no of 2 X 3 slabs + no of 3 X 2 slabs
    // both slabs hold 2 attacking position each

    // no of 2 X 3 slabs
    ll count2x3Slabs = (n-2) * (n-1) * 2;

    // no of 3 X 2 slabs
    ll count3x2Slabs = (n-1) * (n-2) * 2;

    return totalWays - count2x3Slabs - count3x2Slabs;
}

void two_knights(ll n) {
    
    for(int i=1; i<=n; ++i) {
        ll combinations = calcCombinations(i);
        cout<<combinations<<endl;
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    two_knights(n);

    return 0;
}