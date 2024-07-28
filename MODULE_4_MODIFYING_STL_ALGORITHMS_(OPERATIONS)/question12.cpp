#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void printer(int i) {
    cout << i << ", ";  //
}

bool classifier(int v) {
    return v - 3 > 0;  //
}

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);

    replace_if(v1.begin(), v1.end(), classifier, 7);  // LINE I
    for_each(v1.begin(), v1.end(), printer);          // LINE II

    return 0;
}