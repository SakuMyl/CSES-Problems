#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int apartments() {

    int applicants, apartments, difference;
    cin >> applicants;
    cin >> apartments;
    cin >> difference;
    vector<long> desiredSizes, sizes;
    for(int i = 1; i <= applicants; i++) {
        long a;
        cin >> a;
        desiredSizes.push_back(a);
    }
    for(int i = 1; i <= apartments; i++) {
        long a;
        cin >> a;
        sizes.push_back(a);
    }
    sort(desiredSizes.begin(), desiredSizes.end());
    sort(sizes.begin(), sizes.end());
    int counter = 0;
    int res = 0;
    for(int a = 0; a < desiredSizes.size(); a++) {
        while(counter < sizes.size() && desiredSizes[a] >= sizes[counter] - difference) {
            if(abs(desiredSizes[a] - sizes[counter]) <= difference) {
                res += 1;
                counter += 1;
                break;
            }
            counter += 1;
        }
    }
    cout << res << endl;
    return 0;

}
