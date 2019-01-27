#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;
    double sum = 0;
    double a;
    vector<double> v;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        v.push_back(a);
        sum += a;
    }
    double average = sum / 10;
    double squaredError = 0;
    for(int i = 0; i < n; i++) {
        squaredError += pow((v[i]-average),2);
    }
    cout << "Average: " << average << endl;
    cout << "Error: " << sqrt(squaredError / (n*(n-1))) << endl;
    cout << "Git works" << endl;
}
