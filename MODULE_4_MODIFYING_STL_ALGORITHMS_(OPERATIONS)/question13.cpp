#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>

using namespace std;

void printer(int i) {
    cout << i << ", ";  //
}

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};
    deque<int> d1(mynumbers, mynumbers + 7);
    vector<int> v1(d1.rbegin(), d1.rend());

    swap_ranges(v1.begin(), v1.end(), d1.begin()); // LINE I                             // LINE I
    sort(d1.begin(), d1.end()); // LINE II

    for_each(d1.begin(), d1.end(), printer); 
    for_each(v1.begin(), v1.end(), printer); 

    return 0;
}