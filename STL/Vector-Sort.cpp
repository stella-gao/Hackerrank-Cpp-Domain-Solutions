#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    vector<int> v;
    int x;
    
    for (int i=0; i<N; i++){
        cin>>x;
        v.push_back(x);
    }
    int size=v.size();
    sort(v.begin(),v.end());
    
    for (int i=0; i<N; i++){
        cout<<v[i]<< " ";
        //v.push_back(x);
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
