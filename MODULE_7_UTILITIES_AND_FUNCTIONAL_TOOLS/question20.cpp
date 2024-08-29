#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

class Pocket {
    int value;

   public:
    Pocket(int value) : value(value) {}

    int getValue() const

    {
        return value;
    }

    operator int() const

    {
        return value;
    }

    bool operator<(const Pocket& _Right) const

    {
        return value < _Right.value;
    }
};

ostream& operator<<(ostream& stream, const Pocket& pocket)

{
    stream << pocket.getValue();

    return stream;
}

void printer(Pocket i) {  // LINE I

    cout << i << ", ";
}

int main() {
    Pocket mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<Pocket> v1(mynumbers, mynumbers + 7);

    for_each(v1.begin(), v1.end(), bind1st(plus<Pocket>(), 1));  // LINE II
    for_each(v1.rbegin(), v1.rend(), printer);

    return 0;
}