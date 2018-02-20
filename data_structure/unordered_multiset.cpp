#include <iostream>
#include <iterator>
#include <unordered_set>
using namespace std;

int main() {
    int n, q, i;
    string str;
    
    unordered_multiset<string> s;
    
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> str;
        s.insert(str);
    }
    cin >> q;
    for (i = 0; i < q; ++i) {
        cin >> str;
        cout << s.count(str) << '\n';
    }
}
