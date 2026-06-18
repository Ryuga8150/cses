#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void print(ll n) {
    cout<<n<<" ";
}

void weird_algorithm(ll n) {

    print(n);   
    
    while(n != 1) {
        if(n%2 == 0) {
            n /= 2;
            print(n);
        }else {
            n = (n * 3) + 1;
            print(n);
        }
    }
    cout<<endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    weird_algorithm(n);

    return 0;
}