#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
    map<string,int> m;
    //m.insert(make_pair("hello",9));
   // m.erase(val);
    map<string,int>::iterator itr=m.find("Maps");
    
    int a; string b; int c;
    
    for(int i=0; i<q;i++){
        cin>>a;
        if (a==1){
            cin>>b>>c;
            if (m.find(b)==m.end()) m.insert(make_pair(b,c));
            else m[b]=m[b]+c;
        }
        if (a==2){
            cin>>b;
            m.erase(b);
        }
        if(a==3){
            cin>>b;
            itr=m.find(b);
            if(itr==m.end()) cout<<0<<endl;
            else cout<<m[b]<<endl;
        }
        
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
