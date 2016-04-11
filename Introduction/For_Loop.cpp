#include <iostream>
#include <cstdio>
using namespace std;

void result(int num){
    if (num<1) return;
        else if(num==1) cout<<"one"<<endl;
            else if (num==2) cout<<"two"<<endl;
                else if (num==3) cout<<"three"<<endl;
                else if (num==4) cout<<"four"<<endl;
                else if (num==5) cout<<"five"<<endl;
                else if (num==6) cout<<"six"<<endl;
                else if (num==7) cout<<"seven"<<endl;
                else if (num==8) cout<<"eight"<<endl;
                else if (num==9) cout<<"nine"<<endl;
                else if (num>9 && num%2==0) cout<<"even"<<endl;
                else cout<<"odd"<<endl;
}

int main() {
    // Complete the code.
    
    int a1,a2;
    
    cin>>a1>>a2;
    for(int i=a1; i<=a2; i++){
        result(i);
    }
            
    return 0;
}
