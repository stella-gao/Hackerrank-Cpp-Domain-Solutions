#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    
    stringstream ss(str);
    char ch;
    vector<int> v;
    //int size=v.size();
    int a;
    
    while(ss>>a){
        v.push_back(a);
        ss>>ch;
    }
    //ss>>e;
    //v.push_back(e);
    return  v;
   // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
