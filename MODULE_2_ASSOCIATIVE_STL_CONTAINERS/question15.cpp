#include <functional>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v(mynumbers, mynumbers + 7);
    multiset<int> s1(v.begin(), v.end());
    multiset<int, greater<int>> s2(v.begin(), v.end());  // LINE I

    s2.insert(9);  // LINE II

    for (multiset<int>::iterator i = s1.begin(); i != s1.end(); i++) {
        cout << *i << ", ";
    }

    for (multiset<int, greater<int>>::iterator i = s2.begin(); i != s1.end();
         i++) {
        cout << *i << ", ";
    }

    cout << endl;

    return 0;
}