#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

void printer(int i) { cout << i << ", "; }

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v1(mynumbers, mynumbers + 7);

    int counter = count_if(v1.begin(), v1.end(),
                           bind1st(less_equal<int>(), 4));  // LINE I

    v1.push_back(counter);  // LINE II

    for_each(v1.rbegin(), v1.rend(), printer);

    return 0;
}