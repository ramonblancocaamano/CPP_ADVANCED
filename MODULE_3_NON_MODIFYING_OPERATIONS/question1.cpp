#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 2, 2, 5};

    vector<int> v(mynumbers, mynumbers + 7);
    vector<int>::iterator it = v.begin();

    /*  LINE I*/
    while ((it = adjacent_find(it, v.end())) != v.end()) {
        cout << it - v.begin() << ", ";
        it--;  // LINE II
    }

    cout << endl;
    return 0;
}