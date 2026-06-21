#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void print(vector<ll> vec) {
    int size = vec.size();
    cout<<vec.size()<<endl;

    for(int i=0; i<size; ++i) {
        cout<<vec[i]<<" ";
    }

    cout<<endl;
}

void two_sets(ll n) {
    ll sum = (n * (n+1)) / 2;

    if(n == 2 || (sum % 2 != 0)) {
        cout<<"NO"<<endl;
        return;
    }

    ll setSum = sum/2;

    cout<<"YES"<<endl;

    vector<ll> set1;
    vector<ll> set2;

    for(ll num=n; num>0; --num) {

        if(setSum - num >= 0) {
            setSum -= num;
            set1.push_back(num);
        }else{
            set2.push_back(num);
        }
    }

    print(set1);
    print(set2);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    two_sets(n);

    return 0;
}