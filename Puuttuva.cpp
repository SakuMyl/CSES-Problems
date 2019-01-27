#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int puuttuva() {
    long input1, input2, sum1, sum2;
    cin >> input1;
    sum1 = input1*(input1 + 1)/2;
    sum2 = 0;
    for(int i = 1; i < input1; i++) {
        cin >> input2;
        sum2 += input2;
    }
    cout << sum1 - sum2 << endl;
    return 0;



}