#include <iostream>
#include <cmath>

int kertoma() {

    int input;
    std::cin >> input;
    int res = 0;
    for(int n = 1; pow(5, n) <= input; n++) {
        res += input / int(pow(5, n));
    }
    std::cout << res << std::endl;
    return 0;
}
