#include "iostream"
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long odds = n/2 + n % 2;
    long long evens = n/2;
    if (k > odds) {
        cout << 2*(k - odds) << endl;
    } else {
        cout << 2*k - 1 << endl;
    }
}
