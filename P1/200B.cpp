#include "iostream"
using namespace std;

int main () {
    int n;
    cin >> n;
    int i = 0;
    double orange_volume = 0;
    int p;
    while (i < n){
        cin >> p;
        orange_volume += p / 100.0;
        i++;
    }
    double ans = orange_volume / n * 100;
    cout << ans << endl;
}