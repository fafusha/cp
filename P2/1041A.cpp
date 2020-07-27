#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main() {
    int n, inp;
    vector<int> keyb;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> inp;
        keyb.push_back(inp);
    }
    sort(keyb.begin(), keyb.end());
    int temp = keyb[0];
    int stolen = 0;
    for (int i = 1; i < n; ++i) {
        stolen += keyb[i] - temp -1;
        temp = keyb[i];
    }
    cout << stolen << endl;
}