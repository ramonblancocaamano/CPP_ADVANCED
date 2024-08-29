#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

class Pocket {
    int value;

   public:
    Pocket(int value) : value(value) {}

    int getValue() const { return value; }

    bool operator<(const Pocket& _Right) const { return value < _Right.value; }

    operator int() const { return value; }
};

ostream& operator<<(ostream& stream, const Pocket& pocket) {
    stream << pocket.getValue();  // LINE I

    return stream;
}

void printer(Pocket i) { cout << i << ", "; }

int main() {
    Pocket mynumbers1[] = {3, 9, 0, 2};
    Pocket mynumbers2[] = {2, 1, 4, 5};

    vector<Pocket> v1(5, 0);

    transform(mynumbers1, mynumbers1 + 4, mynumbers2, v1.rbegin(),
              plus<Pocket>());  // LINE II

    for_each(v1.rbegin(), v1.rend(), printer);

    return 0;
}