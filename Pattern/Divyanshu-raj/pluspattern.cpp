#include <iostream>
using namespace std;

int main() {
    int a;
    a = 5;

    for(int i=0;i<a;i++) {
        for(int j=0;j<a;j++) {
            if(i==a/2 || j==a/2) {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
