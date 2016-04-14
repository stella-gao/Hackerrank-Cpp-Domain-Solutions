#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n;
    cin>>n;
    int m;
    for(int i=0; i<n;i++){
        cin>>m;
        v.push_back(m);
    }
    int x,a,b;
    cin>>x>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    cout<<v.size()<<endl;
    
    for(int i=0; i< v.size()-1;i++){
        cout<<v[i]<< " ";
    }
    cout<<v[v.size()-1];
    return 0;
}
