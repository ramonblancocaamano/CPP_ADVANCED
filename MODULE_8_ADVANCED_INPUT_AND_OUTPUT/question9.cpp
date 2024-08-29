#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

void printer(int i) { cout << i << ", "; }

int main() {
    int mynumbers1[] = {3, 9, 0, 2};
    int mynumbers2[] = {6, 1, 4, 5};

    vector<int> v1(4);

    transform(mynumbers1, mynumbers1 + 4, mynumbers2, v1.rbegin(),
              plus<int>());  // LINE I

    for_each(v1.rbegin(), v1.rend(), printer);  // LINE II

    return 0;
}