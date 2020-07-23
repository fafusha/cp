#include "iostream"
using namespace std;

int main() {
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << w1 + 2 + 2 * h1 + w1 - w2 + 2 + 2 * (h2 - 1) + w2 + 2 << endl;

}
