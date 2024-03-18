#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printer(int i) {
    cout << i << ", ";  //
}

void multiply(int a) {
    a * 2;  // LINE I
}

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};
    vector<int> v1(mynumbers, mynumbers + 7);

    for_each(v1.begin(), v1.end(), multiply);
    iter_swap(v1.begin(), mynumbers + 6);  // LINE II
    for_each(v1.begin(), v1.end(), printer);

    return 0;
}