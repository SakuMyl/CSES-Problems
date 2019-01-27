#include <iostream>
#include <vector>

using namespace std;

int permutations() {

    int input;
    cin >> input;
    vector<int> output;
    if(input == 3 || input == 2) {
        cout << "NO SOLUTION" << endl;
    } else if(input == 1) {
        cout << 1 << endl;
    } else {
        int a = 2;
        for (int i = 1; i <= input; i++) {
            cout << a << " ";
            if (a + 2 <= input) {
                a += 2;
            } else {
                a = 1;
            }
        }
    }

    return 0;

}

