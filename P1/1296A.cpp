#include "iostream"
using namespace std;

int main () {
    int t;
    cin >> t;
    int i = 0;
    while (i < t) {
        int a;
        cin >> a;
        int j = 0;
        int arr_sum = 0;
        bool is_odd = false;
        bool is_even = false;
        while (j < a) {
            int el;
            cin >> el;
            arr_sum += el;
            if (el % 2 == 0) {
                is_even = true;
            } else {
                is_odd = true;
            }
            ++j;
        }
        if (arr_sum % 2 == 1) {
            cout << "YES" << endl;
        } else {
            if (is_odd == true && is_even == true) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }

        }
        ++i;
    }
}