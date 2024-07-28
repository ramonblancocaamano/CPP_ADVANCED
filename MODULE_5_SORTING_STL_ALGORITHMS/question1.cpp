#include <algorithm>
#include <deque>
#include <iostream>

using namespace std;

void printer(int i) {
    cout << i << ", ";  //
}

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};
    deque<int> d1(mynumbers, mynumbers + 7);

    sort(d1.begin(), d1.end());
    d1.push_back(6);
    deque<int>::iterator it = upper_bound(d1.begin(), d1.end(), 3);  // LINE I
    for_each(it, d1.end(), printer);                                 // LINE II

    return 0;
}