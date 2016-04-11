#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, x;
    vector<int> v;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    for (int i=n-1;i>0;i--){
        cout<<v[i]<<" ";
    }
    cout<<v[0];
    
    return 0;
}
