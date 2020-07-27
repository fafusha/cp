#include "iostream"
#include "vector"
using namespace std;

int main(){
    int n, inp;
    cin >> n;
    vector<int> math, prog, pe;
    for (int i = 1; i <= n; ++i){
        cin >> inp;
        switch (inp){
            case 1:
                prog.push_back(i);
                break;
            case 2:
                math.push_back(i);
                break;
            case 3:
                pe.push_back(i);
                break;
        }
    }
    int teams = min(min(math.size(), prog.size()), pe.size());
    cout << teams << endl;
    for (int i = 0; i < teams; ++i){
        cout << math[i] << ' ' << prog[i] << ' ' << pe[i] << endl;
    }
}