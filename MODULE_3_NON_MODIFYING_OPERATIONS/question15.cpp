#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2};

    vector<int> v(mynumbers, mynumbers + 12);
    vector<int>::iterator it = search_n(v.begin(), v.end(), 2, 1); // LINE I

    cout << it - v.begin() << endl; // LINE II

    return 0;
}