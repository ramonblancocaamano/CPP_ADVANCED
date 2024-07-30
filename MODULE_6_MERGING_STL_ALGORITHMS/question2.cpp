#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};
    vector<int> v1(mynumbers, mynumbers + 7);

    sort(v1.begin(), v1.end(), greater<int>());  // LINE I
    cout << *min_element(v1.begin(), v1.end()) << ", ";  // LINE II

    return 0;
}