#include "iostream"
using namespace std;

int digit_sum(int y){
    int d1 = y / 1000;
    int d2 = y % 1000 / 100;
    int d3 = y % 100 / 10;
    int d4 = y % 10;
    int sum = d1 + d2 + d3 + d4;
    return sum;
}

int main(){
    int n;
    cin >> n;
    while(digit_sum(n) % 4 != 0){
        ++n;
    }
    cout << n << endl;

}