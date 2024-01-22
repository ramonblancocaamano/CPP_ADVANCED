#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v(mynumbers, mynumbers + 7);
    set<int> s1(v.begin(), v.end());

    s1.insert(v.begin(), v.end());
    s1.insert(v.begin(), v.end());  // LINE I

    set<int>::iterator found = s1.find(9);

    for (; found != s1.end(); ++found) {
        cout << *found << ", ";
    }

    return 0;
}