#include "iostream"
using namespace std;

int main(){
    int n, k, inp;
    cin >> n >> k;
    int eligibleStudents = 0;
    for (int i = 0; i < n; ++i){
        cin >> inp;
        if ((5 - inp) >= k){
            ++eligibleStudents;
        }
    }
    cout << eligibleStudents / 3 << endl;

}