#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

void printer(int i) { cout << i << ", "; }

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v1(mynumbers, mynumbers + 7);

    for_each(v1.begin(), v1.end(), bind2nd(plus<int>(), 1));  // LINE I
    for_each(v1.rbegin(), v1.rend(), printer);  // LINE II

    return 0;
}