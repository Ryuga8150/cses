#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll binPow(ll base, ll power) {
    ll mod = 1e9 + 7;

    ll ans = 1;
    while(power > 0) {

        if(power%2 == 1) {
            ans = (ans * base) % mod;
        }

        base = (base * base) % mod;
        power /= 2;
    }

    return ans;
}

void bit_strings(ll n) {

    ll count = binPow(2,n);

    cout<<count<<endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    bit_strings(n);

    return 0;
}