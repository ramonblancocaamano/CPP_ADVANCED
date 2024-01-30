#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Found {
   public:
    int val;

    Founder(int v) : val(v) {}
    bool operator()(int v) {
        return (v == val);  // LINE I
    }
};

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v1(mynumbers, mynumbers + 7);

    if() {

    } else {
        cout << "Not found!n";
    }

    return 0;
}