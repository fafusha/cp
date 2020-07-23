#include "iostream"
using namespace std;

int main () {
    int n;
    cin >> n;
    int a, b;
    int i = 0;
    while (i < n) {
        cin >> a >> b;
        if (a % b == 0){
            cout << 0 << endl;
        }
        else {
            cout << b - (a % b) << endl;
        }
        ++i;
    }
}