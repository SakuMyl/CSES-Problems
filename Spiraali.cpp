#include <iostream>

using namespace std;
int spiraali() {
    long y, x;
    cin >> y;
    cin >> x;
    long bigger;
    if(y >= x) {
        bigger = y;
    } else {
        bigger = x;
    }
    bool even = bigger % 2 == 0;
    long res;
    if(even) {
        res = bigger * bigger - bigger - x + y + 1;
    } else {
        res = bigger * bigger - bigger - y + x + 1;
    }
    cout << res << endl;
    return 0;
}

