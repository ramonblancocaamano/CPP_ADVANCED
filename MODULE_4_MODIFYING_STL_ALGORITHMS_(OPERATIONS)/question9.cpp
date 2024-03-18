#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void printer(int i) {
    cout << i << ", ";  //x
}

int main() {
    vector<int> v1(7, 1);

    fill(v1.begin() + 3, v1.end() - 1, 8);  // LINE I
    fill_n(v1.begin() + 4, 5, 7);             // LINE II

    for_each(v1.begin(), v1.end(), printer);

    return 0;
}