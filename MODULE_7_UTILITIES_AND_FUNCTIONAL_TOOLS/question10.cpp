#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

void printer(int i) { cout << i << ", "; }

int main() {
    int mynumbers1[] = {3, 9, 0, 2, 1, 4, 5};

    int mynumbers2[] = {9, 0, 2, 1, 4, 5, 3};

    vector<int> v1(mynumbers1, mynumbers1 + 7);
    vector<int> v2(mynumbers1, mynumbers1 + 7);
    vector<int> v3(mynumbers2, mynumbers2 + 7);  // LINE I

    transform(v1.begin(), v1.end(), v2.rbegin(), v3.begin(),
              minus<int>());  // LINE II

    for_each(v3.rbegin(), v3.rend(), printer);

    return 0;
}