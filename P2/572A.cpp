#include "iostream"
#include "vector"
using namespace std;

int main(){
    int a, b, k, m, inp;
    cin >> a >> b >> k >> m;
    vector<int> va, vb;
    for (int i = 0; i < a; ++i){
        cin >> inp;
        va.push_back(inp);
    }
    for (int i = 0; i < b; ++i){
        cin >> inp;
        vb.push_back(inp);
    }
    if(va[k-1] < vb[0]){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}