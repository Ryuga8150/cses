#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void print(ll n) {
    cout<<n<<" ";
}

void printOddOrEven(ll start, ll n) {
    for(ll i = start; i<=n; i+=2) {
        print(i);
    }
}

void permutations(ll n) {
    if(n == 1) {
        cout<<1<<endl;
        return;
    }

    if(n == 2 || n == 3) {
        cout<<"NO SOLUTION"<<endl;
        return;
    }

    printOddOrEven(2, n);
    printOddOrEven(1, n);
    cout<<endl;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    permutations(n);

    return 0;
}