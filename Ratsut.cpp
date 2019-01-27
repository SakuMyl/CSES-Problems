#include <iostream>
//#include <cstdlib>

using namespace std;

int ratsut() {

    long input;
    cin >> input;
    long b = input * input;
    cout << b * (b - 1) / 2 - 4 * (input - 2) * (input - 1) << endl;
    return 0;
}

