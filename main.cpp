#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;


int main() {

    int n = 16, bt_ts = 0,pr = 0;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        bt_ts++;
        for (int j = bt_ts;  2 * j < n; ++j) {
            if(abs(a[2 * i] - a[2 * j]) == abs(a[2 * i + 1] - a[2 * j + 1]) ||
            a[2 * i] + a[2 * i + 1] == a[2 * j] + a[2 * j + 1] ||
            a[2 * i] == a[2 * j] ||
            a[2 * i + 1] == a[2 * j + 1]) {
                pr++;
            }
        }
    }

    if(pr > 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

