#include "iostream"
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    int max_a = 0;
    int e_votes = 0;
    int i = 0;
    while (i < n) {
        cin >> a;
        if (a > max_a) {
            max_a = a;
        }
        e_votes += a;
        ++i;
    }
    int k = max_a;
    int a_votes = k * n - e_votes;
    while (a_votes <= e_votes){
        k++;
        a_votes = k * n - e_votes;
    }
    cout << k << endl;
}
