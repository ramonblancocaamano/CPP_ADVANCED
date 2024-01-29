#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(int a, int b) { return a == b; }

int main() {
    int m1[];
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v(mynumbers, mynumbers + 7);
    vector<int>::iteractor it = v.begin();

    int m1[] = {9, 0, 2};

    /* LINE I */
    while ((it = find_first_of(it, v.end(), m1, m1 + 3)) != v.end()) {
        cout << it - v.begin() << ", ";  // LINE II
        it++;
    }
    cout << endl;

    return 0;
}