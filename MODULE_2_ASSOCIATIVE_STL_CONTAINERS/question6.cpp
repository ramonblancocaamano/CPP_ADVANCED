#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v(mynumbers, mynumbers + 7);
    set<int> s1(v.begin(), v.end());

    s1.insert(v.begin(), v.end());
    s1.insert(10);
    s1.erase(s1.lower_bound(4), s1.upper_bound(6));
    s1.insert(v.begin(), v.end());

    for (set<int>::iterator i = s1.begin(); i != s1.end(); i++) {
        cout << *i << ", ";
    }

    return 0;
}