#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void printer(int i) {
    cout << i << ", ";  //
}

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};
    set<int> s1(mynumbers, mynumbers + 7);
    vector<int> v1(s1.rbegin(), s1.rend());

    swap(s1, v1); // LINE I
    for_each(v1.begin(), v1.end(), printer); // LINE II

    return 0;
}