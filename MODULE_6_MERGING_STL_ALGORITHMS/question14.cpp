#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Pocket {
    int value;

   public:
    Pocket(int value) : value(value) {}

    int getValue() const { return value; }

    bool operator<(const Pocket& _Right) const { return value < _Right.value; }
};

ostream& operator<<(ostream& stream, const Pocket& pocket) {
    stream << pocket.getValue();

    return stream;
}

void printer(Pocket i) { cout << i << ", "; }

int main() {
    Pocket mynumbers1[] = {3, 9, 0, 2};
    Pocket mynumbers2[] = {6, 1, 4, 5};
    vector<Pocket> v1(7, 0);

    sort(mynumbers2, mynumbers2 + 4);

    copy(mynumbers1, mynumbers1 + 4, v1.begin());
    copy(mynumbers2, mynumbers2 + 4, v1.begin() + 3);

    sort(v1.begin(), v1.begin() + 5);  // LINE I

    inplace_merge(v1.begin(), v1.begin() + 5, v1.end());  // LINE II

    for_each(v1.begin(), v1.end(), printer);

    return 0;
}