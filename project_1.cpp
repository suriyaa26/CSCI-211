/*//Suriya Sristi
#include <iostream>
#include <cmath>
using namespace std;

bool psquare(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main() {
    int i = 1;
    bool x = false;

    while (!x && i < 100) {
        int square = i * i;
        if (square % 100 % 2 == 1 && psquare(square)) {
            cout << "The first perfect square with odd last two digits is: " << square << " \n";
            x = true;
        }
        ++i;
    }

    if (!x) {
        cout << "None found.\n";
    }

    return 0;
}

*/