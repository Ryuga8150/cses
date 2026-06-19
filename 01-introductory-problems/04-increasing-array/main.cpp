#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

void print(ll n) {
    cout<<n<<" ";
}

template<typename T>
vector<T> prepare(ll size) {
    vector<T> vec;
    ll num = 0;
    for(int i=0; i<size; ++i) {
        cin>>num;
        vec.push_back(num);
    }

    return vec;
}

ll increasingArray(vector<ll> &nums) {
    ll size = nums.size();
    
    ll ans = 0;
    ll prevNum = nums[0];
    
    for(int i=1; i<size; ++i) {
        ll num = nums[i];
        if(prevNum > num) {
            ans += (prevNum - num);
        }else {
            prevNum = num;
        }
    }

    return ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    vector<ll> nums = prepare<ll>(n);

    ll ans = increasingArray(nums);
    cout<<ans<<endl;

    return 0;
}