#include <sstream>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> v;
    int a;
    char c;
    string rest;
    int b;
    for(int i = 0; i < str.size(); i += (int)log10(abs(a)) + 2 + b) {
        ss >> a >> c >> rest;
        v.push_back(a);
        ss = stringstream(rest);
        b = (a<0)?1:0;
    }
    return v;
}

int stringstreamexercise() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}



