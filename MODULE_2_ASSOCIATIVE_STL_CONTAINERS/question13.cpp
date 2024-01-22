#include <iostream>
#include <list>
#include <set>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5, 5};

    list<int> v(mynumbers, mynumbers + 7);  // LINE I
    multiset<int> s1(v.begin(), v.end());

    /* LINE II */
    if (s1.count(5) == 1) {
        s1.erase(5);
    }

    for (multiset<int>::iterator i = s1.begin(); i != s1.end(); i++) {
        cout << *i << ", ";
    }

    return 0;
}