#include <algorithm>
#include <deque>
#include <iostream>
#include <set>

using namespace std;

int main() {
    int mynumbers1[] = {3, 9, 0, 2};
    int mynumbers2[] = {6, 1, 4, 5};

    sort(mynumbers1, mynumbers1 + 4);
    sort(mynumbers2, mynumbers2 + 4);

    deque<int> d1(mynumbers1, mynumbers1 + 3);  // LINE I
    set<int> s1(mynumbers2, mynumbers2 + 3);  // LINE II

    sort(d1.begin(), d1.end());

    cout << includes(s1.begin(), s1.end(), mynumbers1, mynumbers1 + 4) << ", "
         << includes(d1.begin(), d1.end(), mynumbers1, mynumbers1 + 4) << endl;

    return 0;
}