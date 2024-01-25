#include <algorithm>
#include <deque>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v1(mynumbers, mynumbers + 7);
    deque<int> d1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);

    /* LINE I */
    vector<int>::iterator found = find(v1.begin(), v1.end(), 3);

    /* LINE II */
    if (found != v1.end()) {
        cout << "found" < ", ";
    }

    cout << find(d1.begin(), d1.end(), 9) << ", ";  // LINE III
    cout << find(s1.begin(), s1.end(), 6) << ", ";  // LINE IV

    return 0;
}