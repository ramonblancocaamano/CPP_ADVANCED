#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

void printer(int i) { cout << i << ", "; }

struct Add {
    int operator()(const int &_Left, const int &_Right) const  // LINE I
    {
        return _Left + _Right;
    }
};

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v1(mynumbers, mynumbers + 7);

    vector<int> v2(7);

    transform(v1.begin(), v1.end(), v2.begin(),
              bind1st(ptr_fun(Add()), 1));  // LINE II

    for_each(v2.begin(), v2.end(), printer);

    return 0;
}