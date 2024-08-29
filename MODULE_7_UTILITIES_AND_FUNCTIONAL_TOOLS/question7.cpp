#include <algorithm>
#include <deque>
#include <functional>
#include <iostream>

using namespace std;

void printer(int i) { cout << i << ", "; }

struct MultiAdd : public binary_function<int, int, int> {
    int operator()(const int &_Left, const int &_Right) const {
        return 2 * (_Left + _Right);
    }
};

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    deque<int> d1(mynumbers, mynumbers + 7);

    deque<int> d2(7);  // LINE I

    transform(d1.begin(), d1.end(), d2.begin(),
              bind2nd(MultiAdd(), 1));  // LINE II

    for_each(d2.begin(), d2.end(), printer);

    return 0;
}