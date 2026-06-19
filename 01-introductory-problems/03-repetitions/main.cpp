#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll repetions(string &word) {
    ll len = word.length();

    ll ans = 1;
    ll currCount = 1;

    char lastCh = word[0];

    for(int i=1; i<len; ++i) {
        char ch = word[i];
        
        if(lastCh == ch) {
            currCount++;
            ans = max(ans, currCount);
        }else {
            currCount = 1;
            lastCh = ch;
        }
    }

    return ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin>>word;

    ll ans = repetions(word);
    cout<<ans<<endl;

    return 0;
}