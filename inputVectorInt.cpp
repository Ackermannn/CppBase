#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    int a;
    while (cin >> a)
    {   
        vec.push_back(a);
        if (cin.get() == '\n') break;
    }
    for (auto x : vec) cout << x << endl;
}
