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

    operator int() const { return value; }

    bool operator<(const Pocket& _Right) const { return value < _Right.value; }
};

ostream& operator<<(ostream& stream, const Pocket& pocket) {
    stream << pocket.getValue();

    return stream;
}

void printer(Pocket i) {  // LINE I

    cout << i << ", ";
}

int main() {
    Pocket mynumbers1[] = {3, 9, 0, 2, 1, 4, 5};

    Pocket mynumbers2[] = {3, 8, 0, 1, 0, 2, 2};

    vector<Pocket> v1(mynumbers1, mynumbers1 + 7);

    vector<Pocket> v2(mynumbers2, mynumbers2 + 7);

    vector<Pocket> v3(7, 0);

    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(),
              minus<Pocket>());  // LINE II

    for_each(v1.rbegin(), v1.rend(), printer);

    return 0;
}