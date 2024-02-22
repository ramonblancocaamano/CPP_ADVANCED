#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printer(int i) {
    cout << i << ", ";  //
}

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};
    vector<int> v1(mynumbers, mynumbers + 7);
    copy(mynumbers, mynumbers + 7, v1.end()); // LINE I
    for_each(v1.begin(), v1.end(), printer); // LINE II
    return 0;
}