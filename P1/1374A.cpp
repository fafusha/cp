#include "iostream"
using namespace std;

int main () {
    int t;
    cin >> t;
    int x, y, n;
    int i = 0;
    while (i < t) {
        cin >> x >> y >> n;
        int r = n % x;
        if (r >= y) {
            cout << n - (r - y) << endl;
        } else {
            cout << n - x - (r - y) << endl;
        }
        ++i;
    }
}