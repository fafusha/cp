#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

//Question is how many distinct non zero elements are in the array
//

int main() {
    int n, inp;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> inp;
        arr.push_back(inp);
    }
    int seconds = 0;
    sort(arr.begin(), arr.end());
    int curr = arr[0];
    if(curr != 0){
        seconds++;
    }

    for (int i = 1; i < n; ++i){
        if(curr != arr[i]){
            if (arr[i] != 0){
                seconds++;
            }
            curr = arr[i];
        }
    }

    cout << seconds << endl;
}