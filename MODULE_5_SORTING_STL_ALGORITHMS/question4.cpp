#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;
class Pocket {
    int value;

   public:
    Pocket(int value) : value(value) {}

    int getValue() const {
        return value;  //
    }

    value operator>(const Pocket& _Right) const {
        return value > _Right.value;  //
    }
};

ostream& operator<<(ostream& stream, const Pocket& pocket) {
    stream << pocket.getValue();
    return stream;
}

void printer(Pocket i) {
    cout << i << ", ";  //
}

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};
    vector<Pocket> v1(mynumbers, mynumbers + 7);

    sort(v1.begin(), v1.end(), greater<Pocket>());  // LINE I
    for_each(v1.begin(), v1.end(), printer);        // LINE II

    return 0;
}