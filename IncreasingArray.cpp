#include <iostream>
#include <vector>

using namespace std;

int increasingArray() {

    int n;
    cin >> n;
    int current;
    int next;
    cin >> current;
    long res = 0;
    for(int i = 1; i < n; i++) {
        cin >> next;
        if(next < current) {
           res += current - next;
           next = current;
        }
         current = next;
    }
    cout << res << endl;
    return 0;

}

