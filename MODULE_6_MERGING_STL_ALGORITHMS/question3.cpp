#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printer(int i) { cout << i << ", "; }

int main() {
    int mynumbers1[] = {3, 9, 0, 2};
    int mynumbers2[] = {6, 1, 4, 5};
    vector<int> v1(7);

    sort(mynumbers2, mynumbers2 + 4);
    sort(mynumbers1, mynumbers1 + 4);  // LINE I

    set_difference(mynumbers1, mynumbers1 + 4, mynumbers2, mynumbers2 + 4,
                   v1.begin());  // LINE II

    for_each(v1.begin(), v1.end(), printer);

    return 0;
}