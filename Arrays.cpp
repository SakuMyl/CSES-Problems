#include <iostream>
#include <vector>

using namespace std;

int arrays() {
    int n, q;
    cin >> n;
    cin >> q;
    vector<vector<int>> arrs;
    for(int i= 0; i < n; i++) {
        int k;
        vector<int> arr;
        cin >> k;
        for(int j = 0; j < k; j++) {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        arrs.push_back(arr);
    }
    for(int i=1; i <= q; i++) {
        int a, b;
        cin >> a;
        cin >> b;
        cout << arrs[a][b] << endl;
    }
    return 0;


}

