#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll calcXor(ll n) {
    ll XOR = 0;

    for(int i=1; i<=n; ++i) {
        XOR = (XOR ^ i);
    }

    return XOR;
}

void missing_number(ll XOR, vector<ll> &numbers){
    
    int size = numbers.size();

    ll ans = XOR;
    for(int i=0; i<size; ++i) {
        ans ^= numbers[i];
    }

    cout<<ans<<endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    ll XOR = calcXor(n);

    vector<ll> numbers;

    for(int i=1; i<=(n-1); ++i) {
        ll num;
        cin>>num;

        numbers.push_back(num);
    }

    missing_number(XOR, numbers);

    return 0;
}