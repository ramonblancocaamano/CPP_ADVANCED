#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    set<int> s1(mynumbers, mynumbers + 7);
    multiset<int> s2(s1.begin(), s1.end());

    s2.insert(s1.begin(), s1.end());
    s2.erase(s1.lower_bound(1), s2.lower_bound(4));  // LINE I

    for (multiset<int>::iterator i = s2.begin(); i != s2.end(); i++) {
        cout << *i << ", ";
    }

    return 0;
}