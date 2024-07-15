#include <iostream>
using namespace std;
int main() {
    int a;
    a = 5;
    int k=a-1;
    for(int i=0;i<a;i++) {
        for(int j=0;j<a;j++) {
            (i==j || j==k) ? cout<<"*" : cout<<" ";
        }
        k--;
        cout<<endl;
    }
}
