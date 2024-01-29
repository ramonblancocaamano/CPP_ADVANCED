#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int found;
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2};

    vector<int> v(mynumbers, mynumbers + 12);

    found = count(v.begin(), v.end(), 6);  // LINE I
    cout << found << endl;

    return 0;
}