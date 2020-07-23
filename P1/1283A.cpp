#include "iostream"
using namespace std;

int main () {
    int t, h, m;
    cin >> t;
    int i = 0;
    while (i < t) {
        cin >> h >> m;
        cout << (23 - h) * 60 + 60 - m << endl;
        ++i;
    }

}
