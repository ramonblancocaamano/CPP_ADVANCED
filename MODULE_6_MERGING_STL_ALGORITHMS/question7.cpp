#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printer(int i) { cout << i << ", "; }

int main() {
    int mynumbers1[] = {3, 9, 0, 2};
    int mynumbers2[] = {6, 1, 4, 7};

    vector<int> v1(10);
    vector<int> v2(20);

    sort(mynumbers2, mynumbers2 + 4);
    sort(mynumbers1, mynumbers1 + 4);

    copy(mynumbers1, mynumbers1 + 4, v1.begin());
    copy(mynumbers2, mynumbers2 + 4, v1.begin() + 5);  // LINE I

    sort(v1.begin(), v1.end());
    
    merge(v1.begin(), v1.end(), v1.begin(), v1.end(), v2.begin());  // LINE II
    
    for_each(v1.begin(), v1.end(), printer);

    return 0;
}