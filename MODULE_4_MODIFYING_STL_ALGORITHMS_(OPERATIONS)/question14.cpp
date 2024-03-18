#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void printer(int i) {
    cout << i << ", ";  //
}

struct sequence {
    int val, inc;

   public:
    sequence(int s, int i) : val(s), inc(i) {}
    operator int() const {  // LINE I
        int r = val;
        return r;
    }
};

int main() {
    vector<int> v1(7);

    fill(v1.begin(), v1.end(), sequence(1, 2));  // LINE II
    for_each(v1.begin(), v1.end(), printer);

    return 0;
}