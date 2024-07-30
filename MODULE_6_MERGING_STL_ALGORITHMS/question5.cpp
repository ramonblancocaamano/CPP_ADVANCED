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
    vector<Pocket> v1(mynumbers1, mynumbers1 + 4);  // LINE I

    sort(mynumbers2, mynumbers2 + 4);
    sort(mynumbers1, mynumbers1 + 4);

    merge(mynumbers1, mynumbers1 + 2, mynumbers2, mynumbers2 + 2,
          v1.begin());  // LINE II

    for_each(v1.begin(), v1.end(), printer);

    return 0;
}