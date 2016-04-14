#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() { 
    int q,m,n;
    cin>>q;
  
    set<int> s;
    set<int>::iterator itr;
    for (int i=0; i<q; i++){
        cin>>m>>n;
       
        if (m==1) s.insert(n);
        if (m==2) s.erase(n);
        if (m==3) {
            itr=s.find(n);  
            if (itr==s.end()) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
