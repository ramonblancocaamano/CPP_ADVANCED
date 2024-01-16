#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v(mynumbers, mynumbers + 7);
    set<int> s1(v.begin(), v.end());

    s1.insert(v.begin(), v.end());
    s1.insert(10);
    
    v.push_back(5);
    s.insert(8);

    pair<set<int>::iterator, set<int>::iterator> range;
    range = s.equal_range(5);  // LINE I

    cout << *range.first << ", " << *range.second << endl;

    return 0;
}